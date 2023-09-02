#include <iostream>
#include <cstddef>
using namespace std;

int main() {
	auto x = byte(0b00000001);
	cout << int(x << 1) << endl;
	cout << int(x << 2) << endl;
	cout << int(x << 3) << endl;
	cout << int(x << 4) << endl;
	cout << int(x << 5) << endl;
	cout << int(x << 6) << endl;
	cout << int(x << 7) << endl;

	return 0;
}
