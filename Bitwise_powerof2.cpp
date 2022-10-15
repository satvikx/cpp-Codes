#include<iostream>
using namespace std;
bool isPowerof2(int n){
    if (n & !(n & n-1));
    return true;
}
int main(){
    int n;
    cout<<"Enter a No. "<<endl;
    cin>>n;
    cout<<isPowerof2(n)<<endl;
}