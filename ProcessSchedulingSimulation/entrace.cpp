#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fout;
	fout.open("D:\\debugLogs\\pss.log", ios::app);
	if (fout.is_open())
	{
		fout << "hello world";
		fout.close();
	}
	cin.get();
}