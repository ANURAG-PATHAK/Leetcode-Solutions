//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr, arr+n);
    int low = 0;
    int high = n-1;
    int ans_floor = -1, ans_ceil = -1;
    pair<int, int>p;
    
    while(low<=high){
        
       int mid = low+(high - low)/2;
        
        if(arr[mid] == x){
         ans_floor = arr[mid];
         ans_ceil = arr[mid];
         break;
        } 
        
        else if(arr[mid]>x)
        {
            ans_ceil = arr[mid];
            high = mid-1;
        }
        
        else{
            ans_floor = arr[mid];
            low = mid+1;
        }
    }
    
        p ={ans_floor, ans_ceil};
        return p;
    
}