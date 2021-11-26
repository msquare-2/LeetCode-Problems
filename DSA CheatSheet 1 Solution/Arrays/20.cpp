//Programa to Rearrange array in alternating positive & negative items
#include<iostream>
#include<vector>
using namespace std;
void rearrange(int arr[], int n) {
    vector<int> posarr;
    vector<int> negarr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            posarr.push_back(arr[i]);
        }
        else {
            negarr.push_back(arr[i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && !negarr.empty())
        {
            arr[i] = negarr.back();
            negarr.pop_back();
        }
        else if (i % 2 == 0 && !posarr.empty())
        {
            arr[i] = posarr.back();
            posarr.pop_back();
        }
        else if (!negarr.empty())
        {
            arr[i] = negarr.back();
            negarr.pop_back();
        }
        
    }
    
    
    
}

int main() {
    int n;
    cout<<"Enter number of values in array: ";
    cin>>n;
    int aray[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value "<<n<<" ; ";
        cin>>aray[i];
        cout<<endl;
    }
    cout<<"Your array looks like: ";
    for (int i = 0; i < n; i++)
    {
        cout<<aray[i]<<" ";
    }
    
    rearrange(aray,n);

    cout<<"Your array after modification: ";
    for (int i = 0; i < n; i++)
    {
        cout<<aray[i]<<" ";
    }
    
    return 0;
}