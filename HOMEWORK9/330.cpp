#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x1, y1, x2, y2;
	ifstream file1("330(input).txt");
	ofstream file2("330(output).txt");

	file1 >> x1 >> y1 >> x2 >> y2;

	if (abs(x1 - x2) == abs(y1 - y2))
		file2 << 1;
	else
	{
		if ((x1 + y1) % 2 == (x2 + y2) % 2)
			file2 << 2;
		else
			file2 << 0;
	}

	file1.close();
	file2.close();
}