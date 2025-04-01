void sortColors(int* nums, int numsSize) {
    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 0){
            num0 = num0 + 1;
        } else if(nums[i] == 1){
            num1 = num1 + 1;
        }
        else {num2 = num2 + 1;}
    }
    int i = 0;
    for(; i < num0; i++){
        nums[i] = 0;
    }
    for(; i < num0 + num1; i++){
        nums[i] = 1;
    }
    for(; i < num0 + num1 + num2; i++){
        nums[i] = 2;
    }
}
