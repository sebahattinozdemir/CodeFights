int centuryFromYear(int year) {


 int cen = year / 100 ;

    if( year%100 ==0)
        return cen;
    else
        return cen+1;

}
