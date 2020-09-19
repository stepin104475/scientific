#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_primenumber(void);
void test_greater(void);
void test_smaller(void);
void test_square(void);
void test_and(void);
void test_or(void);
void test_not(void);
void test_nand(void);
void test_nor(void);
void test_factorial(void);
void test_adder3bit(void);
void test_subtractor3bit(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "primenumber", test_primenumber);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "smaller", test_smaller);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "and", test_and);
  CU_add_test(suite, "or", test_or);
  CU_add_test(suite, "not", test_not);
  CU_add_test(suite, "and", test_nand);
  CU_add_test(suite, "or", test_nor);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "adder3bit", test_adder3bit);
  CU_add_test(suite, "subtractor3bit", test_subtractor3bit);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_modulus(void) {
  CU_ASSERT(3 == divide(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == divide(2, 2));
}
void test_primenumber(void) {
  CU_ASSERT(1 == primenumber(5));
  
  /* Dummy fail*/
  CU_ASSERT(0 == primenumber(2));
}
void test_greater(void) {
  CU_ASSERT(10 == greater(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(1 == greater(2, 1));
}
void test_smaller(void) {
  CU_ASSERT(7 == smaller(10, 7));
  
  /* Dummy fail*/
  CU_ASSERT(4 == divide(4, 2));
}
void test_square(void) {
  CU_ASSERT(49 == square(7));
  
  /* Dummy fail*/
  CU_ASSERT(5 == square(2));
}
void test_and(void) {
  CU_ASSERT(1 == and(1,1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == and(1,0));
}
void test_or(void) {
  CU_ASSERT(1 == or(1,0));
  
  /* Dummy fail*/
  CU_ASSERT(0 == or(1,1));
}
void test_not(void) {
  CU_ASSERT(1 == not(0));
  
  /* Dummy fail*/
  CU_ASSERT(0 == not(0));
}
void test_nand(void) {
  CU_ASSERT(0 == and(1,1));
  
  /* Dummy fail*/
  CU_ASSERT(0 == and(1,0));
}
void test_nor(void) {
  CU_ASSERT(0 == or(1,0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == or(1,1));
}
void test_factorial(void) {
  CU_ASSERT(12 == factorial(4));
  
  /* Dummy fail*/
  CU_ASSERT(5 == factorial(2));
}
void test_adder3bit(void) {
  CU_ASSERT(0 == adder3bit(1,1,0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == adder3bit(1,0,0));
}
void test_subtractor3bit(void) {
  CU_ASSERT(0 == adder3bit(1,1,0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == adder3bit(1,0,0));
}
