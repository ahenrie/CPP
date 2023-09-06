#include <bitset>
#include <iostream>
using namespace std;

int main() {

	cout << "Enter the integer that holds the bits: ";
	unsigned int n;
	cin >> n;

	cout << "Enter the rightmost bit position: ";
	unsigned int k;
	cin >> k;

	cout << "Enter the leftmost bit position: ";
	unsigned int m;
	cin >> m;
	
	int mask = ((1 << (m - k + 1)) - 1) << k;

	int extract = (n & mask) >> k;

	cout << "Extracting bits " << k << " through " << m << " from " << n << " = " << bitset<32>(n) << ":" << endl;
	cout << "Result = " << extract << " = " << bitset<32>(extract) << endl;

	return 0;
}
