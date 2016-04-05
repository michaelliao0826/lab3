#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main()
{
	int size;
	int total = 0;

	ifstream read("file.in.txt", ios::in);
	if(!read)
	{
		cerr << "Failed while opening the file.in.txt" << endl;
	}
	read >> size;

	vector <int> cow(size);
	for(int i = 0 ; i < size ; i++)
	{
		read >> cow.at(i);
	}

	sort(cow.begin(), cow.end());
		
	for(int i = (0 + 3) ; i < size ; i++)								
	{		
		total += cow.at(i);
	}

	cout << total << endl;
}

