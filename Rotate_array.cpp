class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        
        // code here
        int answer[n];
        
        int temp[n];
        for(int i=0;i<d;i++)
        {
           temp[i]=arr[i];
        }
        int j=0;
        for(int i=d;i<n;i++)
        {
            answer[j]=arr[i];
            j++;
        }
        for(int i=0;i<d;i++)
        {
            answer[j]=temp[i];
            j++;
        }
       // cout<<"answer vlaue is "<<endl;
        for(int i=0;i<n;i++)
        {
            arr[i]=answer[i];
        }
        
    }
};