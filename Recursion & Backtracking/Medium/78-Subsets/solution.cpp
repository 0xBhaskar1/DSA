#include<bits/stdc++.h>
using namespace std; 

void generate(vector<vector<int>> &tp,vector<int>& nums,int idx,vector<int> & temp){
        if(idx>=nums.size()){
            tp.push_back(temp);
            return;
        }

        temp.push_back(nums[idx]);
        generate(tp,nums,idx+1,temp);
        temp.pop_back();
        generate(tp,nums,idx+1,temp);

    }
vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        generate(ans,nums,0,temp);
        return ans;
    }

int main(){
    vector<int> nums = {1,2,3};
    subsets(nums);

}