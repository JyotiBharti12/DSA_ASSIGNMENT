#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val) {
        if(nums.size() == 0){
            return 0;
        }

        int i, j = 0;

        for(i = 0; i < nums.size() - 1; i++){
            if(nums[i] != val){
                nums[j++] = nums[i];
            }
        }

        if(nums[i] != val){
            nums[j++] = nums[i];
        }

        return j;
    }

int main () {
	    
    vector<int> arr1 {3,2,2,3};
    int val;
    cin >> val;
    int x = removeElement(arr1,val);
    cout << x << " ";

    
}
