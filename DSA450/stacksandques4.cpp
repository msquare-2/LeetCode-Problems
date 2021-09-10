#include<iostream>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;
};

class Stack {
    Node* mid;
    Node* top;
    int count = 0; 
    public:
    void push(int value) {
        Node* temp = new Node();
        temp->data = value;
        if (count<1)
        {
            temp->prev = NULL;
            temp->next = NULL;
            mid = top = temp;
            count++;
        }
        else if ((count%2) == 0)
        {
            temp->prev = top;
            top->next = temp;
            top = top->next;
            mid = mid->next;
            count++;
        }
        else 
        {
            temp->prev = top;
            top->next = temp;
            top = top->next;
            count++;
        }
    }
    int pop() {
        int x = top->data;
        if (count<1)
        {
            cout<<"\nStack Overflow";
            exit(1);
        }
        else
        {
            if ((count%2) != 0)
            {
                Node* temp = top;
                top = top->prev;
                mid = mid->prev;
                delete temp;
            }
            else
            {
                Node* temp = top;
                top = top->prev;
                delete temp; 
            }
            return x;
        }
    }

    int findMiddle() {
        if (count<1)
        {
            cout<<"\nStack Empty";
            exit(1);
        }
        else if ((count%2)==0)
        {
            int x = mid->next->data;
            return x;
        }
        else
        {
            int x = mid->data;
            return x;
        }
        
    }

    void deleteMiddle() {
        if (count<1)
        {
            cout<<"\nStack Empty";
            exit(1);
        }
        else if ((count%2) == 0)
        {
            Node* temp = mid;
            Node* left = mid->prev;
            Node* right = mid->next;
            left->next = right;
            right->prev = left;
            mid = mid->prev;
            delete temp;
        }
        else
        {
            Node* temp = mid;
            Node* left = mid->prev;
            Node* right = mid->next;
            left->next = right;
            right->prev = left;
            delete temp;
        }

    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.deleteMiddle();
    cout<<st.findMiddle()<<endl;
    return 0;
}