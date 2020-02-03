#include <iostream>
using namespace std;
int main(){
    int X;
    int temp=0;
    int a,b;
    cin>>X;
    for(int i=0;;i++){
        temp+=i;
        if(X>temp&&X<=(temp+i+1)){
            if((i+1)%2==0){
                a=X-temp;
                b=i+2-a;
            }
            else{
                b=X-temp;
                a=i+2-b;
            }
            break;
        }

    }
    cout<<a<<"/"<<b;
    return 0;
}