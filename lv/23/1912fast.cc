/*
chatgpt가 푼 코드
난 시간초과로 패배하고 말았다
어떻게 효율적으로 시간복잡도를 줄일지 잘 생각해보자

카데인 알고리즘 참조
*/
#include <iostream>
using namespace std;

int arr[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Kadane's Algorithm (O(n))
    int max_sum = arr[1];   // 최대 부분합
    int current_sum = arr[1]; // 현재 부분합
    int start = 1, end = 1, temp_start = 1;

    for (int i = 2; i <= n; i++) {
        if (current_sum + arr[i] < arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    cout << max_sum << "\n";

    return 0;
}
