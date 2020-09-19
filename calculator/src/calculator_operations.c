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
    return(exp(operand1));
}
float power(float operand1, float operand2)
{
    return (pow(operand1,operand2));
}
float absolute(float operand1,float operand2)
{

    return abs(operand1-operand2);
}
int primenumber(int operand1)
    {
        int i,count=0;
        if(operand1<0)
        {
            return -1;
        }
        for(i=1;i<=operand1;i++)
        {
            if(operand1%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
int greater(int operand1, int operand2)
{
    if(operand1 > operand2)
        return operand1;
    else
        return operand2;
}
int smaller(int operand1, int operand2)
{
    if(operand1 < operand2)
        return operand1;
    else
        return operand2;
}
int square(int operand1)
{
    int result;
    result= operand1 * operand1;
    return result;
}	
int and(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 1;
    else if(operand1==1 && operand2==1)
    return 1;
    else
    return 0;
}
int or(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 1;
    else if(operand1==0 && operand2==0)
    return 0;
    else
    return 1;
}

