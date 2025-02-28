int heightChecker(int* heights, int heightsSize) {

    int i,j,k,a;
    int counter=0;

    int array[heightsSize];

    for(k=0;k<heightsSize;k++){

        array[k]=heights[k];
    }


    for(i=0;i<heightsSize-1;i++){

        for(j=1;j<heightsSize-i;j++){

            if(array[j-1]>array[j]){

                int temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }

    }

    for(a=0;a<heightsSize;a++){

        if(heights[a]!=array[a]){

            counter++;
        }
    }

   return counter;
    
}