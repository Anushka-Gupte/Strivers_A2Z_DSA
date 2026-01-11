class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        cout<<boolalpha;
        int l = hand.size();
        if(l%groupSize) return false;
        if(groupSize == 1) return true;
        priority_queue<int, vector<int>, greater<int>> pq;
        map<int,int> mpp;
        
        for(int i=0;i<hand.size();i++) {
            mpp[hand[i]]++;
            pq.push(hand[i]);
        }
        for(int i=0;i<l/groupSize;i++) {
            int start = pq.top();   
            //find starting number of current group
            pq.pop();
            while(mpp[start] == 0) {    //if the number is no longer available
                start = pq.top();       //we pop again
                pq.pop();
            }
            //now we find all other numbers in the group
            for(int j=0;j<groupSize;j++) {
                mpp[start] -= 1;    //decrease the frequency
                if(mpp[start] < 0) return false;    //the number is not available
                start += 1;
            }
        }
        return true;
    }
};

//https://leetcode.com/problems/hand-of-straights/