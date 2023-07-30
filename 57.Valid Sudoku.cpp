bool isposs(int mat[9][9],int row,int col,int jodalkedekha){
    for(int i = 0;i<9;i++){
        if(mat[row][i] == jodalkedekha) return false;
        if(mat[i][col] == jodalkedekha) return false;
        if(mat[3*(row/3) + i/3][3*(col/3) + i%3] == jodalkedekha)  return false;

    }
    return true;
}
bool valid(int matrix[9][9]){
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            if(matrix[i][j] ==0){
                for(int k=1;k=<9;k++){
                    if(isposs(matrix,i,j,k)){
                        matrix[i][j] = k;
                        if(valid(matrix)) return true;
                        else matrix[i][j] = 0;
                    }
                }
            return false;
            }

        }

    }
    return true;// i never got a true or false matlab mein ghussa he nhi loop mein matlab mein pehle se filled tha

}


bool isItSudoku(int matrix[9][9]) {
    // Write your code here.

    return valid(matrix);
}

