//set container의 이용에 주목하자

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<string> employees;  // 현재 회사에 있는 사람을 저장
    string name, state;

    for (int i = 0; i < n; i++) {
        cin >> name >> state;
        if (state == "enter") {
            employees.insert(name);  // 회사에 들어옴
        } else {
            employees.erase(name);  // 회사에서 나감
        }
    }

    // 사전 역순으로 출력
    for (auto it = employees.rbegin(); it != employees.rend(); ++it) {
        cout << *it << "\n";
    }

    return 0;
}
