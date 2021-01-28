#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int validate_rng (string data, int min, int max)
{
	int value = stoi (data);
	return value >= min && value <= max;
}

int validate_hgt (string hgt)
{
	string data;
	string unit;
	int len = hgt.size();
	for (int i = 0; i < len; ++i)
	{
		if (i < len - 2) data += hgt[i];
		else unit += hgt[i];
	}
	if (unit == "cm") return validate_rng(data, 150, 193);
	if (unit == "in") return validate_rng(data, 59, 76);
	return 0;
}

int validate_hcl (string hcl)
{
	int len = hcl.size();
	if (len != 7) return 0;
	if (hcl[0] != '#') return 0;
	return (hcl.find_first_not_of("0123456789abcdefABCDEF",1)==string::npos);
}

int validate_ecl (string ecl)
{
	int len = ecl.size();
	if (len != 3) return 0;
	if (ecl == "amb") return 1;
	if (ecl == "blu") return 1;
	if (ecl == "brn") return 1;
	if (ecl == "gry") return 1;
	if (ecl == "grn") return 1;
	if (ecl == "hzl") return 1;
	if (ecl == "oth") return 1;
	return 0;
}
int validate_pid (string pid)
{
	int len = pid.size();
	if (len != 9) return 0;
	return (pid.find_first_not_of("0123456789")==string::npos);
}

int evaluate (string field, string data)
{
	if (field == "byr") return 1 * validate_rng(data, 1920, 2002);
	if (field == "iyr") return 2 * validate_rng(data, 2010, 2020);
	if (field == "eyr") return 4 * validate_rng(data, 2020, 2030);
	if (field == "hgt") return 8 * validate_hgt(data);
	if (field == "hcl") return 16 * validate_hcl(data);
	if (field == "ecl") return 32 * validate_ecl(data);
	if (field == "pid") return 64 * validate_pid(data);
	return 0;
}

int main ()
{
	string pass [264][12][2]; // reg x field x data
	string line;
	
	int r = 0; // registry
	int f = 0; // field
	int valid = 0; // number of valid passports

	for (int n = 0 ; n < 960; ++n)
	{
		getline(cin, line);
		
		if (line == "")
		{
			int v = 0;
			for (int i = 0; i < f; ++i)
			{
				v += evaluate(pass[r][i][0],pass[r][i][1]);
			}
			if (v == 127)
			{
				 valid++;
			}
			r++;
			f = 0;
		}
		else
		{
			int sw = 0; // switch field - data
			for (int i = 0 ; i < int(line.size()) ; ++i)
			{
				if (line[i]==' ')
				{
					f++;    // pass to next field
					sw = 0; // switch to field
				}
				else if (line[i]==':') sw = 1;  // switch to data
				else pass[r][f][sw] += line[i]; // append to field or data
			}
			f++;
		}
	}
	cout << endl << "Valid Passports: " << valid << endl;
	return 0;
}