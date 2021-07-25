/*
TC의 개수를 입력받고 그만큼 반복한다.
	학생들의 점수를 다 더하고 학생 수로 나눠서 평균값을 구한다.
	평균값을 넘는 학생 수를 count 하고 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int num;
    cin >> num;
    for ( int i = 0; i < num; i++ ) {
        int student_num;
        cin >> student_num;
        vector<int> score;
        int score_sum = 0, count = 0;
        double score_avg, rate;
        for ( int j = 0; j < student_num; j++ ) {
            int s;
            cin >> s;
            score.push_back(s);
            score_sum += s;
        }
        score_avg = (double)score_sum / student_num ;
        for ( int k = 0; k < student_num; k++ )
            if (score[k] > score_avg) count++;
        rate = (double)count / student_num;
        printf("%.3f%%\n", rate*100);
    }
}