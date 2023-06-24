#include<bits/stdc++.h>
using namespace std;
    
bool containsDuplicate(vector<int> nums) {
 
    unordered_set<int> set;
    
    for(int i = 0; i<nums.size();i++){
        set.insert(nums[i]);
    }
    
    if(set.size() < nums.size())
        return true;
    
    return false;
}
int main () {
	    
    vector<int> nums {1, 2, 3, 1};
    
    bool res = containsDuplicate(nums);
    
    if(res== 1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
