#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{
	std::string input;
	std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string result;

	cout << "Enter string to decode: \n> ";
	getline(cin, input);

	for (unsigned long long i = 0; i < input.size(); i++)
	{
		char item = input[i];
		char new_item;
		if (item == 'a')
		{
			new_item = 'z';
		}
		else if (item == 'A')
		{
			new_item = 'Z';
		}
		else
		{
			size_t pos = alphabet.find(item);
			if (pos != std::string::npos)
			{
				new_item = alphabet[pos - 1];
			}
			else
			{
				new_item = item;
			}
		}

		result += new_item;
	}

	cout << "\nDecoded string: "
		 << result << "\n";

	return 0;
}