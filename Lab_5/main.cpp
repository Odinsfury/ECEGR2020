#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int ID;
    char *firstName;
    char *lastName;
    float GPA;


public:
    Student();
    Student(int ID, char firstName, char lastName, float GPA);
    Student(char *studentStr);
    Student(Student &init);
};

Student::Student()
{
    // Set to Current Student
}

Student::Student(int ID, char firstName, char lastName, float GPA)
{
    this->ID = ID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->GPA = GPA;
    
}

Student::Student(Student &init)
{
    // Copy Constructor
    ID = init.ID;
    firstName = init.firstName;
    lastName = init.lastName;
    GPA = init.GPA;
}

int main()
{
    //Student     prevStudent, currentStudent, nextStudent;
    
    Student currentStudent(424, 'Enrique', 'Rodriguez', 3.2);
    
}




void Student::getID(int ID)
{
    return ID;
}

void Student::getfirstName(char* firstName)
{
    return firstName;
}

void Student::getlastName(char* lastName)
{
    return lastName;
}

void Student::getGPA(float GPA)
{
    return GPA;
}
    
    
    
void Student::setID(int ID)
{
    this->ID = ID;
    
}

void Student::setfirstName(char* firstName)
{
    int len1 = strlen(firstName) + 1;
    this->firstName = new char[len1];
    strcpy(this->firstName, firstName);
}

void Student::setlastName(char* lastName)
{
    
    int len2 = strlen(lastName) + 1;
    this->lastName = new char[len2];
    strcpy(this->lastName, lastName);
}

void Student::setGPA(float GPA)
{
    this->GPA = GPA;
}

