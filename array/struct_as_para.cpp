//call by value
#include<iostream>
using namespace std;
struct Reactangle{
    int length;
    int breadth;
};
void fun(struct Reactangle r){
    cout<<"length of reactangle "<<r.length<<endl<<"breath of reactangle  "<<r.breadth<<endl;

}
int main(){
    struct Reactangle r ={10,4};
    fun(r);
    cout<<"length of reactangle  "<<r.length<<endl<<"breath of reactangle  "<<r.breadth<<endl;


}