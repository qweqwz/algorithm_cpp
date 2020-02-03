#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<pair<int,string>>v;
    v.push_back(pair<int,string>(99,"a"));
    v.push_back(pair<int,string>(79,"b"));
    v.push_back(pair<int,string>(80,"c"));
    v.push_back(pair<int,string>(84,"d"));
    v.push_back(pair<int,string>(90,"e"));

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i].second<<":"<<v[i].first<<"\n";
    }
    return 0;
}