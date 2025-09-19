#include<iostream>
#include<string>

using namespace std;

int main()
{
	// String reversal program
	// Dynamically allocating a std::string object
	string* text = new string();

	cout << "Enter your text: ";
	getline(cin, *text);
	
	int length = text->length();


	// Reversing the string in place
	for(int i = 0; i < length/2;i++)
	{
		// Swapping each entry with its counterpart from the other side of the text its
		// We have to dereference the std::string object before accessing 
		char temp = (*text)[i];
		(*text)[i] = (*text)[length - 1 - i];
		(*text)[length - 1 - i] = temp;
	}

	// Displaying the reversed string and deallocating it
	cout << endl << "Reversed Text: " << *text << endl;
	delete text;

	return 0;
}
