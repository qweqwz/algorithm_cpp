#include <iostream>
using namespace std;
int main(){
    int T;
    int a, b;
    cin>>T;
    for(int i=1;i<T+1;i++){
        cin>>a>>b;
        cout<<"Case #"<<i<<": "<<a+b<<"\n";
    }
    return 0;
}