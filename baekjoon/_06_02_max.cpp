#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int val, max, maxindex;
    for (int i=0; i<9; i++){
        cin>>val;
        v.push_back(val);
    }
    max=*max_element(v.begin(),v.end());
    maxindex=(max_element(v.begin(),v.end())-v.begin())+1;
    cout<<max<<"\n"<<maxindex;
    return 0;
}
