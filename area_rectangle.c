#include<stdio.h>
int main()
{
    printf("\nThis program calculates the area of rectangle\n");
    float l,b,a,r;
    
    printf("Enter length of rectangle : ");
    scanf("%f",&l);
    printf("Enter breath of rectangle : ");
    scanf("%f",&b);
    a=l*b;
    printf("\nArea of rectangle is : %f ",a);
    
    return 0;

}
