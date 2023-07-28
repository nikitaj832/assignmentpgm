#include<stdio.h>
int main()
{
    int a =3,b =5,temp;
    printf("\n after swapping: a =%d,b=%d",a,b);
    temp=a;
a=b;
    b=temp;
    printf("\n after swapping: a =%d,b=%d",a,b);
}