# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> vec(3,1);
    for(int value : vec){
        cout<<value<<endl;
    }

    vector<int> vec1(3,'a');
    for(char value : vec1){
        cout<<value<<endl;
    }
    return 0;
}
// Here basically, int value : vec will store the values of vector at index's and not the indexs as before