#include <iostream>
using namespace std;
int main(){
    int N;
    int temp=1; 
    int result;
    cin>>N;
    for(int i=0;;i++){
        temp+=6*i;
        if(N<=temp){
            result = i+1;
            break;
        }
    }
    cout<<result;
    return 0;
}