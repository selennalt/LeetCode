int singleNumber(int* nums, int numsSize) {

    int i,j;
    int temp;

    for(i=0;i<numsSize;i++){

        temp=0;

        for(j=0;j<numsSize;j++){

            if(i!=j){

                if(nums[i]==nums[j]){

                    temp++;
                }
            }
        }
        if(temp==0){
            return nums[i];
        }
    }
 return -1;        
}
    
