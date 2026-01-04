class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto itr:m){
            while(itr.second--){
                v.push_back(itr.first);
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=v[i];
        }
    }
};