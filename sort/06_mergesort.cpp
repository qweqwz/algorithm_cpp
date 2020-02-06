#include <iostream>
using namespace std;
void MergeSort(int DataSet[],int Start, int End);
void Merge(int DataSet[],int Start, int Middle, int End);
void MergeSort(int DataSet[],int Start, int End){
    int Middle;
    if(End-Start<1)
    return;
    Middle = (Start + End)/2;
    MergeSort(DataSet,Start,Middle);
    MergeSort(DataSet,Middle+1,End);
    Merge(DataSet,Start,Middle,End);


}
void Merge(int DataSet[],int Start, int Middle, int End){
    int *ptr = new int[End-Start+1];
    int left = Start;
    int right = Middle+1;
    int index = 0;
    while(left<=Middle&&right<=End){
        if(DataSet[left]<DataSet[right]){
            ptr[index]=DataSet[left];
            left++;
        }
        else{
            ptr[index]=DataSet[right];
            right++;
        }
        index++;
    }
    while(left<=Middle){
        ptr[index]=DataSet[left];
        index++;
        left++;
    }
    while(right<=End){
        ptr[index]=DataSet[right];
        index++;
        right++;
    }

    index=0;
    for(int i = Start; i<=End; i++){
        DataSet[i]=ptr[index];
        index++;
    }
    delete[] ptr;

}
int main(){
    int DataSet[] = {334,6,4,2,3,1,5,117,12,34};
    int Length = sizeof(DataSet) / sizeof(DataSet[0]);
    
    MergeSort(DataSet, 0, Length-1);

    for(int i=0; i<Length; i++){
        cout<<DataSet[i]<<" ";
    }
    return 0;

}

