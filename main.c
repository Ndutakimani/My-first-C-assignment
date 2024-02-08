#include <stdio.h>

int main(void)
{
int a , b , c , d;
printf("input first number :");
scanf("%d" , &a);
printf("input second number:");
scanf("%d" , &b);
printf("input third number:");
scanf("%d" , &c);
d = a + b + c;
printf("%d + %d + %d = %d\n" , a,b,c,d);
return 0;
}
