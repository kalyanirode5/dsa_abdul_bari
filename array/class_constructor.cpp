#include<iostream>
using namespace std;
class Reactanagle{
    private:
    int length;
    int breadth;

    public:
    Reactanagle(){
        length =0;
        breadth=0;
    }
    Reactanagle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setlenght(int){

    }
}