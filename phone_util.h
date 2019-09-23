#ifndef PHONE_UTIL_H_
#define PHONE_UTIL_H_

#include<iostream>
#include <string>
#include<map>
#include<vector>

const int kMaxNumberOfLetters = 7;
namespace nwacc
{
	std::string& get_inputs(std::string prompt,std::string &get_input);
	std::string& valid_input(std::string prompt,std::string &new_word);
	//void get_integers_mapped(std::vector<std::string>& load_words);
	
}


#endif

