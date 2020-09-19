#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
float calculator_operand1 = 0;
float calculator_operand2 = 0;
int calculator_operand3=0;

/* Valid operations */
enum operations{ sine=1, cosine, tangent,sineh,cosineh,tangenth,logten,squareroot,exponent,addition,subtraction,multiplication,division,modulus,factorial, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. sine\n2. cosine\n3. tangent\n4. sineh\n5. cosineh\n6. tangenth\n7. logten\n8. squareroot\n9. exponent\n10. addition\n11. subtraction\n12. multiplication\n13. division\n14. modulus\n15.power\n16.factorial\n17. Exit");
    printf("\n\tEnter your choice\n");

     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        if(n<9 && n>0){
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%f", &calculator_operand1);
        }
        else if(n>9 && n<16){
             printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%f %f", &calculator_operand1, &calculator_operand2);
        }
        else if(n==16){
         printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d", &calculator_operand3);
}
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }
    switch(calculator_operation)
    {
        case 1:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            sine(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 2:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            cosine(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 3:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            tangent(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 4:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            sineh(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 5:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            cosineh(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 6:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            tangenth(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 7:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            logten(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 8:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            squareroot(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 9:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            exponent(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case 10:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            addition(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 11:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            subtraction(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 12:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            multiplication(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 13:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            division(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 14:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            modulus(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 15:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            power(calculator_operand1,calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 16:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            factorial(calculator_operand3));

            __fpurge(stdin);
            getchar();
            break;

        case 17:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((sine <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
