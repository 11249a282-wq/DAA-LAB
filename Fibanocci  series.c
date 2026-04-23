#include <stdio.h>
int r;


int fib(int n){  
    if (n==0){
        return 0;
    }
    if (n==1) {
        return 1;
    }
    r=fib(n-1)+fib(n-2);
    return r;
   
   
}  
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n<0){
        printf("invalid number");
        return 0;
    }
    printf("fibanoacci term is :%d",fib(n));
    return 0;
}
