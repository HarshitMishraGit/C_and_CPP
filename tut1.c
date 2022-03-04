#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int t = 1;
    for (int i = 0; i < n+1; i++){
        t = 1 << i;
        printf("%d ", t);
    }
    return 0;
}