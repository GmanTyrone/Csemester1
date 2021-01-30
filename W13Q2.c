#include <stdio.h>
#include <string.h>
char *mystrcat(char *dest, char *src)
{
    char *p=dest;
    char *q=src;
    while(*p!='\0')++p;
    while(*q!='\0'){*p=*q;++p;++q;}
    *p='\0';
}

char *trim(char *dest)
{
    char *s=dest;
    char *e=dest;
    while(*e!='\0')++e;--e;
    while(*e=='\n'|| *e=='\t' || *e==' ')--e;++e;e='\0';
    while(*s=='\n'|| *s=='\t' || *s==' ')++s;
    dest=s;
    return dest;
}

int main(void)
{
    char a[100]="   ab  fafaj e c   ";
    trim(a);
    puts(a);
    printf("%d",strlen(a));
    return 0;
}
