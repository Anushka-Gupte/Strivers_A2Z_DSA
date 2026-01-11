class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        int i, j;
        pair<int,pair<int,int>> ele;
        for(i=0;i<n;i++) {
            pq.push({mat[i][0],{i,0}});
        }
        while(!pq.empty()) {
            ele = pq.top();
            pq.pop();
            ans.push_back(ele.first);
            i = ele.second.first;
            j = ele.second.second;
            if(j+1 < m) 
            pq.push({mat[i][j+1],{i,j+1}});
        }
        return ans;
    }
};

//https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1