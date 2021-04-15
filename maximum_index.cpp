
class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        if(n==0)
        {
            return 0;
        }
        // Your code here
        int answer;
        int left[n];
        int right[n];
        
        left[0]=arr[0];
        
        for(int i=1;i<n;i++)
        {
            left[i]=min(left[i-1],arr[i]);
           // cout<<left[i]<<" ";
        }
        
        
        right[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(arr[i],right[i+1]);
            //cout<<right[i]<<" ";
        }
        
        
        
        int i=0,j=0;
        int max_diff=-4;
        
        while(i<n&&j<n)
        {
            
            if(left[i]<=right[j])
            {
                //cout<<"we are here 1 "<<endl;
                int diff=j-i;
                if(diff>max_diff)
                {
                    //cout<<"we are here 2 "<<endl;
                    max_diff=diff;
                }
                
                j++;
            }
            else
            {
                i++;
            }
        }
        
        return max_diff;
            
            
        
        
        
    }
};