/*If n=3
A B C 
D E F
G H I
*/
# include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    char ch=65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ch<<" ";
            ch++;
        }
        cout <<endl;
    }
    return 0;
}