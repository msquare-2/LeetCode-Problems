#include <iostream>
using namespace std;

#define n 100

class stack {
    int top;
    int* arr;
    
    public:
    stack() {
        arr = new int[n];
        top = -1;
    }
    void push(int x) {
        if (top == n-1)
        {
            cout<<"\nStack Overflow";
        }
        else
        {
            top++;
            arr[top] = x; 
        }
    }
    void pop() {
        if (top == -1)
        {
            cout<<"\nStack Underflow";
        }
        else {
            top--;
        }
    }
    int Top() {
        if (top == -1)
        {
            cout<<"\n No element in stack";
            return -1;
        }
        return arr[top];
    }
    int is_empty() {
        return top == -1;
    }

};

int main() {
    stack st;
    st.push(1);
    cout<<st.Top()<<endl;
    st.push(2);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    return 0;
}
