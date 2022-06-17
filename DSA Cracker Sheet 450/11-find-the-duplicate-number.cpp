class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup ;
        map <int,int> m;

        for(int i = 0; i<nums.size(); i++)
        {
            m[nums[i]]++;

            if(m[nums[i]] > 1)
            {
                dup = nums[i];
                break;
            }
        }

        return dup;
    }
};
