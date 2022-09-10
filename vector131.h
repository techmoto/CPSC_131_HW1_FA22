#pragma once

class vector131 {
	private:
		int *arrayPointer;
		int numOfElements; 
		int nextIndex; 
	public:
		vector131();  // constructor
		~vector131(); // destructor
		int& operator[](int index);
		void push_front(int val); // adds a new value to the front
		void push_back(int val); // adds a new value to the end
		int size(); // returns array size
		int resize(); // resizes array
};

//constructor
vector131::vector131() {

}

//destructor
vector131::~vector131() {

}

// indexing operation
int& vector131::operator[](int index) {

}

//push_front function
void vector131::push_front(int val) {

}

//push_back function
void vector131::push_back(int val) {

}

//resizes the array
int vector131::size() {

}



