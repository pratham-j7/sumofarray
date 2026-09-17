#include<stdio.h>
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int i;
    int k;
    int total;
    int max;

    i = 0;
    k = 0;
    total = 0;
    max = 0;
    while (i < accountsSize)
    {
        while(k < *accountsColSize)
        {
            total += accounts[i][k];
            k++;
        }
        if (total > max)
            max = total;
        total = 0;
        i++;
        k = 0;
    }
    return (max);
}