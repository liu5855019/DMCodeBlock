import Sprite   from '../base/sprite'
import DataBus  from '../databus'

const BULLET_IMG_SRC = 'images/bullet.png'
const BULLET_WIDTH   = 16
const BULLET_HEIGHT  = 30



let databus = new DataBus()

export default class Bullet extends Sprite {
  constructor() {
    super(BULLET_IMG_SRC, BULLET_WIDTH, BULLET_HEIGHT)
  }

  init(x, y, speed) {
    this.x = x
    this.y = y

    this.speed = speed

    this.visible = true
  }

  // 每一帧更新子弹位置
  update() {
    this.y -= this.speed

    // 超出屏幕外回收自身
    if ( this.y < -this.height )
      databus.removeBullets(this)
  }
}