#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data=data;
        next = NULL;
    }
};

class Stack {
    Node *top = NULL;
    int size = 0;
    public:
    Stack() {
        top = NULL;
        size = 0;
    }
    void push (int value) {
        Node *temp = new Node(value);
        temp->next = top;
        top=temp;
        size++;

    }
    int pop() {
        int value = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
        return value;
    }
    int peek() {
        return top->data;
    }
    bool isempty() {
        return size==0;
    }
    int getsize() {
        return size;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}