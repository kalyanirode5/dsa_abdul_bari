#include<stdio.h>
int fact(int n){
   if
    (n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int main(){
    fact(4);
    printf("%d",fact(4));
    return 0;
}