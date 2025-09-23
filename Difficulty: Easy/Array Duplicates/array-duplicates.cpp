class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto itr:m){
            if(itr.second>1){
                v.push_back(itr.first);
            }
        }
        return v;
    }
};