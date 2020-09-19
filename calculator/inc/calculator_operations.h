/**
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 + operand2
*/
int addition(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 - operand2
*/
int subtraction(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 * operand2
*/
int multiplication(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int division(int operand1, int operand2);
/**
* finds sine function value and returns the result
* @param[in] operand1
* @return float value of the sine(operand1)
*/
float sine(float  operand1);
/**
* finds cosine function value and returns the result
* @param[in] operand1
* @return float value of the cosine(operand1)
*/

float cosine(float operand1);
/**
* finds tangent function value and returns the result
* @param[in] operand1
* @return float value of the tangent(operand1)
*/

float tangent(float x);
/**
* finds sineh function value and returns the result
* @param[in] operand1
* @return float value of the sinh(operand1)
*/

float sineh(float x);
/**
* finds cosineh function value and returns the result
* @param[in] operand1
* @return float value of the cosineh(operand1)
*/

float cosineh(float x);
\/**
* finds tangenth function value and returns the result
* @param[in] operand1
* @return float value of the tangenth(operand1)
*/

float tangenth(float x);
/**
* finds logten function value and returns the result
* @param[in] operand1
* @return float value of the logten(operand1)
*/

float logten(float x);
/**
* finds squareroot function value and returns the result
* @param[in] operand1
* @return float value of the squareroot(operand1)
*/

float squareroot(float x);
/**
* finds exponent function value and returns the result
* @param[in] operand1
* @return float value of the exponent(operand1)
*/

float exponent(float operand1);
/**
* finds power function value and returns the result
* @param[in] operand1
* @return float value of the power(operand1)
*/

float power(float x,float y);
/**
* finds factorial function value and returns the result
* @param[in] operand1
* @return float value of the factorial(operand1)
*/
int factorial(int x);
/**
* finds absolute function value and returns the result
* @param[in] operand1
* @return float value of the absolute(operand1)
*/

float absolute(float x,float y);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
