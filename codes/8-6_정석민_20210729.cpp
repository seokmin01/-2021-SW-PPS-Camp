/*
벡터를 순회하면서 값이 target보다 크거나 같으면 인덱스 값을 반환한다.
벡터 순회가 끝나면 벡터의 크기를 반환한다.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for ( i = 0; i < nums.size(); i++ ) {
            if ( nums[i] >= target ) return i;
        }
        return i;
    }
};