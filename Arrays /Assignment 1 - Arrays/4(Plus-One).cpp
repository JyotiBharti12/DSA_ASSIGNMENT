#include <bits/stdc++.h> 
using namespace std; 
vector<int> plusOne(vector<int>& digits) {
    int n=digits.size();
    for(int i=n-1;i>=0;i--)
    {
        if(digits[i]<9)
        {digits[i]++ ; return digits;} 
        else
            digits[i]=0;
    }
    vector<int>newnumber(n+1,0);
    newnumber[0]=1;
    return newnumber;
}
int main() 
{ 
vector<int> arr = {1,2,3}; 
vector<int>ans= plusOne(arr); 
 for(int i=0;i<arr.size();i++)
 cout<<ans[i]<<" ";
 cout<<endl;
 return 0;
}
