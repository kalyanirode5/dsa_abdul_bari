#include<iostream>
using namespace std;

int add(int a, int b ){
    cout<<a++;
    cout<<b--;
    return 0;

}

int main(){
    int x = 10;
    int y = 20;
    add(x,y);
    cout<<x++<<y++;
    return 0;

}