/*
벡터를 set으로 변환하자.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> v;
        for ( int n : nums )
            s.insert(n);
        for ( int i : s )
            v.push_back(i);
        nums = v;
        return s.size();
    }
};