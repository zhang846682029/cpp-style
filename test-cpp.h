/**
 * @file test-cpp.h
 * @author Meihua Zhang (zhangmh@keenon.com)
 * @brief doxygen style for cpp
 *
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef TEST_CPP_H
#define TEST_CPP_H

/**
 *  A test class. A more elaborate class description.
 */
class Javadoc_Test {
 public:
  /**
   * An enum.
   * More detailed enum description.
   */
  enum TEnum {
    TVal1,      /**< enum value TVal1. */
    TVal2,      ///< enum value TVal2.
    TVal3       ///< enum value TVal3.
  } * enumPtr,  /**< enum pointer. Details. */
      enumVar;  ///< enum variable. Details.

  /**
   * A constructor.
   * A more elaborate description of the constructor.
   */
  Javadoc_Test() {}

  /**
   * A destructor.
   * A more elaborate description of the destructor.
   */
  ~Javadoc_Test() {}

  /**
   * @brief a normal member taking two arguments and returning an integer
   * value.
   *
   * @param [in] a an integer argument.
   * @param [out] s a constant character pointer.
   * @return int
   */
  int testMe(int a, const char *s);

  /**
   * @brief A pure virtual member.
   *
   * @param c1 the first argument.
   * @param c2 the second argument.
   */
  virtual void testMeToo(char c1, char c2) = 0;

  /**
   * a public variable.
   */
  int publicVar;

  /**
   * a function variable.
   */
  int (*handler)(int a, int b);
};

#endif