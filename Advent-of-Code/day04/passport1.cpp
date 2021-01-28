#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int evaluate (string field)
{
	int value = 0;
	
	if (field == "byr") value = 1;
	if (field == "iyr") value = 2;
	if (field == "eyr") value = 4;
	if (field == "hgt") value = 8;
	if (field == "hcl") value = 16;
	if (field == "ecl") value = 32;
	if (field == "pid") value = 64;
	
	return value;
}

int main ()
{
	string line;
	string pass [264][12]; // reg x field
	
	int r = 0; // registry
	int f = 0; // field
	int valid = 0; // number of valid passports

	for (int i = 0 ; i < 960; ++i)
	{
		getline(cin, line);
		
		if (line == "")
		{
			cout << "[" << r << "] ";
			int v = 0;
			for (int i = 0; i < f; ++i)
			{
				cout << pass[r][i] << ' ';
				v += evaluate(pass[r][i]);
			}
			cout << " = " << v;
			if (v == 127)
			{
				 cout << " VALID";
				 valid++;
			}
			cout << endl;
			r++;
			f=0;
	
		}
		else
		{
			int ignore = 0;
			for (int i = 0 ; i < int(line.size()) ; ++i)
			{
				if (line[i]==' ')
				{
					f++;
					ignore = 0;
				}
				else if (line[i]==':') ignore = 1;
				else if (ignore==0) pass[r][f] += line[i];
			}
			f++;
		}
	}
	cout << endl << "Valid Passports: " << valid << endl;
	return 0;
}