/*
for문 하나에 모든 걸 한번에 다 해결하려고 하지 말자.
때에 따라서는 구분하는 편이 더 효율적인 연산을 가능케 할 수도 있다는 것을 기억하자......
*/


#include <iostream>
using namespace std;

const int MAX = 1000000;
bool is_prime[MAX + 1];
int primes[MAX], prime_count = 0;

// 에라토스테네스의 체로 소수 계산
void sieve() {
    is_prime[0] = is_prime[1] = false; // 0과 1은 소수가 아님
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // 소수 배열에 저장
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) primes[prime_count++] = i;
    }
}

// 두 소수의 합으로 나타낼 수 있는 경우의 수 세기
int count_prime_pairs(int max) {
    int result = 0;
    for (int i = 0; primes[i] <= max / 2; i++) {
        int rest = max - primes[i];
        if (is_prime[rest]) result++;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 에라토스테네스의 체 실행
    for (int i = 2; i <= MAX; i++) {
        is_prime[i] = true;
    }
    sieve();

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        cout << count_prime_pairs(temp) << '\n';
    }

    return 0;
}