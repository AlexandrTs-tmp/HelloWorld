//============================================================================
// Name        : HelloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void setup();
void loop();

int main() {
	setup();
	for (int i = 0; i < 10; i++) {
		loop();
	}
	return 0;
}

void setup() {

}

void loop() {
	static int i = 0;
	cout << i++ << endl;
}
