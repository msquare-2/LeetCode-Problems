#include<iostream>
using namespace std;

class queue {
    public:
    int front,rare;
    int capacity=100;
    int *arr;
    
    queue() {
        front=rare=-1;
        arr = new int[capacity];
    }
    void enqueue(int data) {
        if (rare==-1 && front==-1)
        {
            rare = front = 0;
            arr[rare] = data;
        }
        
        else if ((rare+1)%capacity==front)
        {
            cout<<"\nQueue is full";
            return;
        }
        else
        {
            rare = (rare + 1)%capacity;
            arr[rare] = data;
        }
        
    }
    void dequeue() {
        if (rare==-1&&front==-1)
        {
            cout<<"Queue is empty";
            return;
        }
        else if (rare==front)
        {
            front = rare = -1;
        }
        else
        {
            front=(front+1)%capacity;
        }
    }
    void front() {
        return;
    }
    void rare() {
        cout<<arr[rare];
    }
};

int main() {
    queue qu;
    qu.enqueue(1);
    return 0;
}