class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    queue<int> pos;
	    queue<int> neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push(arr[i]);
	        }
	        else neg.push(arr[i]);
	    }
	    int flag=0;
	    int i=0;
	    
	    while(pos.empty()!=1 || neg.empty()!=1)
	    {
	        if(pos.empty()!=1)
	        {
	            arr[i]=pos.front();
	            pos.pop();
	            i++;
	            
	            
	        }
	       if( neg.empty()!=1)
	        {
	            arr[i]=neg.front();
	            neg.pop();
	            i++;
	            
	            
	        }
	       
	        
	    }
	    
	}
};
