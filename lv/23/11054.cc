/*
수열 s가 어떤 수 sk를 기준으로 k를 극대값으로 가지며 k를 제외한 local extreme value를 가지지 않는다면 그것을 바이토닉 수열이라고 한다(+기울기 0 없음)

수열 a가 주어졌을 때 그 수열의 부분 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오

10
1 5 2 1 4 3 4 5 2 1

7
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int num[1000], lis[1000], lds[1000];

    // 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // LIS 계산 (0부터 i까지 증가하는 부분 수열)
    for (int i = 0; i < n; i++) {
        lis[i] = 1;  // 초기값 1
        for (int j = 0; j < i; j++) {
            if (num[i] > num[j]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    // LDS 계산 (i부터 n-1까지 감소하는 부분 수열)
    for (int i = n - 1; i >= 0; i--) {
        lds[i] = 1;  // 초기값 1
        for (int j = n - 1; j > i; j--) {
            if (num[i] > num[j]) {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }

    // 바이토닉 수열의 최대 길이 계산
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        maxLength = max(maxLength, lis[i] + lds[i] - 1);
    }

    cout << maxLength << "\n";
    return 0;
}
