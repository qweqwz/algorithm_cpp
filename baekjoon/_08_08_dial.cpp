#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len = str.size();
    int count=0;

    for (int i=0;i<len;i++){
    if(int(str[i])<=82){
        count+=(int(str[i])-56)/3;
    }
    else if(int(str[i])<90){
        count+=(int(str[i])-57)/3;
    }
    else
        count+=10;
    }
    cout<<count;
    return 0;
}