#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> input={1,2,3,4};
    vector<int> first;
    stack<int> second;
    vector<int> output;
    int store=1;

    first.push_back(1);

    for(int i=1;i<input.size();i++)
    {
        store=store*input[i-1];
        first.push_back(store);
       // cout<<"Store value is "<<store<<endl;
    }

    store=1;

    second.push(1);
    for(int i=input.size()-2;i>=0;i--)
    {
            store=store*input[i+1];
            second.push(store);
    }

    vector<int> second2;
    cout<<endl;
    while(second.size()!=0)
    {
        second2.push_back(second.top());
        //cout<<second.top()<<endl;
        second.pop();
    }
cout<<"Output"<<endl;
    for(int i=0;i<input.size();i++)
    {
        cout<<first[i]*second2[i]<<" ";
    }
    cout<<endl;



    return 0;

}