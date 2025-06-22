#include "Stack.h"

int main() {
	Stack stack;

	cout << "Imput your numbers(0 - for exit): ";
	int number;

	do {
		cin >> number;
		stack.push(number);
	} while (number != 0);

	stack.pop();
	stack.pop();

	cout << "Head:" << stack.head() << endl;
	cout << "Queue elements: " << stack.toString() << endl;

	stack.clear();
	cout << "Queue elements: " << stack.toString() << endl;

	return 0;
}