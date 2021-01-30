#include <stdio.h>
#include <string.h>
int main(void)
{
    char words[1000][1000];
    int i=0;
    do{
        scanf("%s",&words[i]);
        ++i;
    }while(getchar()==32);
    for(i-=1;i>=0;--i){
        printf("%s ",words[i]);
    }
    return 0;
}
