class Solution {

  public:
    vector<int> arrangeOddAndEven(vector<int>& arr) {
        // Your code goes here
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd.push_back(arr[i]);
            }
            else{
                even.push_back(arr[i]);
            }
        }
         vector<int> result;
        int i = 0, j = 0;

        while (i < even.size() && j < odd.size()) {
            result.push_back(even[i++]);
            result.push_back(odd[j++]);
        }

        while (i < even.size())
            result.push_back(even[i++]);

        while (j < odd.size())
            result.push_back(odd[j++]);

        return result;
    }
};
