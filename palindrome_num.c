
bool isPalindrome(int x) {

    int a=x;
    int b=x;
    int i,j,k;
    int len=0;

    if(x<0){
        return false;
    }
    else if(x==0){
        return true;
    }

    while(a!=0){

        a=a/10;
        len++;
    }

    

    int dizi[len];

    for(i=len-1;i>=0;i--){

        dizi[i]=b%10;
            b/=10;
    }
    for(j=0;j<len/2;j++){

        if(dizi[j]!=dizi[len-1-j]){

            return false;
        }

    }

    return true;

}


