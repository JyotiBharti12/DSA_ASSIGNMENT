#include<bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums) {
        int N = nums.size(), sum = N * (N + 1) / 2;
        vector<int> ans(2);
        vector<bool> seen(N+1);
        for (int num : nums) {
            sum -= num;
            if (seen[num]) ans[0] = num;
            seen[num] = true;
        }
        ans[1] = sum + ans[0];
        return ans;
    }

int main () {
	    
    vector<int> nums {1,2,2,4};
    vector<int>ans= findErrorNums(nums); 
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
}
