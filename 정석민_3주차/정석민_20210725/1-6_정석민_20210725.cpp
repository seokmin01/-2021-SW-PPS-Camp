/*
이중 벡터를 선언한다.
numRows 숫자만큼 다음을 반복한다.
    row 벡터를 선언한다.
    row 백터 맨 앞에 1을 추가한다.
    이전 row 벡터를 순회한다.
        문제 설명에 있는 gif 이미지 처럼
        해당 위치의 위에 있는 두 값을 더해 row 벡터에 추가한다.
    row 벡터 마지막에 1을 추가한다.
    row 벡터를 이중 벡터에 추가한다.
이중 벡터를 반환한다.
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal = {{1}};
        for ( int i = 1; i < numRows; i++ ) {
            vector<int> row;
            row.push_back(1);
            for ( int j = 1; j < pascal[i-1].size(); j++ )
                row.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
            row.push_back(1);
            pascal.push_back(row);
        }
        return pascal;
    }
};