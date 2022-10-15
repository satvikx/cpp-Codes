#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int count=1, i=0;
    string s="hsfsdhhhhhhgvvvkjhgbwvggiu";
    char ans;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<" "<<endl;
    sort(s.begin(), s.end());
    cout<<s<<endl;
    for(i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            count++; ans=i; 
        }
        i=i+1; 
    }
    cout<<"Element with Highest Frequency..."<<endl<<s[ans]<<endl<<"Occuring "
    <<count<<" no. of times."<<endl;
}
