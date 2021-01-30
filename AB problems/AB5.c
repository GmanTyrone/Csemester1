#include <stdio.h>
int main(void)
{
    unsigned int a,b,carry,nums;
    while(1){
        carry=0;
        nums=0;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0) break;
        while((a/10!=0 && b/10!=0 && a%10!=0 && b%10!=0)||carry!=0){
            carry=(a%10+b%10+carry)/10;
            if(carry>0)++nums;
            a/=10;
            b/=10;
        }
        printf("%d\n",nums);
    }
    return 0;
}
