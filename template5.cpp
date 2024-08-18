#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <list>

template<typename T>
void print_container(T value)
{
	for (auto it = value.begin(); it != value.end(); it++)
	{
		std::cout << *it << " ";
	}
}

int main()
{

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	std::cout << "Set: " << std::endl;
	print_container(test_set); 
	
	
	std::list<std::string> test_list = { "one", "two", "three", "four" };
	std::cout << "\nList: " << std::endl;
	print_container(test_list); 

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	std::cout << "\nVector: " << std::endl;
	print_container(test_vector); 
	
}