#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int sum1 = 0, sum2 = 0;
	string a1, a2, ch1, ch2;
	vector<int> del;
	ifstream file1("793(input).txt");
	ofstream file2("793(output).txt");

	while (file1 >> a1)
	{

		for (int i = 0; i < a1.length(); i++) //сумма цифр в числе 
		{
			ch1 = a1[i];
			sum1 += stoi(ch1);
		}

		for (int i = 1; i < stoi(a1); i++)
		{
			int c = 0;
			if (stoi(a1) % i == 0) //делители числа а
			{
				for (int j = 1; j < i + 1; j++)
				{
					if (i % j == 0) //определяем простые
						c += 1;
				}

				if (c == 2)
				{
					a2 += to_string(i);
				}

				c = 0;
			}
		}

		if (a2.size() == 1)
			sum2 = stoi(a2) * stoi(a2);
		else
		{
			for (int m = 0; m < a2.size(); m++)
			{
				ch2 = a2[m];
				sum2 += stoi(ch2);
			}
		}

		if (sum1 == sum2)
			file2 << 1;
		else
			file2 << 0;

		sum1 = 0;
		sum2 = 0;
		a2 = "";


	}

	file1.close();
	file2.close();
}