#include <stdio.h>
int main (void)
{
    int a_rows,a_cols;
    int b_rows,b_cols;
    int i,j,k;
    //scans the first matrix
    scanf("%d %d",&a_rows,&a_cols);
    int a[a_rows][a_cols];
    for (i=0;i<a_rows;++i){
        for(j=0;j<a_cols;++j){
            scanf("%d",&a[i][j]);
        }
    }

    //scans the second matrix
    scanf("%d %d",&b_rows,&b_cols);
    int b[b_rows][b_cols];
    for (i=0;i<b_rows;++i){
        for(j=0;j<b_cols;++j){
            scanf("%d",&b[i][j]);
        }
    }

    //checks if the multiplication is possible
    if(a_cols!=b_rows||a_rows==0||b_rows==0||a_cols==0||b_cols==0)printf("No result");

    //does the multiplication
    else{
        int X=a_cols;
        int results[a_rows][b_cols];


    //stores the values in the matrix
    for (i=0;i<a_rows;++i){
        for(j=0;j<b_cols;++j){
            for(k=0;k<X;k++){
                if(k==0)results[i][j]=(a[i][k]*b[k][j]);
                else results[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }

    //prints the values in the matrix
    for (i=0;i<a_rows;++i){
        for(j=0;j<b_cols;++j){
            printf("%d ",results[i][j]);
            if(j==b_cols-1 && i!=a_rows-1)printf("\n");
        }
    }


    }
    return 0;
}
