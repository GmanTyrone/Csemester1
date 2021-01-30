#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n,m,a,i,j,k,test,temp,key=0;
    scanf("%d %d",&n,&m);

    int array[3][m+1];
    int solution[m+1];

    //scans key
    j=(int)pow(10,m-1);
    for(i=0;i<m;++i){
        scanf("%d",&temp);
        key+=temp*j;
        j/=10;
    }

    //Checks the doors
    for(a=0;a<n;++a){

    //Checks a single door
        again:
        for(k=0;k<=m;++k)
        {
            scanf("%d",&array[0][k]);
        }
        for(k=0;k<m;++k)
        {
            if(k==m-1)array[1][k]=array[0][k+1];
            else array[1][k]=(int)abs(array[0][k+2]-array[0][k+1]);
        }
        for(k=0;k<m;++k)
        {
            if(array[1][k]>=array[0][k])array[2][k]=1;
            else array[2][k]=0;
        }
        test=0;
        j=(int)pow(10,m-1);
        for(i=0;i<m;++i){
            test+=array[2][i]*j;
            j/=10;
        }

        if(test==key){
            for(i=0;i<=m;++i){
                solution[i]=array[0][i];
            }
        }

    }
    for(i=0;i<=m;++i){
                if(i!=m) printf("%d ",solution[i]);
                else printf("%d",solution[i]);
            }

    return 0;
}
