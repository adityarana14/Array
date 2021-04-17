class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    
    int kardane_algorithm(int ar[],int num)
    {
        
        int answer=ar[0];
        int most[num];
        most[0]=ar[0];
        
        for(int i=1;i<num;i++)
        {
            most[i]=max(ar[i],ar[i]+most[i-1]);
            //  cout<<most[i]<<" ";
        }
        //  cout<<endl;
        
        for(int i=1;i<num;i++)
        {
            if(most[i]>answer)
            {
                answer=most[i];
            }
            
        }
        
        return answer;
        
    }
    
    int reverse_kardane(int a[],int num)
    {
        for(int i=0;i<num;i++)
        {
            a[i]=a[i]*(-1);
        }
        int ans=kardane_algorithm(a,num);
        return ans;
        
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int k=kardane_algorithm(arr,num);
        if(k<0)
        {
            return k;
        }
        int sum=0;
        for(int i=0;i<num;i++)
        {
            sum=sum+arr[i];
        }
        
        int kr=reverse_kardane(arr,num);
        int max2=max(k,sum+kr);
        return max2;
        
    }
};