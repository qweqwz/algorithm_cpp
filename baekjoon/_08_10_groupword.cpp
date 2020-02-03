#include <iostream>
using namespace std;
int main(){
    int N;
    int count=0;
    int len;
    cin>>N;
    string str[N];
    for (int i=0; i<N; i++){
        cin>>str[i];
        count++;
        len = str[i].size();
        if(len>2){
            for(int j=0; j<len-2;j++){
                if(str[i].substr(j+2).find(str[i][j])!=-1&&str[i].substr(j+1).find(str[i][j])!=str[i].substr(j+2).find(str[i][j])){
                count--;
                break;
                }
            }
        }
    }

    cout<<count;
    return 0;
}