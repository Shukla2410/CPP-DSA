# include<iostream>
using namespace std;
int Sum_of_digits(int n){
    int sum;
    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
int main(){
    int n = 143;
    cout<<Sum_of_digits(n);
    return 0;
}