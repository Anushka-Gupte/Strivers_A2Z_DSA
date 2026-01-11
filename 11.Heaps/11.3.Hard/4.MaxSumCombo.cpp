vector<int> solve(vector<int> A, vector<int> B, int k) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n = A.size();
    
    vector<int> ans;
    priority_queue<pair<int,pair<int,int>>> pq;
    set<pair<int,int>> s;
    pq.push({A[n-1]+B[n-1],{n-1,n-1}});
    s.insert({n-1,n-1});
    
    while(k--) {
        pair<int,pair<int,int>> ele = pq.top();
        pq.pop();
        
        ans.push_back(ele.first);
        
        if(!s.count({ele.second.first - 1, ele.second.second})) {
            pq.push(make_pair(A[ele.second.first-1]+B[ele.second.second],make_pair(ele.second.first-1,ele.second.second)));
            s.insert({ele.second.first - 1, ele.second.second});
        }
        if(!s.count({ele.second.first,ele.second.second-1})) {
            pq.push(make_pair(A[ele.second.first]+B[ele.second.second-1],make_pair(ele.second.first,ele.second.second-1)));
            s.insert({ele.second.first,ele.second.second-1});
        }
    }
    return ans;
}

// https://www.interviewbit.com/problems/maximum-sum-combinations/