bool checkPalindrome(char * inputString) {

    int len= strlen(inputString);

    int low=0;
    int high =len-1;

    while(low<high){

        if(inputString[low]!=inputString[high])
            return false;
        else
            low++;
            high--;
    }

    return true;

}
