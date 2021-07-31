/*
char와 int pair로 이루어진 덱을 생성한다.
문자열을 순회한다.
    덱이 비었거나 문자가 덱의 back에 있는 문자와 다르면
        문자와 1을 pair로 묶어 덱에 추가한다.
    문자가 덱의 back에 있는 문자와 일치하면
        back의 해당 숫자에 1을 더한다.
        back의 숫자가 2가 되면
            back을 pop한다.
answer 문자열을 생성하고 반복문을 활용하여 문자열을 채운다.
answer 문자열을 반환한다.
*/

class Solution {
public:
    string removeDuplicates(string s) {
        deque<pair<char, int>> dq;
        for ( auto c : s ) {
            if ( dq.empty() || dq.back().first != c )
                dq.push_back(make_pair(c, 1));
            else {
                dq.back().second++;
                if ( dq.back().second >= 2 )
                    dq.pop_back();
            }
        }
        string answer = "";
        while ( !dq.empty() ) {
            for ( int i = 0; i < dq.front().second; i++ )
                answer += dq.front().first;
            dq.pop_front();
        }
        return answer;
    }
};