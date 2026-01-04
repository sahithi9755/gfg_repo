class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>v;
        int left=0;
        int right=0;
        int sum=0;
        while(right<arr.size()){
            sum+=arr[right];
            while(sum>target){
                sum-=arr[left];
                left++;
            }
            if(sum==target){
                v.push_back(left+1);
                v.push_back(right+1);
                return v;
            }
            right++;
        }
        if(v.size()==0){
            v.push_back(-1);
        }
        return v;
    }
};