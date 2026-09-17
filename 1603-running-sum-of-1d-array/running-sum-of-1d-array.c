#include<stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int n, int* returnSize) {
    *returnSize=n;
    int* num = (int*)malloc(n * sizeof(int));
    if(n==0) return num;
    num[0]=nums[0];
    for (int i = 1; i < n; i++) {
        num[i]=num[i-1]+nums[i];
    }
return num;


}