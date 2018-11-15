int matrixElementsSum(std::vector<std::vector<int>> matrix) {



    int i,j,sum;
    sum=0;
    for(i=0;i<matrix[0].size();i++){

        for(j=0;j<matrix.size();j++){

            if(matrix[j][i] != 0){

                sum = sum + matrix [j][i];
            }
            else{
                break;
            }
        }
    }

    return sum;

}
