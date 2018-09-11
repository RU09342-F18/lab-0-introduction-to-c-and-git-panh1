# Lab Exercise 0: Intro to C Language and Github

           Created On: Sept 10, 2018
          Last Edited: Sept 10, 2018
               Author: Helen Pan
    Dependent Library: math.h

### Assignment

The goal of this lab is to create a "math.c" and "math.h" file that includes the capability to do simple math operations such as the following:

- Addition          (num1 + num2)
- Subtraction       (num1 - num2)
- Multiplication    (num1 * num2)
- Division          (num1 / num2)
- Modulus           (num1 % num2)

In addition, it also needs to include bitwise math of:

- Left Shift        (num1 << num2)
- Right Shift       (num1 >> num2)
- Bitwise AND       (num1 & num2)
- Bitwise OR        (num1 | num2)
- Bitwise XOR       (num1 ^ num2)
- Bitwise Inverse   (~num1)

### math.h

In the "math.h" file, a function is initialize "int math()" with three arguments of "int num1", "int num2", and "char Operator" for the mathematical operation.

    'int math(int num1, int num2, char Operator)'

### math.c

In the "math.c" file, the "math ()" function is condition with switch statements for the different mathematical operations. Users will connect their two values to "num1" and "num2" and their operation to "Operator". Depending on which operation, the switch statement will check and run the case of the math operation and return the computed value. 

For instance, if "num1 = 3", "num2 = 5", and "Operator == +",than the swtich will check for operator "+", computes and return the value of "8". 

The switch statement default is set to "return 0" for all other unlisted inputs for "Operator".