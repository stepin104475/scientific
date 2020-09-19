#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float cosine(float operand1)
{
    return (cos (operand1*PI/180));
}
float tangent(float operand1)
{
    return (tan(operand1*PI/180));
}
float sineh(float operand1)
{
    return (sinh(operand1));
}
float cosineh(float operand1)
{
    return (sinh(operand1));
}
float tangenth(float operand1)
{
    return (sinh(operand1));
}
float logten(float operand1)
{
    return (log10(operand1));
}
float squareroot(float operand1)
{
    return (sqrt(operand1));
}
float exponent(float operand1)
{
    return(exp(x));
}
float power(float operand1, float operand2)
{
    return (pow(operand1,operand2));
}
float absolute(float operand1,float operand2)
{

    return abs(operand1-operand2);
}
