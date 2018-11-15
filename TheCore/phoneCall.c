int phoneCall(int min1, int min2_10, int min11, int s) {

    if(s<min1)
        return 0;

    int longest=1;
    s=s-min1;
    if(s==0)
        return longest;
    int i=1;
    int t=s;

    while(i<10){
      ++i;
        t-=(min2_10*1);
        if(t<0)
            break;

    }
    --i;
    s-=min2_10*i;
    longest+=i;

    s/=min11;
    longest+=s;

    return longest;

}
