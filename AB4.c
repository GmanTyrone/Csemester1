#include <stdio.h>
int main(void)
{
    int N,cred[16];
    int a,i,j,sum;
    scanf("%d",&N);
    for(i=0;i<N;++i){
        for(j=0;j<16;++j){
            scanf(" %1d",&cred[j]);
        }
        sum=0;
        for(a=0;a<16;++a){
            if(a%2!=0){
                sum+=cred[a];
            }
            else{
                sum+=(int)((int)(cred[a]*2)/10);
                sum+=(int)((int)(cred[a]*2)%10);
            }
        }
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
