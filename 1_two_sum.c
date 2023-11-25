#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0;i<numsSize;i++)
    {
        for(int j = 0;j<numsSize;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                returnSize[0] = i ;
                returnSize[1] = j ;
                return returnSize;
            }
        }
    }
}

int main()
{
    int num[5] = {2,6,1,8,5};
    int returnSize[2];
    twoSum(num,5,8,returnSize);
    printf("[%d,%d]",returnSize[0],returnSize[1]);
}