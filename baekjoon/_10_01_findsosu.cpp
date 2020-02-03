#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int N;
    cin>>N;
    int num;
    int count=0;
    for(int i=0; i<N; i++){
        cin>>num;
        count++;
        if(num==1){
            count--;
        }
        else{
            for(int j=2;j<=ceil(num/2);j++){
                if(num%j==0){
                count--;
                break;
                }
            }
        }
    }
    cout<<count;
    return 0;
}