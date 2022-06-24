#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int K, m;
	cout << "K:";
	cin >> K;
	cout << endl;

	m = (K + 3) % 7;
	cout << "номер дня недели:" << m;
}