/*
벡터를 순회하면서 값이 target과 같으면 인덱스 값을 반환한다.
벡터 순회가 끝나면 -1을 반환한다.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] == target ) return i;
        }
        return -1;
    }
};