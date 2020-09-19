#include <calculator_operations.h>

int add(int operand1, int operand2)
{   
    int result;
    result= operand1 + operand2;
    return result;
}

int subtract(int operand1, int operand2)
{
    int result;
    result= operand1 - operand2;
    return result;
}

int multiply(int operand1, int operand2)
{
    int result;
    result= operand1 * operand2;
    return result;
}

int divide(int operand1, int operand2)
{
    int result;
    if(0 == operand2)
        return 0;
    else
        result= operand1 / operand2;
    return result;
}
int modulus(int operand1, int operand2)
{
    int result;
    return operand1 % operand2;
    return result;
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
int not(int operand1)
{
    if(operand1==0)
        return 1;
    else
        return 0;
}
int nand(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==1 && operand2==1)
    return 0;
    else
    return 1;
}
int nor(int operand1, int operand2)
{
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==0 && operand2==0)
    return 1;
    else
    return 0;
}
int factorial(int operand1)
    {   
        int fact=1;
        if (operand1==0)
        {
            return 1;
        }
        if (operand1 < 0)
        {
            return 0;
        }
        else
        {
            for (int i = 1; i <= operand1; ++i)
            {
                fact *= i;
            }
        return fact;
        }
    }
int adder3bit(int operand1, int operand2, int operand3)

{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
          {
             return -1;
          }
     else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
          {
              return -1;
           }
     else
        {
           if(operand1==0 && operand2==0 && operand3==0)
              {
               return 0;
              }
           else if(operand1==0 && operand2==0 && operand3==1)
              {
               return 1;
              }
            else if(operand1==0 && operand2==1 && operand3==0)
               {
               return 1;
               }
        else if(operand1==0 && operand2==1 && operand3==1)
              {
               return 0;
               }
       else if(operand1==1 && operand2==0 && operand3==0)
               {
               return 1;
               }
       else if(operand1==1 && operand2==0 && operand3==1)
              {
               return 0;
               }
       else if(operand1==1 && operand2==1 && operand3==0)
               {
               return 0;
               }
        else 
              return 1;
     }
 }
int subtractor3bit(int operand1, int operand2, int operand3)
{
    if(operand1 < 0 || operand2 < 0 || operand3 < 0)
    {
        return -1;
    }
    else if (operand1 > 1 || operand2 > 1 || operand3 > 1)
    {
        return -1;
    }
    else
    {
        if(operand1==0 && operand2==0 && operand3==0)
        {
            return 0;
        }
        else if(operand1==0 && operand2==0 && operand3==1)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==0)
        {
            return 1;
        }
        else if(operand1==0 && operand2==1 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==0 && operand3==0)
        {
            return 1;
        }
        else if(operand1==1 && operand2==0 && operand3==1)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==0)
        {
            return 0;
        }
        else if(operand1==1 && operand2==1 && operand3==1)
        {
            return 1;
        }
    }
}
