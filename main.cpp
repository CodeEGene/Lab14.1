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

	double* max = maximum(values, intSize);
	int pos = 0;
	for (int i = 0; i < intSize; i++) {
		if (&values[i] == max) {
			pos = i;
		}
	}

	cout << "Maximum value is element #"<<pos<< ": "<<*max<<endl;
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
	double* currentValue = a;
	for (int i = 1; i < size; i++) {
		if (currentValue < a+i) {
			currentValue = a + i;
		}
	}
	return currentValue;
}
double* minimum(double* a, int size) {
	return a;
}