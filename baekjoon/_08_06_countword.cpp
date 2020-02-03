#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
   
    int count=0;
    int len=str.size();

    if(str[0]==' ' && len==1){
        cout<<0;
    }
    else if(len<=2){
        cout<<1;
    }
    else{
    for (int i=1; i<len-1;i++){
        if(str[i]==' '){
            count++;
        } 
        
    }
    cout<<count+1;
    }
    return 0;

}