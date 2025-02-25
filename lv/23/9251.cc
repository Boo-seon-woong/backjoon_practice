/*
LCS(longest common subsequence)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다

예를 들어 acaykp와 capcak의 lcs는 acak가 된다

첫째 줄과 둘째 줄에 두 문자열이 주어진다
문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다

첫째 줄에 입력으로 주어진 두 문자열의 lcs의 길이를 출력하라라
ACAYKP
CAPCAK
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int dp[1001][1001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;

    cin >> a >> b;
    for (int i = 1; i <= a.length(); i++) {
        for (int j = 1; j <= b.length(); j++) {
            if (a[i - 1] == b[j-1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }

        }
    }

    cout << dp[a.length()][b.length()];

    return 0;
}