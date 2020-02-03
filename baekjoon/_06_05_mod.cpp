#include <iostream>
using namespace std;
int main(){
    int input[10];
    int result[42]={0};
    int temp, count=0;
    for (int i=0;i<10;i++){
        cin>>input[i];
        temp = input[i]%42;
        result[temp]+=1;
        }
    for (int j=0;j<42;j++){
        if(result[j]!=0){
            count++;
            }
        }
    cout<<count;
    return 0;
}