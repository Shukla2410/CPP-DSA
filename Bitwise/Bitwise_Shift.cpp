# include<iostream>
using namespace std;
int main(){
    cout<<(10>>2)<<endl;
    cout<<(10<<2)<<endl;
    return 0;
}
// 10>>2 = 1010 to 0010(2) (Shifting to right - everynumber)
// 10<<2 = 1010 to 101000 (40) (Shifting to left  - everynumber)

// Important :
// a << b = a * 2^b
// a >> b = a / 2^b
