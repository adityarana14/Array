class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        //using 2 pointer method it can be solved
        int answer;
        long long int diff=INT_MAX;
        
        for(int k=0;k<arr.size()-2;k++)
        {
            int i=k+1;
            int j=arr.size()-1;
            
            
            while(i<j)
            {
                int temp=0;
                temp=arr[k]+arr[i]+arr[j];
               
                if(temp>target)
                {
                    if(temp-target<=diff)
                    {
                        answer=temp; 
                        diff=abs(temp-target);
                    
                    }
                    j--;
                    
                }
                 else if(temp<target)
                {
                    i++;
                    
                    if(abs(temp-target)==diff)
                    {}
                    else{
                       
                       if(abs(temp-target)<diff)
                       {
                        answer=temp; 
                        diff=abs(temp-target);
                       }
                       
                    
                    }
                    
                }
                else {answer=temp; break;}
            }
            
            if(answer==target)
            {
                break;
            }
            
                
            
        
        }
       
        
        return answer;
        
        
        
    }
};
