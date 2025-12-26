class Solution {
  public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        vector<int> nge;
        for(int i=0;i<indices.size();i++) {
            int curr = 0;
            for(int j=indices[i]+1;j<arr.size();j++) {
                if(arr[j] > arr[indices[i]]) curr++;
            }
            nge.push_back(curr);
        }
        return nge;
    }
};