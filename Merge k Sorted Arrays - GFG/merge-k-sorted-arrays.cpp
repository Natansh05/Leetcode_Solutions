//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

typedef pair<int, pair<int,int>> pi;
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        vector<int> ans;
        for(int i=0;i<k;++i){
            pq.push({arr[i][0],{i,0}});
        }
        while(!pq.empty()){
            pi top = pq.top();
            pq.pop();
            int i = top.second.first;
            int j = top.second.second;
            ans.push_back(top.first);
            if(++j<k)
                pq.push({arr[i][j],{i,j}});
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends