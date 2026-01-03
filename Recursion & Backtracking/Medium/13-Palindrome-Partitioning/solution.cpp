#include<bits/stdc++.h>
using namespace std; 


class Solution {
public:
    bool isPalindrome(string a){
        bool tr = true;
        for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[a.size()-1-i]){
                tr = false;
                break;
            }
        }
        return tr;
    }
    void generate(vector<vector<string>>& ans,vector<string>& tp,string s,int idx){
        if(idx>=s.size()){
            ans.push_back(tp);
            return;
        }

        for(int i=idx;i<s.size();i++){
            string sub = s.substr(idx,i-idx+1);
            if(isPalindrome(sub)) {
                tp.push_back(sub);
                generate(ans,tp,s,i+1);
                tp.pop_back();
            }
        }
        return;
        
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>> ans;
          vector<string> tp;
          generate(ans,tp,s,0);
          return ans;
    }
};