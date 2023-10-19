#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Person{
protected:
	string firstName;
	string lastName;
	int id;

public:
	Person(string firstName, string lastName, int identification){
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson(){
		cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
	}
	
};

class Student : public Person{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int identification, vector<int> &scores):Person(firstName, lastName, identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
        this->testScores = scores;
    }

    char calculate(){
        vector<int>::iterator it;
        int average = 0;
        for(it = testScores.begin(); it<testScores.end(); it++){
            average += *it;
        }

        average = average / testScores.size();

        if(average >= 90)
            return ('O');
        else if (average >= 80 && average < 90)
            return ('E');
        else if(average >= 70 && average < 80)
            return ('A');
        else if(average >= 55 && average < 70)
            return ('P');
        else if(average >= 40 && average < 55)
            return ('D');
        else 
            return ('T');
    }
};

int main(){
    
    string fn, ln;
    int id, scores;

    cin >> fn;
    cin >> ln;
    cin >> id;
    cin >> scores;

    vector<int> vet;
    for(; scores > 0; scores--){
        int scor;
        cin >> scor;
        vet.push_back(scor);
    }
    Student s(fn, ln, id, vet);
    s.printPerson();
    cout << "Grade: " << s.calculate() << endl;  

return 0;
}