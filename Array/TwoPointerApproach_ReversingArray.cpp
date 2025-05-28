# include<iostream>
using namespace std;
void ReverseArray(int arr[],int size){
    int start = 0,End = size-1;
    while(start<End){
        swap(arr[start],arr[End]);
        start++;
        End--;
    }
}
int main(){
    int array[] = {1,2,3,4,5};
    ReverseArray(array,5);
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}