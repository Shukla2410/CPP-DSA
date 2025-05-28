# include<iostream>
#include <climits>
using namespace std;
int main(){
    int array[5]={1,2,3,4,-100};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i,j;
    for(i=0; i<5; i++){
        smallest = min(array[i], smallest);
    }
    for(j=0; j<5; j++){
        largest = max(array[j], largest);
    }
    cout<<"Min and Max elements of array is:"<<smallest<<" and "<<largest;
    cout<<" And their index are "<<i<<j<<" respectively";
    return 0;
}