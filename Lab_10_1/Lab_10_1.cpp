#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CreateTXT(char* fname)
{
	ofstream fout(fname);
	char ch;
	string s;
	do
	{
		cin.get();
		cin.sync();
		cout << "enter line: "; getline(cin, s);
		fout << s << endl;
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}

string ProcessTXT(char* fname)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		for (int i = 0; i < s.length() - 2; i++)
			if (((s[i] == 'O' && s[i + 2] == 'O') || (s[i] == 'A' && s[i + 2] == 'A')) && s[i + 1] == 'G')
				return "yes";
	}
	return "no";
}

int main()
{
	char fname[100];
	cout << "enter file name : "; cin >> fname;
	CreateTXT(fname);
	cout << "Result : " << ProcessTXT(fname) << endl;
	return 0;
}