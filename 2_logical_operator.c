/*
    concept of logical operators
    logical operators.
    logical operators are used to combine two or more relational expressions. there are 3 logical operators
         for example
         a < b b > c
        1) and operator (&&)
            and operators check both relational expressions. if both expressions are true(1) it return true(1) otherwise it return false(0)
        2) or operator (||)
            or operators check both relational expressions. if any one of the expressions are true(1) it returns true(1) otherwise it returns false.
        3) not operator (!)
            not operator reverse result of any relational expressions. if relational is true it returns false. if relational expressions false it return true
*/
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int result;

    //&& or ||
    result = a < b && b < c; // 10<20(1) && 20<30(1)
    printf("%d %d<%d && %d<%d",result,a,b,b,c);

    result = a < b || b > c; // 10<20(1) || 20>30(0)
    printf("\n%d %d<%d && %d<%d",result,a,b,b,c);

    result = a > b || b > c; // 10>20(0) || 20>30(0)
    printf("\n%d %d>%d && %d<%d",result,a,b,b,c);

    result = !(a == b); //!10 == 20;
    printf("\n%d = !(%d == %d)",result,a,b);

}