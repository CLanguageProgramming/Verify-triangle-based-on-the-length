#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the length of side 1 = ");
    scanf("%d", &a);
    printf("Enter the length of side 2 = ");
    scanf("%d", &b);
    printf("Enter the length of side 3 = ");
    scanf("%d", &c);
    if (b+c>a && a+c>b && a+b>c)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}
