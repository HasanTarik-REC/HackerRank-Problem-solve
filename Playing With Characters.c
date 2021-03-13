#include <stdio.h>
int main()
{
    char Sen[100],s[100],ch;
    scanf("%c",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]%*c",Sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",Sen);
    return 0;

}