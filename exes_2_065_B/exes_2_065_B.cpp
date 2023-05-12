#include <iostream>
using namespace std;

int main() {
	string nickname = "bimo";
	int arr_length = 485;
	int arr[485];

	for (int i = 0; i < 485; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < 485; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	int desired_element;
	cout << "\n------------------------------\n";
	cout << "\nmasukan indeks yang mau dicari\n";
	cout << "\n------------------------------\n";
	cin >> desired_element;

	int lowerbound = 0;
	int upperbound = 485 - 1;
	int mid = (lowerbound + upperbound) / 2;

	while (lowerbound <= upperbound) {
		if (arr[mid] == desired_element) {
			cout << " found " << mid << endl;
			return 0;
		}

		else if (desired_element < arr[mid]) {
			upperbound = mid - 1;
		}
		else if (desired_element > arr[mid]) {
			lowerbound = mid + 1;
		}
		mid = (lowerbound + upperbound) / 2;
	}

	cout << "not found" << endl;
	return 0;
}