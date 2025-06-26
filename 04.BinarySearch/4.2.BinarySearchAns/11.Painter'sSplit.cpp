class Solution {
public:
    int noOfSubs(vector<int> boards,int k) {
        int subs=1;
        unsigned long long sum=0;
        for(int i=0;i<boards.size();i++) {
            if(sum+boards[i] <= mid) {
                sum+=boards[i];
            }
            else {
                subs++;
                sum=boards[i];
            }
        }
        return subs;
    }
    int findLargestMinDistance(vector<int>& boards, int k) {
        int low=*max_element(boards.begin(),boards.end());
        int high=accumulate(boards.begin(),boards.end(),0);
        while(low<=high) {
            int mid=low+(high-low)/2;
            
            if(noOfSubs(boards,mid) > k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};