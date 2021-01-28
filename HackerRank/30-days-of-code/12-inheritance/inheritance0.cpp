#include <iostream>
#include <vector>

using namespace std;

class Person
{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification)
		{
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson()
		{
			cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << endl;
		}
};

class Student : public Person
{
	private:
		vector<int> testScores;
	public:
		Student(string firstName, string lastName, int id, vector<int> scores)
			//:Person (firstName, lastName, id)
			:Person{firstName, lastName, id}, testScores{scores}
		{
				//this->testScores = scores;
		}
		char calculate()
		{
			int len = testScores.size();
			int sum = 0;
			int avg = 0;
			for (int i = 0; i < len; ++i)
			{
					sum += testScores[i];
			}
			avg = sum / len;
			if (avg >= 90) return 'O';
			if (avg >= 80) return 'E';
			if (avg >= 70) return 'A';
			if (avg >= 55) return 'P';
			if (avg >= 40) return 'D';
			return 'T';			
		}
};

int main()
{
	string firstName;
	string lastName;
	int id;
	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
	vector<int> scores;
	for (int i = 0; i < numScores; ++i)
	{
		int tmpScore;
		cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << endl;
	return 0;
}