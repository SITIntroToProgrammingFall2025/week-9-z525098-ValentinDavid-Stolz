#include <stdio.h>

#define SIZE 5

int main(){

    int nums[SIZE];
    int i;

    for(i = 0; i < SIZE; i++){
        scanf("%d", &nums[i]);
    }

    //bubble sort

    for(i = 0; i < SIZE - 1; i++){
        for(int j = 0; j < SIZE - 1; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for(i = 0; i < SIZE; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}


