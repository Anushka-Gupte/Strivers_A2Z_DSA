class Solution {
public:
    int stockBuySell(vector<int>& arr, int n) {
        int maxProfit=0, bestBuy=arr[0];

        for(int i=1;i<n;i++) {
            if(arr[i]>bestBuy) {
                maxProfit=max(maxProfit,arr[i]-bestBuy);
            }
            bestBuy=min(bestBuy,arr[i]);
        }
        return maxProfit;
    }
};