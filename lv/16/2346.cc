/*
5
3 2 1 -3 -1

1 4 5 3 2
*/
#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<pair<int, int>> dq;

    // 입력 받기
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        dq.push_back({num, i});
    }

    while (!dq.empty()) {
        int move = dq.front().first;  // 현재 풍선의 이동 값
        cout << dq.front().second << " ";  // 풍선 번호 출력
        dq.pop_front();  // 터뜨린 풍선 제거

        if (dq.empty()) break;  // 남은 풍선이 없으면 종료

        // 이동 처리
        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                dq.push_back(dq.front());  // 맨 앞 원소를 뒤로 보냄
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < -move; i++) {
                dq.push_front(dq.back());  // 맨 뒤 원소를 앞으로 보냄
                dq.pop_back();
            }
        }
    }

    return 0;
}
