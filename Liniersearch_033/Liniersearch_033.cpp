#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true) {
		cout << "Masukan panjang element array: ";
		cin >> n;

		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nMinimal array adalah 1 dan maksimum panjang array adalah 20" << endl;

	}
	cout << endl;
	cout << "\n====================" << endl;
	cout << "\nMasukan Elemen Array" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++) {

		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void liniersearch() {
	char ch;
	int comparison;

	do {
		cout << "\nMasukan element array yang ingin dicari: ";
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++) {
			comparison++;
			if (arr[i] == item) {
				cout << "\n" << item << " ketemu di posisi " << (i + 1) << endl;
				break;
			}
			
		}
		if (i == n) 
			cout << "\n" << item << " tidak ketemu di array\n";
			cout << "\nnomor comparasi: " << comparison << endl;
			cout << "\n lanjutkan pencarian (y/n): ";
			cin >> ch;
	} while ((ch == 'y')||(ch == 'Y'));
}

int main() {
	input();
	liniersearch();
}