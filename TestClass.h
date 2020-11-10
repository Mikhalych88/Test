#pragma once

class TestClass {
public:
	TestClass() {

	}
private:
	int value1 = 1;
	int value2 = 2;
	int value3 = 3;
};

TestClass::TestClass() {
	value1 = 111;
	value2 = 222;
	value3 = 333;
}