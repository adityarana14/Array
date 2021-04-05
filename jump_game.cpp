
class Solution {
  public:
    int canReach(int a[], int N) {
        // code here
        for(int i=0;i<N;i++)
        {
            if(i==N-1)
            {
                return 1;
            }
            else if(i==0 && a[i]==0)
            {
                return 0;
            }
            else if (i==0)
            {
                
            }
            else
            {
                a[i]=max(a[i],a[i-1]-1);
                if(a[i]==0)
                {
                    return 0;
                }
            }
            
           
        }
    }
};