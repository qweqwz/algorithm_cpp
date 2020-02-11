#include <iostream>
using namespace std;


class Node{
    friend class DoubleList;

private:
    int Value;
    Node* Next;
    Node* Prev;
    Node(){
        Value = 0;
        Next = NULL;
        Prev = NULL;
    }
};

class DoubleList{
private:
    Node* Head;
    Node* Tail;

public:
    DoubleList();
    DoubleList(int);
    void Create(int value);
    void Display();
    void Insert_Head(int value);
    void Insert_Tail(int value);
    void Insert_Position(int value, int position);
    void Delete_Head();
    void Delete_Tail();
    void Delete_Position(int position);
    void Search(int num);
    
};
DoubleList:: DoubleList(){
    Head=Tail=NULL;
}
DoubleList:: DoubleList(int value){
    Node* newnode = new Node;
    newnode->Value = value;
    Head = Tail  = newnode;
};
void DoubleList:: Create(int value){

    Node* newnode = new Node;
    newnode->Value = value;

    if(Head==NULL){
        Head = Tail = newnode;
    }
    else{
        Tail->Next = newnode;
        newnode->Prev = Tail;
        Tail = newnode;
    }
};



void DoubleList:: Display(){
    Node* display_node = Head;
    while(display_node!=NULL){
        cout<<display_node->Value<<" ";
        display_node = display_node->Next; 
    }
    cout<<"\n";
};
void DoubleList:: Insert_Head(int value){
    Node* newnode = new Node;
    newnode->Value = value;
    newnode->Next = Head;
    Head->Prev = newnode;
    Head = newnode;
};
void DoubleList:: Insert_Tail(int value){
    DoubleList:: Create(value);
};
void DoubleList:: Insert_Position(int value, int position){
    Node* newnode = new Node;
    newnode->Value = value;
    Node* prevnode = new Node;
    Node* postnode = new Node;
    prevnode = Head;
    if(position==2){
        postnode = Head->Next;
        Head->Next = newnode;
        newnode->Next=postnode;
        newnode->Prev = Head;
        postnode->Prev = newnode;
        }
    else{
        for(int i=1;i<position-1;i++){
            prevnode = prevnode->Next;
            }
        postnode = prevnode->Next;    
        prevnode->Next = newnode;
        newnode->Next = postnode;
        newnode->Prev = prevnode;
        postnode->Prev = newnode;
    }
};
void DoubleList:: Delete_Head(){
    Node* deletenode = new Node;
    deletenode = Head;
    Head = Head->Next;
    Head->Prev = NULL;
    delete deletenode;
};
void DoubleList:: Delete_Position(int position){
    Node* prevnode = new Node;
    Node* deletenode = new Node;
    Node* postnode = new Node;
    prevnode = Head;
    for(int i=1; i<position; i++){
        prevnode=prevnode->Next;
    }
    deletenode = prevnode->Next;
    postnode = deletenode->Next;

    prevnode->Next = postnode;
    postnode->Prev = prevnode;
    delete deletenode;
};
void DoubleList:: Delete_Tail(){
    Node* prevnode = new Node;
    Node* deletenode = new Node;
    prevnode = Head;
    deletenode = Head;
    while(deletenode->Next!=NULL){
        prevnode = deletenode;
        deletenode = deletenode->Next;
    }
    Tail = prevnode;
    prevnode->Next = NULL;
    delete deletenode;    
};

void DoubleList:: Search(int num){
    Node* searchnode = new Node;
    searchnode = Head;
    for(int i=1; i<num; i++){
        searchnode = searchnode->Next;
    }
    cout<<searchnode->Value<<"\n";
};


int main(){
    DoubleList* Doublelist = new DoubleList();
    Doublelist->Create(5);
    Doublelist->Create(5);
    Doublelist->Create(5);
    Doublelist->Create(5);
    Doublelist->Create(5);
    Doublelist->Display();
    Doublelist->Insert_Head(1);
    Doublelist->Insert_Tail(1);
    Doublelist->Display();
    Doublelist->Insert_Position(2,3);
    Doublelist->Insert_Position(2,3);
    Doublelist->Display();
    Doublelist->Delete_Head();
    Doublelist->Delete_Tail();
    Doublelist->Delete_Position(2);
    Doublelist->Display();
    Doublelist->Search(3);
    return 0;

}