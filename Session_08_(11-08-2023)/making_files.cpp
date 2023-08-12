#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream my_write_file("making_files.txt");

	my_write_file << "Files can be tricky, but it is fun enough!";
	
	my_write_file.close();
	
	
	string my_text;
	
	ifstream my_read_file ("making_files.txt");
	
	while (getline (my_read_file, my_text))
	{
		cout << my_text;
	}
	
	my_read_file.close();
}
