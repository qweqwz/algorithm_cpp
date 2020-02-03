#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    double score[num];
    int max=0;
    double score_sum=0;
    for(int i=0;i<num;i++){
        cin>>score[i];
        score_sum+=score[i];
        if(score[i]>max){
            max=score[i];
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(score_sum*100)/(num*max);
    return 0;
}