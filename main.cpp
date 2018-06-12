#include <iostream>
#include <string>
#include <unordered_map>

int main() {
	const std::unordered_map<std::string, int> studentAges{
		{"john", 19},
		{"peter", 24},
		{"paul", 31},
		{"zoltan", 54},
		{"laurent", 90},
		{"justin", 12},
		{"oliver", 1337}
	};

	std::cout << "Enter a name: " << std::endl;

	//This code is in a bit of a sorry state, fix it.
	std::string name;
	std::cin >> name;
	auto& age = studentAges.at(name); //oops, this will throw an exception if the name isn't found;
	std::cout << name << " is " << age << " years old\n";

	//this try catch block has the necessary syntax you need to fulfil the task.
	try {
		//do stuff here.
	} catch (const std::out_of_range& e) {
		//We only go inside here if the exception was thrown.
		//if you're curious, e.what() returns a string that you can read.
	}
	
	return 0;
}
