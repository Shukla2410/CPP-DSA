// More or less same as Arrays
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> vec1(3,5);
    cout<<vec1[0]<<"\t"<<vec1[1]<<"\t"<<vec1[2]<<endl;
    
    vector<int> vec2 = {1,2,3};
    cout<<vec2[2];
    return 0;
}

// vector<int> vec1(3,5)
// Here 3 = size and 5 = Element
// vec1 = {5,5,5}