class Solution {
public:
int findMax(vector<int> nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()-1];
}
int findTotalH(vector<int> nums,int mid) {
    unsigned long long totalH=0;
    for(int i=0;i<nums.size();i++) {
        totalH+=ceil((double)nums[i]/(double)mid);
    }
    return totalH;
}
int minimumRateToEatBananas(vector<int> nums, int h) {
        int low=1,high=findMax(nums);
        while(low<=high) {
            int mid=low+(high-low)/2;
            unsigned long long totalH=findTotalH(nums,mid);
            cout<<totalH<<endl;
            if(totalH <=h) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
    }
};
