class Solution {
public:
        int findMax(vector<int> piles) {
            sort(piles.begin(),piles.end());
            return piles[piles.size()-1];
        }
        int findTotalH(vector<int> piles,int mid) {
            unsigned long long totalH=0;
            for(int i=0;i<piles.size();i++) {
                totalH+=ceil((double)piles[i]/(double)mid);
            }
            return totalH;
        }
        int minEatingSpeed(vector<int>& piles, int h) {
            int low=1,high=findMax(piles);
            while(low<=high) {
            int mid=low+(high-low)/2;
            unsigned long long totalH=findTotalH(piles,mid);
            
            if(totalH <=h) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
    }
};




