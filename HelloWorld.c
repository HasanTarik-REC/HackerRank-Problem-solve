#include <stdio.h>
int main()
{
    char A[100];
    printf("Enter a Line:\n");
    gets(A);
    printf("Hello, World!\n");
    printf("%s\n",A);
    return 0;
}