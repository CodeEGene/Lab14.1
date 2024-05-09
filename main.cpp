#include <iostream>

using namespace std;

double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int intSize;

int main() {

	cout << "Enter size of array: ";
	cin >> intSize;

	double* values = new double[intSize];

	cout << "Enter 6 floating-point values: ";
	for (int i = 0; i < intSize; i++) {
		cin >> values[i];
	}
	cout << "Average is: " << average(values, intSize)<<endl;
	return 0;
}

double average(double* a, int size) {
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += a[i];
	}
	return total/size;
}
double* maximum(double* a, int size) {
	return a;
}
double* minimum(double* a, int size) {
	return a;
}