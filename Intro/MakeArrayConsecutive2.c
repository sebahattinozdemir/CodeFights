int makeArrayConsecutive2(std::vector<int> statues) {

   int i, j,temp;
   for (i = 0; i < statues.size()-1; i++){
       for (j = 0; j < statues.size()-i-1; j++){
           if (statues[j] > statues[j+1]){
               temp=statues[j];
                statues[j]=statues[j+1];
                 statues[j+1]=temp;} }  }

    //max-min+1-arraysize
    return statues[statues.size()-1]-statues[0]+1-statues.size();


}
