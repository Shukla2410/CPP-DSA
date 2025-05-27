/*If n=3
A
BB
CCC
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number:";
    cin>>n;
    for(char i=65;i<n+65;i++){
        for(char j=65;j<=i;j++){
            cout << i<<" ";
        }
        cout<<endl;
    }
    return 0;
}