#include <math.h> 

int math(num1, num2, Operator)
{
    switch(Operator)
    {
        case '+':
            return num1 + num2;
        break;

        case '-':
            return num1 - num2;
        break;

        case '*':
            return num1 * num2;
        break;

        case '/':
            return num1 / num2;
        break;

        case '%':
            return num1 % num2;
        break;

        case '<':
            return num1 << num2;
        break;

        case '>':
            return num1 >> num2;
        break;

        case '&':
            return num1 & num2;
        break;

        case '|':
            return num1 | num2;
        break;

        case '^':
            return num1 ^ num2;
        break;

        case '~':
            return ~num1;
        break;

        default:
            return 0;
    }
}
