#include <iostream>
using namespace std;
int Sum_1toN(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Sum of 1 to "<<n<<" = "<<Sum_1toN(n);
}