# include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Array:";
    cin>>size;
    int Array[size];
    cout<<"Enter the elements of Array:";
    for(int i = 0; i< size; i++){
        cin>>Array[i];
    }
    cout<<"[ ";
    for(int i=0; i<size; i++){
        cout<<Array[i]<<" ";
    }
    cout<<"]";
    int smallest = Array[0];
    for(int i=0; i<size; i++){
        if(Array[i]<smallest){
            smallest = Array[i];
        }
    }
    cout<<endl<<"Smallest element is:"<<smallest;
    int largest = Array[0];
    for(int i=1; i<size; i++){
        if(Array[i]>largest){
            largest = Array[i];
        }
    }
    cout<<endl<<"Largest element is:"<<largest;
    return 0;
}