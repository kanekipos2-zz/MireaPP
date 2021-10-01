#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

float input(char c)
{
	cout << "\n������� " << c << ": ";
	float a;
	cin >> a;
	return a;
}

vector<string> split(const string& s, char delim) {

	vector<string> elems;

	stringstream ss;

	ss.str(s);

	string item;

	while (getline(ss, item, delim)) {

		elems.push_back(item);

	}

	return elems;

}



void fileWrite(string name, string data)
{
	ofstream out;
	out.open("C:\\test\\"+name + ".txt");
	if (out.is_open())
	{
		out << data;
	}
	out.close();
}

string fileRead(string name)
{
	string line;
	string total = "";
	ifstream in("C:\\test\\" + name + ".txt");
	if (in.is_open())
	{
		while (getline(in, line))
		{
			total += line + "\n";
		}
	}
	in.close();
	return total;
}

void n32()
{
	float S = input('S');
	float m = input('m');
	float n = input('n');
	cout << "\np = " << pow((m * n * 12 - S) / S * 100, 1.0 / n);
}

void n41()
{
	fileWrite("4.1", "1 2 3 4 5 6 7 8 9 10");
	string read = fileRead("4.1");
	vector<string> nums = split(read, ' ');
	int sum = 0;
	for (string e : nums) 
	{
		sum += stoi(e);
	}
	cout << "\n�����: " << sum;
}

int sign(float n) { return n > 0 ? 1 : n == 0 ? 0 : -1; }

void n42()
{
	float n = input('n');
	cout << "\n" << sign(n);
}

static class �������
{
public:
	void ��������������()
	{
		float x = input('x');
		float y = input('y');
		cout << "\nS = " << x * y;
	}
	void ������������()
	{
		float osn = input('o');
		float h = input('h');
		cout << "\nS = " << osn * h / 2;
	}
	void �����()
	{
		float r = input('r');
		cout << "\nS = " << 3.1415926535 * r * r;
	}
};

void n43()
{
	int f;
	cout << "\n������� ���� �����? 0-�� 1-�� 2-��\n";
	cin >> f;
	if (f == 0) �������().��������������();
	if (f == 1) �������().������������();
	if (f == 2) �������().�����();
}

void n44()
{
	for (int l = 0; l < 13; l++)
	{
		string line = "";
		if (l < 6)
		{
			for (int i = 0; i < 8; i++) line += '*';
			for (int i = 0; i < 12; i++) line += l % 2 == 0 ? '-' : '=';
		}
		else for (int i = 0; i < 20; i++) line += l % 2 == 0 ? '-' : '=';
		cout << line << "\n";
	}
}

void n45()
{
	char graf[31][23];
	for (int x = 0; x < 31; x++) for (int y = 0; y < 23; y++) graf[x][y] = '*';

	for (int x = 0; x < 31; x++) {
		int n = round(sin(x * 15 * 0.0175) * 10);
		graf[x][n + 11] = '#';
	}

	for (int x = 0; x < 31; x++) graf[x][11] = '-';
	for (int y = 0; y < 23; y++) graf[12][y] = '|';

	for (int y = 0; y < 23; y++) {
		for (int x = 0; x < 31; x++) {
			cout << graf[x][22 - y];
		}
		cout << "\n";
	}
}


int main() 
{
	setlocale(0, "");
	while (true)
	{
		string n;
		cout << "\n����� �������: ";
		cin >> n;
		if (n == "3.2") n32();
		if (n == "4.1") n41();
		if (n == "4.2") n42();
		if (n == "4.3") n43();
		if (n == "4.4") n44();
		if (n == "4.5") n45();
	}
}
