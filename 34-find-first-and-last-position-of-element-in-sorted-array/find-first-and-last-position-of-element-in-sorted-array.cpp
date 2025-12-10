class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, mid;
        vector<int> a(2,-1);
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (target == nums[mid])
            {
                a.at(0)=mid;
                e = mid - 1;
            }
            else if (target > nums[mid]) 
            {
                s = mid + 1;
            } 
            else 
            {
                e = mid - 1;
            }
        }
        e=nums.size()-1;
        s=0;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (target == nums[mid])
            {
                a.at(1)=mid;
                s = mid + 1;
            }
            else if (target > nums[mid]) 
            {
                s = mid + 1;
            } 
            else 
            {
                e = mid - 1;
            }
        }
        return a;
    }
    
};