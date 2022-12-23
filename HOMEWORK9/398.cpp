#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x, count = 0;

	ifstream file1("398(input).txt");
	file1 >> x;

	for (int a = 1; a <= x / 2; a++)
	{
		for (int b = a; b <= x / 2; b++)
		{
			for (int c = b; c <= x / 2; c++)
			{
				for (int d = c; d <= x / 2; d++)
				{
					if (a + b + c + d == x)
						count++;
				}
			}
		}
	}

	ofstream file2("398(output).txt");
	file2 << count;

	file1.close();
	file2.close();
}