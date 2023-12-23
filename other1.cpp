class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        int n = nums.size();
        long long ans = 0;
        if (n < 3)
            return -1;

        sort(nums.begin(), nums.end());

        long long sum = nums[0] + nums[1];

        if (n == 3)
        {
            if (sum <= nums[2])
            {
                return -1;
            }
        }

        for (int i = 2; i < n; i++)
        {

            if (ans <= sum && sum > nums[i])
                ans = sum + nums[i];

            sum = sum + nums[i];
        }

        if (ans == 0)
        {
            ans = -1;
        }

        return ans;
    }
};