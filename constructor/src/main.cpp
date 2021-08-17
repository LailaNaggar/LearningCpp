#include "cons.h"
#include <iostream>

int main()
{
	ball def{};
	def.print();
 
	ball blue{ "blue" };
	blue.print();
	
	ball twenty{ 20.0};
	twenty.print();
	
	ball blueTwenty{ "blue", 20.0};
	blueTwenty.print();
 
	return 0;
}