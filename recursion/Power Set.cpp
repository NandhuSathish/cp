void helper(vector<int>&v,int i,vector<int>&sub,vector<vector<int>>&ans){
    if(i>=v.size()){
        ans.push_back(sub);
        return;
    }
    //include
    sub.push_back(v[i]);
    helper(v,i+1,sub,ans);
    //not include
    sub.pop_back();
    helper(v,i+1,sub,ans);
        
}
    
vector<vector<int>> pwset(vector<int>v)
{
    vector<int>sub;
    vector<vector<int>>ans;
    helper(v,0,sub,ans);
    return ans;
}
