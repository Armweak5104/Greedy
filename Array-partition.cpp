#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int sum = 0;
        while(i<nums.size()){
            sum+=nums[i];
            i+=2;
        }
        return sum;
    }
};