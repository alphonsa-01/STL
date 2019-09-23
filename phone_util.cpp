#include "phone_util.h"


namespace nwacc
{
	std::string get_input = "";
	std::string& get_inputs(std::string prompt,std::string &get_input)
	{
		//std::vector<std::string>load_words;

		//while (get_input != "STOP")
		//{
		std::cout << prompt;
		//std::string get_input = "";
		std::cin >> get_input;
		//}
		//load_words.push_back(get_input);
		return get_input;
	}
	std::string& valid_input(std::string prompt,std::string &new_word)
	{
		new_word = get_inputs(prompt,&get_input);
		while (new_word != "STOP")
		{
			if (new_word.length() != kMaxNumberOfLetters)
			{
				std::cin.ignore(1024, '\n');
				continue;
			}
			else
			{

				int index = new_word.size();
				char c = new_word[index];
				if (isupper(c))
				{
					new_word;
				}
				else if (islower(c))
				{
					new_word;
				}
				else if (isdigit(c))
				{
					std::cin.ignore();
				}
				else
				{
					new_word;
				}

			}
			return new_word;
			//load_words.push_back(new_word);
		}
	}
}

	/*void get_integers_mapped(std::vector<std::string>& load_words)
	{
		
		
		
		
		std::map<int, std::vector<std::string> >valid_words;
		valid_words[2] = load_words;

		for (const auto& valid_word : valid_words)
		{
			std::cout << valid_word.first << " ";
			for (auto load_word : valid_word.second)
				std::cout << load_word << std::endl;
		}
		
	}*/
