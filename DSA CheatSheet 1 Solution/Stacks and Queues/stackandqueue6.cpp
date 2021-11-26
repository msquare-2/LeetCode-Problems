#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   
        int size = x.size();
        char arr[size];
        int top = -1;
        for (int i=0; i<size; i++)
        {
            if (x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                arr[i] = x[i];
                top++;
            }
            else if (x[i]==')')
            {
                if (arr[top]=='(')
                {
                    top--;
                }
            }
            else if (x[i]=='}')
            {
                if (arr[top]=='{')
                {
                    top--;
                }
            }
            else if (x[i]==']')
            {
                if (arr[top]=='[')
                {
                    top--;
                }
            }
        }
        return top==-1?true:false;
    }

};

int main() {
    int t;
    string a;
    cin>>t;
    while (t--)
    {
        cin>>a;
        Solution obj;
        if(obj.ispar(a))
            cout<<"balanced"<<endl;
        else
            cout<<"not balanced"<<endl;
    }
    return 0;
    
}