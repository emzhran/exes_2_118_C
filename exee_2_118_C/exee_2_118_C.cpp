#include <iostream>
using namespace std;

int zachran[43];
int n;


void Search() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 43)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 43 element.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ". ";
		cin >> zachran[i];
	}
}

int main() {
	Search();
}