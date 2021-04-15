class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
        priority_queue<int> pq;
        int i=0,j=0;
        while(i<n||j<m)
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
        
        while(pq.size()!=k)
        {
            pq.pop();
        }
        
        return pq.top();
    }
};