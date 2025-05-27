# include<iostream>
using namespace std;
int convert_D2B(long int n){
    long int result;
    while(n!=0&&n!=1){
        result = n%2;
        n = n/2;
    }
    return result;
}
int main(){
    long int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Result = "<<convert_D2B(n);
    return 0;
}