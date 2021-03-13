#include<stdio.h>
int main()
{
    int a,b;
    float A,B;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&A,&B);
    int Sum=a+b;
    int Difference=a-b;
    printf("%d %d\n",Sum,Difference);
    float sum=A+B;
    float difference=A-B;
    printf("%0.1f %0.1f\n",sum,difference);
    return 0;
}