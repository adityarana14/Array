class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int a[], int n)
    {
      //Your code here
      int answer=a[1]-a[0];
      int min[n];
      int minimum=a[0];
      for(int i=0;i<n;i++)
      {
          if(i==0)
          {
              min[i]=0;
          }
          else if(a[i]>minimum)
          {
              min[i]=minimum;
          }
          else
          {
              min[i]=minimum;
              minimum=a[i];
          }
        
        
      }
      
      cout<<"***********"<<endl;
      for(int i=0;i<n;i++)
      {
          if(i==0)
          {}
          
          else if(a[i]-min[i]>answer)
          answer=a[i]-min[i];
      }
      
      cout<<"The final answer is "<<answer<<endl;
      
      
      
      
      return 1;
    }
};