#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

string Func(string a, int s)
{
	string del = "";
	for (int i = 0; i < s; i++)
		del += a;
	return del;
}


int main()
{
	string a;
	int s;

	ifstream file1("70(input).txt");
	ofstream file2("70(output).txt");

	file1 >> a >> s;

	if (s > 0)
	{
		string del = Func(a, s);
		if (del.length() > 1023)
		{
			for (int i = 0; i < 1023; i++)
				cout << del[i];
		}
		else file2 << Func(a, s);
	}
	else
	{
		s = abs(s);
		string del = "";
		for (int i = 0; i < a.length() / s; i++)
		{
			del += a[i];
			if (Func(del, s) == a)
			{
				file2 << del << endl;
				return 0;
			}
		}
		file2 << "NO SOLUTION" << endl;
	}

	file1.close();
	file2.close();
}