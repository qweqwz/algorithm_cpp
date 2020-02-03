#include <iostream>
#include <string>
using namespace std;
int main(){
    int temp;
    string S;
    cin>>S;
    for(char c='a';c<='z';c++){
        cout<<int(S.find(c))<<" ";

    }
    return 0;
}