class Solution {
public:
    int noOfDays(vector<int> weights, int mid) {
        unsigned long long count=0,sum=0;
        for(int i=0;i<weights.size();i++) {
            if(sum + weights[i] <=mid) sum+=weights[i];
            else {
                count++;
                sum=0;
                sum+=weights[i];
            }
        }
        if(sum<=mid) count++;
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN;
        unsigned long long high=0;
        for(int el : weights) {
            low=max(low,el);
            high+=el;
        }
        while(low<=high) {
            int mid=low+(high-low)/2;
            unsigned long long countDays=noOfDays(weights,mid);
            if(countDays<=days) high=mid-1;
            else {
                low=mid+1;
            }
        }
        return low;
    }
};