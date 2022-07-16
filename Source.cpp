#include <iostream>
using namespace std;

int* CreateArr(int n) {
	int* NewArr = new int[n];
	return NewArr;
}
void PrintArr(int arr[], int n) {

	for (int i = 0; i < sizeof(*arr) * n / sizeof(int); i++) {
		cout << " | " << arr[i] << " | ";
	}

}
int main() {

	int Number;
	cin >> Number;
	int* MyArr = CreateArr(Number);
	for (int i = 0; i < sizeof(*MyArr)*Number / sizeof(int); i++) {
		cin >> MyArr[i];
	}
	PrintArr(MyArr, Number);
	cout << endl;
	delete[]MyArr;

	return 0;
}