#include <iostream>
using namespace std;
int main(){
    string str;
    int max=0;
    string max_alphabet;
    int temp;
    cin>>str;

    int len = str.size();
    int arr[26]={0,};
    for (int i=0; i<len; i++){
        temp=int(str[i])-65;
        if(temp>31){
            temp-=32;
        }
        arr[temp]++;
        if(arr[temp]>max){
            max_alphabet=char(temp+65);
            max=arr[temp];
        }
        else if(arr[temp]==max){
            max_alphabet="?";
        }
    }
    cout<<max_alphabet;
    return 0;
}