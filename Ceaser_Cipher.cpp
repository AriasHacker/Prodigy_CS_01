#include <iostream>
using namespace std;

//varaible declaration 

string output;  //store encrypted and decrypted result in the output varaible .
char a;


 // ENCRYPTION

string encryption(string s, int key)
{
	for (int i = 0; i < s.length();i++)
	{
		a = s[i] + key;
		if( (a < 'z') || (a < 'Z'))
		{
			output = output + a;
		}
		else
		{
			a -= 26;
		}
	}
	return output;
}

// DECRYPTION 

string decryption(string s, int key)
{
	for (int i = 0; i < s.length();i++)
	{
		a = s[i] - key;
		if ((a < 'z') || (a < 'Z'))
		{
			output = output + a;
		}
		else
		{
			a += 26;
		}
	}
	return output;
}

void main()
{
	string input;
	int userInput, key;

	cout << " Enter 1 for Encryption :\n Enter 2 for Decryption :\n Input :" << endl;
	cin >> userInput;

	cout << " Enter the Text " << endl;
	cin >> input;

	cout << "Enter the Key " << endl;
	cin >> key;

	switch (userInput)
	{
	case 1 :
		cout << "Encrypted Text :" << encryption(input, key);break;
	case 2 :
		cout << "Decrypted Text :" << decryption(input, key); break;
	default :
		cout << "invalid input " << endl;

	}
 }