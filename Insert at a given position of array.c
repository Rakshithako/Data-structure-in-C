// insert at a given position
#include<stdio.h>
#define CAP 10

int main()
{
    int a[CAP] = {10, 20, 30, 40};
    int n = 4;
    int x = 25;
    int pos = 2;

    if(n < CAP && pos >= 0 && pos <= n){
        for(int i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = x;
        n++;
    }
    else{
        printf("Invalid position or array full");
    }
        for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
        
