#include <iostream>
#include <string>

using namespace std;
int main(){
    int num;
    string ox;
    
    cin>>num;

    for(int i=0;i<num;i++){
        int score=0;
        int temp=0;
        
        cin>>ox;
        for(int j=0;j<ox.size();j++){
            if(ox[j]=='O'){
            temp++;
            score+=temp;
            }
            else{
                temp=0;
                }
            }
        cout<<score<<'\n';
    }
    return 0;
}