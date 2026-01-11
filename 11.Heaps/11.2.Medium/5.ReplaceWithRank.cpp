class Solution {
  public:

    vector<int> replaceWithRank(vector<int> &arr, int N) {
        vector<int> ans(N);
        
        priority_queue<int, vector<int>, greater<int>> pq;
        map<int,int> mpp;
        
        for(int i=0;i<N;i++) {
            pq.push(arr[i]);
        }
        int rank = 1;
        while(!pq.empty()) {
            int ele = pq.top();
            if(mpp.find(ele) == mpp.end()) {
                mpp[ele] = rank;
                rank++;
            }
            pq.pop();
        }
        for(int i=0;i<N;i++) {
            ans[i] = mpp[arr[i]];
        }
        return ans;
    }
};

//https://www.geeksforgeeks.org/problems/replace-elements-by-its-rank-in-the-array/1