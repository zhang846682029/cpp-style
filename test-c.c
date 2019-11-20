/**
 * @file test-c.c
 * @author Meihua Zhang (zhangmh@keenon.com)
 * @brief
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "test-c.h"

int g_test1 = 0;  ///< 干什么的

/**
 * @brief 只是打印一条信息
 *
 */
void hello(void) {
  printf("hello ");     // comment 1
  printf("world !\n");  // 接上面的继续写注释
}