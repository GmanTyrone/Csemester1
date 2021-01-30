#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char word[n][51];
    char temp[51]={'\0'};
    for(int i=0;i<n;++i){
        scanf("%s",word[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(strcmp(word[j],word[j+1])>0){
                strcpy(temp,word[j]);
                strcpy(word[j],word[j+1]);
                strcpy(word[j+1],temp);
            }
        }
    }
    printf("\nResult:\n");
    for(int i=0;i<n;++i){
        printf("%s\n",word[i]);
    }
    return 0;
}
