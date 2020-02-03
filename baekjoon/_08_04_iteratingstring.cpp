#include <iostream>
using namespace std;
int main(){
    int T;
    int S;
    string str;
    int len;

    cin>>T;
    for (int i=0; i<T;i++){
        cin>>S>>str;
        for (int j=0; j<str.size();j++){
            for(int k=0;k<S;k++){
            cout<<str[j];
            }
        }
        cout<<"\n";
    }

    return 0;
}