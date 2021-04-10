#include <stdio.h>
int main()
{
    int n,sum=0,count=0,a,b;
    scanf("%d",&n);
    while (n!=0)
    {
        a=n%10;
        sum=sum+a;
        b=n/10;
        n=b;
    }
    printf("%d\n",sum);
    return 0;
    
}