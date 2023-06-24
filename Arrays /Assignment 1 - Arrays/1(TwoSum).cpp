#include <bits/stdc++.h>
using namespace std;
vector <int> targetSum(vector <int> &a , int &target)
{
    int left = 0 , right = int(a.size()) - 1 , tempSum;
    while(left < right)
    {
        tempSum = a[left] + a[right];
        if(tempSum == target)
            return {left + 1 , right + 1};
        if(tempSum > target)
            right--;
        else
            left++;
    }
    return {-1 , -1};
}
int main()
{
    vector <int> a = {2,7,11,15};
    int target = 9;
    for(int &x : targetSum(a , target))
        cout << x << " ";
    cout << '\n';
}
