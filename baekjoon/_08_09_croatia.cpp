#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <string> vec = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string str;
    int index;
    cin>>str;
    int len = vec.size();

    for (int i=0; i<len; i++){
        index=int(str.find(vec[i]));
        while(index!=-1){
            str.replace(index,vec[i].size(),"1");
            index=int(str.find(vec[i]));
        }
    }
    cout<<str.size();
    return 0;
}
