int adjacentElementsProduct(std::vector<int> inputArray) {
int len = inputArray.size();
    int temp=0;
    int i=0;
    int j=1;

    int currentLargest = inputArray[0] * inputArray[1];

for(int i = 1; i < len - 1; i++){

    int firstNumber = inputArray[i];
    int secondNumber = inputArray[i+1];
    if(firstNumber * secondNumber > currentLargest){
        currentLargest = firstNumber * secondNumber;
    }


}

return currentLargest;
}
