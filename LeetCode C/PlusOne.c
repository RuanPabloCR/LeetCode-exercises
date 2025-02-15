#include <stdio.h>
#include <stdlib.h>

/**
 * Intuition
Go through the Array backwards making changes, allocate a larger size array if it is composed of nines.

 Approach
    Complexity
    Time complexity: O(n)
    Space complexity: O(n)
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    *returnSize = digitsSize;
    for(i = digitsSize - 1; i >= 0; i--){
        if(digits[i] != 9){
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0;
        
    }
    if(i == -1){
        int *arr = malloc(sizeof(int) * (digitsSize + 1) );
        *returnSize = digitsSize + 1;
        for(int i = digitsSize - 1; i >= 0; i--){
            arr[i+1] = digits[i];
        }
        arr[0] = 1;
        return arr;
    }
    return digits;
}
void main(){}

// tam 2; i = 1 [9 , 9] => 0 [9, 0] => -1 [0, 0];