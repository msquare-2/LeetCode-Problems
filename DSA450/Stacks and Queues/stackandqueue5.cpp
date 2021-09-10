#include<iostream>
using namespace std;

class kstacks {
    int* arr;
    int* top;
    int* next;
    int n, k, free;
public:
    kstacks(int k1, int n1) {
        k=k1;
        n=n1; 
        arr = new int[n];
        top = new int[k];
        next = new int[n];

        for (int i=0;i<k;i++)
            top[i] = -1;
        free = 0;

        for (int i=0;i<n;i++)
            next[i]=i+1;
        next[n-1]=-1; 
    }

    void push(int item, int sn) {
        if (free==-1)
        {
            cout<<"\nStack if full;";
            return;
        }
                
        next[free] = top[sn];
        top[sn] = free;
        arr[free] = item;
        free = next[free];
        
    }
};