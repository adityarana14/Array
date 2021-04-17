class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            priority_queue<long long int,vector<long long int> , greater<long long int>> pq;
            int i=0,j=0;
            while(i<n || j<m)
            {
                if(i<n)
                {
                pq.push(arr1[i]);
                i++;
                }
                if(j<m)
                {
                pq.push(arr2[j]);
                j++;
                }
                
            }
            i=0;
            j=0;
            while(i<n)
            {
                arr1[i]=pq.top();
                pq.pop();
                i++;
            }
            while(j<m)
            {
                arr2[j]=pq.top();
                pq.pop();
                j++;
            }
        } 

};