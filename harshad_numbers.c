int sumOfTheDigitsOfHarshadNumber(int x) {

    int y=x,sum=0;

    while(y>0){

        sum=sum+(y%10);
        y=y/10;
    }
    if(x%sum==0){
        return sum;
    }
    else{
        return -1;
    }
    
}