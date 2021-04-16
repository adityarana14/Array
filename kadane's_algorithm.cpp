

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        int store_max[n];
        store_max[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            store_max[i]=max(arr[i],arr[i]+store_max[i-1]);
            
        }
        
        int answer=arr[0];
        for(int i=0;i<n;i++)
        {
            if(store_max[i]>answer)
            {
                answer=store_max[i];
            }
            
        }
        
        return answer;
    }
};


