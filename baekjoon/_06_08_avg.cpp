#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int std;
        int sum=0;
        int avg=0;
        int count=0;
        int result=0;
        cin>>std;
        int score[std]={0};
        for(int j=0;j<std;j++){
            cin>>score[j];
            sum+=score[j];
        }
        avg=sum/std;
        for(int k=0;k<std;k++){
            if(score[k]>avg){
                count++;
            }
        }
        cout<<fixed;
        cout.precision(3);
        cout<<double(count*100)/std<<"%"<<"\n";

    }
}