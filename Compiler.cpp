#include <iostream>

#include "Interpreter.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	Interpreter interpreter;

	interpreter.Interpret("12+2;12-2;12*2;");

	return 0;
}