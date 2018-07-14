import BackGround from './runtime/background'
import Player from './player/index.js'
import DataBus from './databus.js'
import Enemy from './npc/enemy.js'


let ctx = canvas.getContext('2d')
let databus = new DataBus()


/**
 * 游戏主函数
 */
export default class Main {
  constructor() {
    // 维护当前requestAnimationFrame的id
    this.aniId = 0
    
    this.restart()
  }

  restart() {
    canvas.removeEventListener(
      'touchstart',
      this.touchHandler
    )

    this.bg = new BackGround(ctx)
    this.player = new Player()

    console.log(this)

    this.hasEventBind = false

    // 清除上一局的动画
    
    cancelAnimationFrame(this.aniID)
    this.aniID = requestAnimationFrame(
      this.loop.bind(this)
    )
  }

 


  // 游戏结束后的触摸事件处理逻辑
  touchEventHandler(e) {
    e.preventDefault()

    let x = e.touches[0].clientX
    let y = e.touches[0].clientY

    let area = this.gameinfo.btnArea

    if (x >= area.startX
      && x <= area.endX
      && y >= area.startY
      && y <= area.endY)
      this.restart()
  }

  /**
   * canvas重绘函数
   * 每一帧重新绘制所有的需要展示的元素
   */
  render() {
    ctx.clearRect(0, 0, canvas.width, canvas.height)

    this.bg.render(ctx)
    this.player.drawToCanvas(ctx)
    databus.bullets
      .concat(databus.enemys)
      .forEach((item) => {
        item.drawToCanvas(ctx)
      })
  
  }

  // 游戏逻辑更新主函数
  update() {
    this.bg.update()

    // for (let i = 0; i < databus.bullets.length ; i ++) {
    //   databus.bullets[i].update()
    // }
    databus.bullets
      .concat(databus.enemys)
      .forEach((item) => {
        item.update()
      })

    if (databus.frame % 20 == 0 ) {
      this.player.shoot()
    }

    if (databus.frame % 30 == 0) {
      let enemy = databus.pool.getItemByClass('enemy',Enemy)
      enemy.init(5)
      databus.enemys.push(enemy)
    }

  }

  // 实现游戏帧循环
  loop() {
    databus.frame++

    this.update()
    this.render()

    this.aniId = requestAnimationFrame(this.loop.bind(this))
  }
}
