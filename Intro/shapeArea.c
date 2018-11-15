int shapeArea(int n) {

int i;
    int sum=0;
    int sum1=0;

    for(i=1;i<=n;i++){

     sum=sum + 2*i-1;

    }

    for(i=n-1;i>0;i--){
        sum1=sum1 + 2*i-1;
    }

    return sum+sum1;

}
