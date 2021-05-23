// Dynamic Memory.cpp : Defines the entry point for the application.
//

#include "Dynamic Memory.h"


int main()
{
	std::cout << "Hello Dynamic Memory" << std::endl;
	std::shared_ptr<std::string> p1; //point at a string 
	std::shared_ptr<std::list<int>> p2;
	std::cout << "a default initialized smart pointer holds a null pointer" << std::endl;
	if (p1 && p2->empty()) {
		*p1 = "hi";
	}
	std::shared_ptr<int> p3 = std::make_shared<int>(42);
	std::shared_ptr<std::string> p4= std::make_shared<std::string>(19, 'a');
	std::cout << "using auto to make the variable points to a dynamicially allocated" << std::endl;
	auto p6 = std::make_shared<std::vector<std::string>>; //value initialized .. current value is empty string 
	std::cout << "Copying shared ptr " << std::endl;
	auto copy = std::make_shared<int>(87);
	auto dest(copy);
	auto r = std::make_shared<int>(42);
	std::cout << "1.See the address \t:[" << dest << "]" << std::endl;
	std::cout << "2.See the address \t:[" << r << "]" << std::endl;
	r = dest; //destroy the object r  and point to different address
	std::cout << "\n1.See the address \t:[" << dest << "]" << std::endl;
	std::cout << "2.See the address \t:[" << r << "]" << std::endl;

	std::shared_ptr<std::vector<int>> name = std::make_shared<std::vector<int>>(1);
	name->push_back(87);
	std::cout << "try access element \t:[ " << name->size() << "]" << std::endl;
	std::cout << "Traverse vector" << std::endl; 
	for (auto i=name->begin();i!=name->end();++i)
	{
		std::cout << *i << "|";
	}
	std::cout<<std::endl;






	return 0;
}
