#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constracktor
	StackArray() {
		top = -1;
	}
	void push() {
		int element;
		cout << "masukan element : ";
		cin >> element;
		if (top == 4) { // step 1
			cout << "Number of data exceed the limit" << endl;
			return;

		}

		top++; // step 2
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;
	}

	void pop() {
		if (empty()) { // step 1
			cout << "\nstack is empety cannot pop" << endl; //1.a
			return; //1.b
		}
		cout << "\nThe popped element is : " << stack_array[top] << endl; // step 2
		top--; // step 3 decrement 
	}

	// method for check if data is empty 
bool empty() {
	return (top == -1);
}

void display() {
	if (empty()) {
		cout << "\nStack is empty " << endl;
	}
	else {
		for (int tmp = top; tmp >= 0; top--) {
			cout << stack_array[top] << endl;
			}
		}
	}
};

	int main() {
		StackArray s;
		char ch;
		while (true) {
			cout << endl;
			cout << "\n***Stack Menu***\n" << endl;
			cout << "1 push \n" << endl;
			cout << "2 pop \n" << endl;
			cout << "3 display\n" << endl;
			cout << "4.Exit\n" << endl;
			cout << " Enter your choice (1-4) :";
			cin >> ch;
			switch (ch) {
			case '1': {
				int element;
				cout << "Enter an Elemnt : ";
				cin >> element;
				s.push();
				break;
			}
			case '2':
				if (s.empty()) {
					cout << "\n Stack is empty " << endl;
					break;
				}
				s.pop();
				break;
			case '3':
				s.display();
				break;
			case '4':
				return 0;
			default:
				cout << "\nInvalid option " << endl;
				break;
			}
		}
	}