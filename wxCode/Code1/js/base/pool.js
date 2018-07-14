const dict = {
  dict:Symbol('poolDict')
}

/**
 * 简易的对象池实现
 * 用于对象的存贮和重复使用
 * 可以有效减少对象创建开销和避免频繁的垃圾回收
 * 提高游戏性能
 */
export default class Pool {
  constructor() {
    this[dict.dict] = {}
  }

  /**
   * 根据对象标识符
   * 获取对应的对象池
   */
  getPoolBySign(name) {
    if (!this[dict.dict][name]) {
      this[dict.dict][name] = []
    } 
    return this[dict.dict][name] 
  }

  /**
   * 根据传入的对象标识符，查询对象池
   * 对象池为空创建新的类，否则从对象池中取
   */
  getItemByClass(name, className) {
    let pool = this.getPoolBySign(name)

    if (pool.length) {
      return pool.shift()
    } else {
      return new className()
    }
  }

  /**
   * 将对象回收到对象池
   * 方便后续继续使用
   */
  recover(name, instance) {
    this.getPoolBySign(name).push(instance)
  }
}
