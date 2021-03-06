#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007
#define SIZE 10000
  
// Function to calculate the factorial
// using dynamic programing
void factorial(vector<long long int>& fact)
{
    int i;
    fact[0] = 1;
    for (i = 1; i <= SIZE; i++) {
  
        // Calculation of factorial
        // As fact[i-1] stores the factorial of n-1
        // so factorial of n is fact[i] = (fact[i-1]*i)
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}
  
// Function to print factorial of every element
// of the array
void PrintFactorial(vector <long long int> &fact,
                                  int arr[],int n){
    for(int i=0;i<n;i+=1){
  
        // Printing the stored value of arr[i]!
        cout<<fact[arr[i]]<<" ";
    }
}
   
// Driver code
int main()
{
    // vector to store the factorial values
    // max_element(arr) should be less than SIZE
    vector<long long int> fact(SIZE + 1, 0);
  
    int arr[5] = {3, 10, 200, 20, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // Function to store factorial values mod 10**9+7
    factorial(fact);
  
    // Function to print the factorial values mod 10**9+7
    PrintFactorial(fact,arr,n);
  
    return 0;
}