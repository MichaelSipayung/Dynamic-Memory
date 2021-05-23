// Dynamic Memory.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <memory>
#include <list>	
#include <vector>

std::shared_ptr<int> factory(int a) {
	
	return std::make_shared<int>();
}

class strBlob {
public:
	typedef std::vector<std::string>::size_type size_type;
	strBlob();
	strBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const std::string& t) {
		data->push_back(t);

	}
	void  pop_back();
	std::string& front();
	std::string& back();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string& msg) const;

};

// TODO: Reference additional headers your program requires here.
