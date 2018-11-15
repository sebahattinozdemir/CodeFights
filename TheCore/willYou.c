bool willYou(bool young, bool beautiful, bool loved) {

if((young==true && beautiful==true) && loved==false)
    return true;

  else  if((young==false || beautiful==false) && loved==true)
     return true;
    else
        return false;

}
