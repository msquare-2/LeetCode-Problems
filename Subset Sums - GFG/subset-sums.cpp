// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void ssSum(int index, vector<int> &arr, int sum, vector<int> &res, int N) {
        if(index == N) {
            res.push_back(sum);
            return;
        }
        
        //Picking up
        ssSum(index+1, arr, sum+arr[index], res, N);
        
        //Not picking up
        ssSum(index+1, arr, sum, res, N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        ssSum(0, arr, 0, res, N);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends