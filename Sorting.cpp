#include<iostream>
#include<algorithm>
using namespace std;

void Bubble_sort(int A[],int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(A[j]>A[j+1]){
                int t= A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}
void Insertion_sort(int A[],int size){
    for(int i=0; i<size; i++){
        int key=A[i];
        while(i>0 && key < A[i-1]){
            A[i]=A[i-1];
            i--;
        }
        A[i]=key;
    }   
}
void Selection_sort(int A[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
                if(A[i]>A[j]){
                    swap(A[i],A[j]);
                }
            }
        }
    }
void display(int A[],int size){
    for(int i=0; i<=size; i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int size;
    int ch;
    cout<<"Enter Size :\n"; cin>>size;
    int A[size];
    cout<<"Enter Elements :\n";
    for(int i=0; i<size; i++){
        cin>>A[i];
    }
    label:
    cout<<"Select a sorting method :\n";
    cin>>ch;
    switch(ch){
        case 1:
        Bubble_sort(A,size);
        display(A, size);
        break;

        case 2:
        Selection_sort(A,size);
        display(A, size);
        break;

        case 3:
        Insertion_sort(A,size);
        display(A, size);
        break;
    }
    return 0;
    goto label;
    
}