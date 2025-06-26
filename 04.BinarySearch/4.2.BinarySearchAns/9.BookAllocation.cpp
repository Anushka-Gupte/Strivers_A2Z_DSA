class Solution {
public:
    int noOfStudents(vector<int> nums, int pages) {
        int student=1;
        long long pagesStudent=0;
        for(int i=0;i<nums.size();i++) {
            if(pagesStudent + nums[i] <= pages) {
                pagesStudent+=nums[i];
            }
            else {
                student+=1;
                pagesStudent=nums[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &nums, int m)  {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high) {
            int mid=low+(high-low)/2;

            if(noOfStudents(nums,mid) > m) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};