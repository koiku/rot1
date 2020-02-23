#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{
	std::string input;

	std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string result;

	cout << "Enter string to encode: \n> ";
	getline(cin, input);

	cout << input << std::endl;

	for (unsigned long long i = 0; i < input.size(); i++)
	{
		char item = input[i];
		char new_item;
		if (item == 'z')
		{
			new_item = 'a';
		}
		else if (item == 'Z')
		{
			new_item = 'A';
		}
		else
		{
			size_t pos = alphabet.find(item);
			if (pos != std::string::npos)
			{
				new_item = alphabet[pos + 1];
			}
			else
			{
				new_item = item;
			}
		}

		result += new_item;
	}

	cout << "\nEncoded string: "
		 << result << "\n";

	return 0;
}