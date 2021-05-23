// Dynamic Memory.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <memory>
#include <list>	
#include <vector>
#include <cstdlib>
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

void strBlob::check(size_type i, const std::string& msg) const {
	if (i >= data->size()) {
		throw std::out_of_range(msg);
	}
}
std::string& strBlob::front() {
	check(0, "Front on empty strBlob");
	return data->back();
}
std::string& strBlob::back() {
	check(0, "back on empty blob");
	return data->back();
}

void strBlob::pop_back() {
	check(0, "Pop back on empty strBlob");
	data->pop_back();
}



// TODO: Reference additional headers your program requires here.
