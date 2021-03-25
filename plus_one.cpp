
class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
  
        // Add 1 to last digit and find carry 
        arr[N-1] += 1; 
        int carry = arr[N-1]/10; 
        arr[N-1] %= 10; 
      
        // Traverse from second last digit 
        for (int i=N-2; i>=0; i--) 
        { 
            if (carry == 1) 
            { 
               arr[i] += 1; 
               carry = arr[i]/10; 
               arr[i] %= 10; 
            } 
        } 
      
        // If carry is 1, we need to add 
        // a 1 at the beginning of vector 
        if (carry == 1) 
            arr.insert(arr.begin(), 1); 
        
        return arr;
    }
};