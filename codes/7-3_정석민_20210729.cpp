/*
벡터를 정렬했을 때 중앙에 오는 값이 Majority Element이다.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};