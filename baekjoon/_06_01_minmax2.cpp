#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, val;
    cin>>N;
    vector<int> v;
    for (int i=0;i<N;i++){
        cin>>val;
        v.push_back(val);
    }
    cout<<*min_element(v.begin(),v.end())<<" "<<*max_element(v.begin(),v.end());
    return 0;

}