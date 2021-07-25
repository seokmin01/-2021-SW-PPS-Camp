/*
i와 j의 값이 동시에 올라가는 for문을 사용하자.
    쿠키가 아이를 만족시킬 때 까지 j의 값을 올린다.
    쿠키가 더 이상 없으면 i를 반환한다.
i를 반환한다.
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        if ( s.size() == 0 ) return 0;
        for ( ; i < g.size() && j < s.size(); i++, j++ ) {
            while ( g[i] > s[j] ) {
                j++;
                if ( j == s.size() ) return i;
            }
        }
        return i;
    }
};