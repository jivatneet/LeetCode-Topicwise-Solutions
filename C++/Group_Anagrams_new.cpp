class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string,int> um;
         vector<vector<string>> res;
        int sz = 0;
        
        for(int i=0; i<n; i++){
            string s = strs[i];
            
            sort(s.begin(),s.end());
            if(um.find(s)==um.end()){
                vector<string> v;
                v.push_back(strs[i]);
                res.push_back(v);
                um[s] = sz;
                sz++;
            }
            
            else{
                int index=um[s];
                vector<string> v = res[index];
                v.push_back(strs[i]);
                res[index] = v;
            }
            
        }
        
        return res;
        
    }
};