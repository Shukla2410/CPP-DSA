# include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter the value of n (nCr):";
    cin>>n;
    cout<<"Enter the value of r (nCr):";
    cin>>r;
    cout<<n<<"C"<<r<<" = "<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}