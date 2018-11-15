int circleOfNumbers(int n, int firstNumber) {

         int result = n/2+firstNumber;
    if(result>=n)
        return firstNumber-n/2;

    else  if(result<n)
        return result;
}
