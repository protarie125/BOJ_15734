#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int l, r, a;
	cin >> l >> r >> a;

	if (l < r) {
		auto loss = r - l;
		if (loss <= a) {
			a -= loss;
			l = r;
		}
		else {
			l += a;
			a = 0;
		}
	}
	else if (r < l) {
		auto loss = l - r;
		if (loss <= a) {
			a -= loss;
			r = l;
		}
		else {
			r += a;
			a = 0;
		}
	}

	if (l == r) {
		cout << l + r + a - (a % 2);
	}
	else if (l < r) {
		cout << 2 * l;
	}
	else {
		cout << 2 * r;
	}

	return 0;
}