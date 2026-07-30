#include<iostream>
using namespace std;
int main()
{    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element the elementof an arry"<<endl;
    for(int i =0;i<n; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";

    }
     return 0;
}