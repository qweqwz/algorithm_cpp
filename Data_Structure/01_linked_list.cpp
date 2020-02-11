#include <iostream>
using namespace std;


class Node{
    friend class List;

private:
    int Value;
    Node* Next;
    Node(){
        Value = 0;
        Next = NULL;
    }
};

class List{
private:
    Node* Head;
    Node* Tail;

public:
    List();
    List(int);
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
List:: List(){
    Head=Tail=NULL;
}
List:: List(int value){
    Node* newnode = new Node;
    newnode->Value = value;
    Head = Tail = newnode;
};
void List:: Create(int value){

    Node* newnode = new Node;
    newnode->Value = value;

    if(Head==NULL){
        Head = Tail = newnode;
    }
    else{
        Tail->Next = newnode;
        Tail = newnode;
    }
};



void List:: Display(){
    Node* display_node = Head;
    while(display_node!=NULL){
        cout<<display_node->Value<<" ";
        display_node = display_node->Next; 
    }
    cout<<"\n";
};
void List:: Insert_Head(int value){
    Node* newnode = new Node;
    newnode->Value = value;
    newnode->Next = Head;
    Head = newnode;
};
void List:: Insert_Tail(int value){
    List:: Create(value);
};
void List:: Insert_Position(int value, int position){
    Node* newnode = new Node;
    newnode->Value = value;
    Node* prevnode = new Node;
    Node* postnode = new Node;
    prevnode = Head;
    if(position==2){
        postnode = Head->Next;
        Head->Next = newnode;
        newnode->Next=postnode;
        }
    else{
        for(int i=1;i<position-1;i++){
            prevnode = prevnode->Next;
            }
        postnode = prevnode->Next;    
        prevnode->Next = newnode;
        newnode->Next = postnode;
    }
};
void List:: Delete_Head(){
    Node* deletenode = new Node;
    deletenode = Head;
    Head = Head->Next;
    delete deletenode;
};
void List:: Delete_Position(int position){
    Node* prevnode = new Node;
    Node* deletenode = new Node;
    prevnode = Head;
    for(int i=1; i<position; i++){
        prevnode=prevnode->Next;
    }
    deletenode = prevnode->Next;
    prevnode->Next = deletenode->Next;
    delete deletenode;
};
void List:: Delete_Tail(){
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

void List:: Search(int num){
    Node* searchnode = new Node;
    searchnode = Head;
    for(int i=1; i<num; i++){
        searchnode = searchnode->Next;
    }
    cout<<searchnode->Value<<"\n";
};


int main(){
    List* list = new List();
    list->Create(5);
    list->Create(5);
    list->Create(5);
    list->Create(5);
    list->Create(5);
    list->Display();
    list->Insert_Head(1);
    list->Insert_Tail(1);
    list->Display();
    list->Insert_Position(2,3);
    list->Insert_Position(2,3);
    list->Display();
    list->Delete_Head();
    list->Delete_Tail();
    list->Delete_Position(2);
    list->Display();
    list->Search(3);
    return 0;

}