#include <iostream>
#include <string.h>
using namespace std;
enum Department {Physics, Engineering, Mathematics}

class Student
{
private:
    
    int          ID;
    char *firstName;
    char  *lastName;
    float       GPA;


public:
    Student();
    Student(int ID, const char *firstName, const char *lastName, float GPA);
    Student(const char *firstName, const char *lastName);
    Student(Student &init);
    ~Student();
    
    // Get function for ID
    int getID()
    {
        return ID;
    }
    
    // Get function for First Name
    const char *getfirstName()
    {
        return firstName;
    }
    
    // Get function for Last Name
    const char *getlastName()
    {
        return lastName;
    }
    
    // Get function for GPA
    float getGPA()
    {
        return GPA;
    }
    
    // Set funtion for ID
    void setID(int I)
    {
       ID = I;
    }
    
    // Set function for first Name
    void setfirstName(char* firstName)
    {
        int len1 = strlen(firstName) + 1;
        this->firstName = new char[len1];
        strcpy(this->firstName, firstName);
    }
    
    // Set function for last Name
    void setlastName(char* lastName)
    {
        int len2 = strlen(lastName)  + 1;
        this->lastName = new char[len2];
        strcpy(this->lastName, lastName);  
    }
    
    // Set function for GPA
    void setGPA(float G)
    {
        GPA = G;
    }
    
};

// Default Constructor
Student::Student()
{
    ID        = NULL;
    firstName = NULL;
    lastName  = NULL;
    GPA       = NULL;
}


Student::Student(int ID, const char *firstName, const char *lastName, float GPA)
{
    int len1 = strlen(firstName) + 1;
    int len2 = strlen(lastName)  + 1;
    this->ID = ID;
    this->GPA = GPA;
    this->firstName = new char[len1];
    this->lastName = new char[len2];
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
}

Student::Student(const char *firstName, const char *lastName)
{
    int len1 = strlen(firstName) + 1;
    int len2 = strlen(lastName)  + 1;
    this->firstName = new char[len1];
    this->lastName = new char[len2];
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
}

// Copy Constructor
Student::Student(Student &init)
{
    // set first name
    setfirstName( init.firstName );
    {
        int len1 = strlen(firstName) + 1;
        firstName = new char[len1];
        firstName = init.firstName;
    }
    
    // set last name
    setlastName( init.lastName );
    {
        // allocate and copy string
        int len2 = strlen(lastName) + 1;
        lastName = new char[len2];
        lastName = init.lastName;
    }
    
    ID = init.ID;
    GPA = init.GPA;
    
}

// Destructor
Student::~Student()
{
    cout << "Destructor called: "<< endl;
    if( firstName )
    {
        // free memory
        free(firstName);
    }
    
    if( lastName )
    {
        // free memory
        free( lastName );
    }
    
}

int main()
{
    Student *Student0 = new Student();
    cout << "Student 0 ID: "  <<  Student0->getID() << endl;
    cout << "Student 0 GPA: " <<  Student0->getGPA() << endl;
    Student0->setID(242);
    Student0->setGPA(3.2);
    Student0->setfirstName("Foo");
    Student0->setlastName("Bar");
    cout << "Student 0 First Name: " << Student0->getfirstName() << endl;
    cout << "Student 0 Last Name: "  << Student0->getlastName() << endl; 
    
    Student *Student1 = Student0;
    
    Student *Student2 = new Student(242, "Enrique", "Rodriguez", 3.2);
    
    
    delete Student2;
    delete Student1;
    delete Student0;
    
 
}