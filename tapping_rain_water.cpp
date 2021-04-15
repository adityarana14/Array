class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        
        int left[n];
        int right[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        
        
        for(int i=1;i<n;i++)
        {
            left[i]=max(arr[i],left[i-1]);
            
        }
        
     
        
        for(int i=n-2;i>=0;i--)
        {
             right[i]  = max(arr[i],right[i+1]); 
             
             
        }
        
        
        
        int answer=0;
        for(int i=0;i<n;i++)
        {
            int minimum=min(left[i],right[i]);
            int temp=minimum-arr[i];
            if(temp<0)
            {}
            else answer=answer+temp;
        }
    
        return answer;
    }
        
    
};