#include <iostream>
#include <string>

using namespace std;

int main() {
	string a; cin >> a;
	int length = a.length();
	int iter = 0;
	for(int i=0; i<length; i++) {
		printf("%c", a[i]);
		iter++;
		if(iter == 10) {
			printf("\n");
			iter = 0;
		}
	}
}