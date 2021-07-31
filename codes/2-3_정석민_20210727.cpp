/*
접미사 문자열을 생성한다.
맨 앞 문자열을 나머지 문자열과 비교하면서 접미사를 구한다.
    맨 앞 문자열의 0부터 i까지 부분을 tmp이라고 하자.
    substr 함수를 사용하자.
    tmp가 나머지 문자열의 앞 부분과 다르면 이전 단계까지의 접미사 문자열을 반환한다.
    아니라면, 접미사 문자열에 tmp를 저장한다.
tmp를 반환한다.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        for ( int i = 0; i < strs[0].length(); i++ ) {
            string tmp = strs[0].substr(0, i+1);
            for ( int j = 1; j < strs.size(); j++ ) {
                if ( i == strs[j].size() || strs[j].substr(0, i+1) != tmp )
                    return pre;
            }
            pre = tmp;
        }
        return pre;
    }
};