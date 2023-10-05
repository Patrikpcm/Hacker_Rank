#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> new_grades;
    vector<int>::iterator it;

    for(it=grades.begin(); it<grades.end(); it++){
        if(*it>=38){
            int n = *it;
            while((n%5) != 0){
                n++;
            }
            if( (n - (*it)) <= 2 )
                new_grades.push_back(n);
            else
                new_grades.push_back(*it);
        }
        else
            new_grades.push_back(*it);
    }
    return (new_grades);

}

int main(){
    vector<int> grades, new_grades;
    grades.push_back(73);
    grades.push_back(67);
    grades.push_back(38);
    grades.push_back(33);

    new_grades=gradingStudents(grades);
    
    vector<int>::iterator it;
    for(it = new_grades.begin(); it<new_grades.end(); it++)
        cout << *it << endl;
    

return 0;
}
