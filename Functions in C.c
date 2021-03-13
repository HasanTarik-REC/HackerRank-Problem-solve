#include<stdio.h>
#include<stdlib.h>
int large;

int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        large=a;
    }
    else if(b>c && b>d && b>a){
        large=b;
    }
    else if(c>d && c>a && c>b){
        large =c;
    }
    else {
    large = d;
    }
    return large;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max= max_of_four(a,b,c,d);
    printf("%d\n",max);
    return 0;
}