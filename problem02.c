//2. Write a C program to add two numbers.

#include <stdio.h>
int input1();
int input2();
int add(int a, int b);
void display(int sum);
int main()
{
    int a, b, sum
    a = input1();
    b = input2();
    sum = add(a, b);
    display(sum);
    return 0;
}
int input1()
{
    int a
    p;rintf("Enter the value of a: ");
    scanf("%d", &a);
    return a;
}
int input2()
{
    int b;
    printf("Enter the value of b: ");
    scanf("%d", &b);
    return b;
}
int add(int a, int b)
{
    return a + b;
}
void display(int sum)
{
    printf("Sum = %d\n", sum);
}
