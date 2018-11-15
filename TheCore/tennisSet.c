bool tennisSet(int score1, int score2) {
if((score1==6 || score2==6) && (score1<=6 && score2<=6)){

    if(score1==6 && score2==6) return false;

    if((score1>score2 || score2>score1) && (score1 !=5 && score2!=5)) return true;
    else
        return false;

}
else if((score1==7 || score2==7) && (score1<=7 && score1>=5) && (score2<=7 && score2>=5) ){

    if(score1==7 && score2==7) return false;
    else
        return true;


}
else
    return false;




}
