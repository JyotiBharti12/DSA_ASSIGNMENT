#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i=0, j=0;
    vector<int> nums;
    while(1)
    {
        if(i==m)
        {
            while(j<n)
            {
                nums.push_back(nums2[j]);
                j++;
            }
            break;
        }
        
        else if(j==n)
        {
            while(i<m)
            {
                nums.push_back(nums1[i]);
                i++;
            }
            break;
        }
        
        else
        {
            if(nums1[i] < nums2[j])
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else
            {
                nums.push_back(nums2[j]);
                j++;
            }
        }
    }
    
    for(i=0; i<m+n; i++)
        nums1[i] = nums[i];
    return nums1;
}

int main () {
	    
    vector<int> arr1 {1,2,3,0,0,0};
    vector<int> arr2 {2,5,6};
    int m,n;
    cin >> m;
    cin >> n;
    for(int &x :  merge(arr1, m, arr2, n ))
        cout << x << " ";
}
