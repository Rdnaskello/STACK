#include <iostream>
using namespace std;

class Stack {

private:

	static const int MaxSize = 100;
	int topIndex;
	int arr[MaxSize];

public:

	Stack() {
		topIndex = -1;
	}

	void push(int value) {
		if (topIndex <= MaxSize - 1) {
			arr[++topIndex] = value;
		}
		else {
			cout << " Stack is full !" << endl;
		}
	}

	int top() {
		if (topIndex >= 0) {
			return arr[topIndex];
		}
		else {
			cout << " Stack is emptu !";
			return -1;
		}
	}

	void pop() {
		if (topIndex >= 0) {
			topIndex--;
		}
		else{
			cout << " Stack is emptu !";
		}
	}

	int size(){
		return topIndex + 1;
	}


};


int main() {

	Stack stc;
	stc.push(20);
	stc.push(40);

	cout << stc.top() << endl;
	cout << stc.size() << endl;

	stc.pop();

	cout << stc.top() << endl;
	cout << stc.size() << endl;

	return 0;
}