#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
          j = i;
          break;  
        }
    }

    if(j==-1) return a;
    
    for(int i= j+1; i<n; i++)
    {
        if(a[i] != 0)
        {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            j++;
        }
    }
    return a;
}



int main () {
	    
    vector<int> nums {0,1,0,3,12};
   for(int &x : moveZeros(nums.size(), nums))
         cout << x << " ";
    cout << "\n" << endl;
}
