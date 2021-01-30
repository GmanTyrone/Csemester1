void transpose(int matrix[10][10], int row, int col)
{
    int temp[10][10];
    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            temp[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            matrix[i][j]=temp[i][j];
        }
    }
}
