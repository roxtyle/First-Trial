// c program to print given number is equal or not
#include <stdio.h>
int main()

{
    int a,b;
    printf("enter an a value a: ");
    scanf("%d",&a);
    printf("enter an b value");
    scanf("%d",&b);
    //if given two numbers are greater then or equal to b
    if(a>b)
    {
        printf("a is a big number");
    }
    else{
        printf("b is a big number");
    }
     return 0;
}