#include <iostream>

using namespace std;

/*
 * Node
 */
class Node {
    public:
        int data;
        Node* prevNode;

        Node(int data);
        ~Node();
};

Node::Node(int data) {
   this->data = data;
}

Node::~Node() {
    cout << "deleting node (" << this->data << ")" << endl;
}

/*
 * Stack
 */
class Stack {
    public:
        Node* topNode;
        int length;

        Stack();
        ~Stack();

        void push(int data);
        int pop();

        int getLength();
};

Stack::Stack() {
    this->topNode = NULL;
    this->length = 0;
}

Stack::~Stack() {
    Node* top = this->topNode;
    while(top) {
        Node* old = top;
        top = top->prevNode;
        delete old;
    }
}

void Stack::push(int data){
    if(this->topNode == NULL) {
        this->topNode = new Node(data);
    } else {
        Node* old = this->topNode;
        this->topNode = new Node(data);
        this->topNode->prevNode = old;
    }
    length++;

    cout << "push: " << data << endl;
}

int Stack::pop() {
    int data = this->topNode->data;
    delete this->topNode;
    this->topNode = this->topNode->prevNode;

    length--;

    cout << "pop: " << data << endl;
    return data;
}

int Stack::getLength() {
    return length;
}
/*
 * testing
 */
int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "length: " << stack.getLength() << endl;

    stack.pop();
    stack.pop();
    stack.push(4);
    stack.pop();

    cout << "length: " << stack.getLength() << endl;

    stack.pop();

    cout << "length: " << stack.getLength() << endl;

    stack.push(10);
    stack.push(11);
    stack.push(12);

}