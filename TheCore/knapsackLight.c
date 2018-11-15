int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {

    int sum=weight1+weight2;
    if(sum>maxW){

        if(weight1>maxW && weight2>maxW)
            return 0;
        if(weight1<=maxW && value1>value2){
            return value1;
        }
        else if(weight2<=maxW && value2>value1)
            return value2;
    }
    else if(sum<=maxW)
        return value1+value2;
}
