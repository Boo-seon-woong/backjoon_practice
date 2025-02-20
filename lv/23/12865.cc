#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001]; // 1차원 배열 사용
int n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        
        // 💡 뒤에서부터 갱신 (무게가 작은 것부터 갱신하면 덮어씌워짐)
        for (int j = k; j >= w; j--) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    cout << dp[k] << '\n'; // 최댓값 출력
    return 0;
}
