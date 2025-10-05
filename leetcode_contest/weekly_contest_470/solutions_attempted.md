#Upsolve
# Compute Alternating Sum

```bash
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        for (int i=0; i<nums.size(); i++){
            if (i%2==0){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
        }
        return sum;
    }
};
```

# Longest Subsequence With Non-Zero Bitwise XOR

```bash
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int total_xor = 0;
        bool all_zero = true;

        for (int x : nums) {
            total_xor ^= x;
            if (x != 0)
                all_zero = false;
        }

        if (all_zero)
            return 0;
        if (total_xor != 0)
            return n;
        return n - 1;
    }
};
```