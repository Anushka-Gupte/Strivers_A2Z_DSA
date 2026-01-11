class Twitter {
public:
    priority_queue<pair<int,int>> pq;
    unordered_map<int, set<int>> mpp;
    unordered_map<int, set<pair<int,int>>> tweets;
    int count;
    Twitter() {
        count = 1;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].insert(make_pair(count,tweetId));
        count++;
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        set<pair<int,int>> st = tweets[userId];
        for(auto it : st) {
            pq.push(it);
        }
        if(mpp.find(userId) != mpp.end()) {
            set<int> s = mpp[userId];
            for(auto it : s) {
                set<pair<int,int>> s1 = tweets[it];
                for(auto it1 : s1) {
                    pq.push(it1);
                }
            }
        }
        int n = 0;
        while(!pq.empty() && n < 10) {
            pair<int,int> ele = pq.top();
            pq.pop();
            ans.push_back(ele.second);
            n++;
        }
        while(!pq.empty()) pq.pop();
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId == followeeId) return;
        mpp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mpp[followerId].erase(followeeId);
        for(auto it : mpp) {
            set<int> mySet = mpp[followerId];
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */

// https://leetcode.com/problems/design-twitter/