bool arithmeticExpression(int a, int b, int c) {

    int sum=a+b;
    int substr=a-b;
    int mul=a*b;
    float div=(float)a/b;

    if(sum==c)
        return true;
    else if(substr==c)
        return true;
    else if(mul==c)
        return true;
    else if(div==c)
        return true;
    else
        return false;




}
