class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int ans=0;
        for(auto i : nums){
            m[i]+=1;
        }
        for(auto i : m){
            if(i.second >1)
           ans=i.first;

               
        }
         return ans;
    }
};