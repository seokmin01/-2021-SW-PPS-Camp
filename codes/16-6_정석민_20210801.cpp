/*
기록을 저장할 unordered_set을 생성한다.
n이 1이 될 때까지 반복한다.
    숫자 변수에 각 자릿수를 제곱한 값을 더한다.
    숫자 변수가 set에 존재하면 false를 반환한다.
    숫자 변수를 set에 추가한다.
    n에 숫자 변수를 저장한다.
반복문에서 벗어나면 true를 반환한다.
*/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        while ( n != 1 ) {
            int sum = 0;
            string s = to_string(n);
            for ( auto c : s )
                sum += (c - '0') * (c - '0');
            if ( us.find(sum) != us.end() )
                return false;
            us.insert(sum);
            n = sum;
        }
        return true;
    }
};