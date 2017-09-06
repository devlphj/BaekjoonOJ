#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N; int n[1000]; cin >> N;
	for(int i=0; i<N; i++) scanf("%d", &n[i]);
	sort(n, n+N);
	for(int i=0; i<N; i++) printf("%d\n", n[i]);
}