#include<stdio.h>
#include<stdlib.h>
#include <math.h>
void  update(int *a,int *b){
    int sum= *a+*b;
    printf("%d\n",sum);
    int sub=*a-*b;
    int p=abs(sub);
    printf("%d\n",p);
    
    


}
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);  
    int *a,*b;
    a=&A;
    b=&B; 
    update(a,b);
    return 0;

}