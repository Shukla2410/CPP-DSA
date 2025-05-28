# include<iostream>
using namespace std;
int main(){
    int array[5] = {5,10,12,13,8};
    int target;
    cout<<"Enter the element to be searched:";
    cin>>target;
    bool Found = true;
    int i;
    for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]==target){
            Found = true;
            break;
        }
        else{
            Found = false;
        }
    }
    if(Found==true){
        cout<<"Element found at index "<<i;
    }
    else{
        cout<<"Target doesn't exist";
    }
    return 0;
}