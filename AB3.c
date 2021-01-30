int main(void)
{
    int nums[8]={3, 5, 9, 2, 8, 9, 10, 2};
    int size=8;
    int pos[size];
    int length=size;
    int i,j,k=0;
    for(i=0;i<size;++i){
        for(j=0;j<i;++j){
            if(nums[j]==nums[i]){
                    pos[k]=i;
                    ++k;
                    --length;
            }
        }
    }

    for(i=k-1;i>=0;--i){
        for(j=pos[i];j<size;++j)
            {
                nums[j]=nums[j+1];
            }
    }

    for(int i=length;i<size;++i){
        nums[i]="";
    }

    for(j=0;j<size;++j){
            printf("%d ",nums[j]);
        }


    return length;
}
