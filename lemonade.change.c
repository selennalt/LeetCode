bool lemonadeChange(int* bills, int billsSize) {

    int i,j,k,c5=0,c10=0,c20=0;

 
      for(i=0;i<billsSize;i++){

        if(bills[i]==5){

            c5++;
        }

        else if(bills[i]==10){

            c10++;
            c5--;
            
             if(c5<0){

        return false;
    }


        }
        else if(bills[i]==20){
            c20++;
            
            if(c10==0){
            	c5=c5-3;
			}
            else{
            	c5--;
            	c10--;
			}
                        
             if(c5<0 || c10<0){

        return false;
    }

        }
    }
     
    
    

    return true;

}

