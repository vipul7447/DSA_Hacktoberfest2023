// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1?page=1&sortBy=submissions
int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int mini, maxi;
        int res = arr[n-1] - arr[0];
        
        for(int i = 0; i <= n-1; i++){
            if(arr[i] >= k){
                maxi = max(arr[i-1]+k, arr[n-1]-k);
                mini = min(arr[0]+k,arr[i]-k);
                
                res = min(res, maxi-mini);
            }
        }
        return res;
    }
