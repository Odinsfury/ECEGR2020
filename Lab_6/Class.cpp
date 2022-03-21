#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
enum Department {Physics, Engineering, Mathematics};

class Student
{
private:
    
    int           sID;
    string sfirstName;
    string  slastName;
    float        sGPA;


public:
    Student();
    Student(int sID, const string sfirstName, const string slastName, float sGPA);
    Student(const string sfirstName, const string slastName);
    Student(Student &sinit);
    ~Student();
    
    // Get STUDENT function for ID
    int getsID()
    {
        return sID;
    }
    
    // Get STUDENT function for First Name
    const string getsfirstName()
    {
        return sfirstName;
    }
    
    // Get STUDENT function for Last Name
    const string getslastName()
    {
        return slastName;
    }
    
    // Get STUDENT function for GPA
    float getsGPA()
    {
        return sGPA;
    }
    
    // Set STUDENT funtion for ID
    void setsID(int sI)
    {
       sID = sI;
    }
    
    // Set STUDENT function for first Name
    void setsfirstName(string sfirstName)
    {
        this->sfirstName = sfirstName;
    }
    
    // Set STUDENT function for last Name
    void setslastName(string slastName)
    {
        this->slastName = slastName;  
    }
    
    // Set STUDENT function for GPA
    void setsGPA(float sG)
    {
        sGPA = sG;
    }
    
    /*void writeStudent()
    {
        
    aFileStream << "ID" << sID() << endl;
    aFileStream << "First" << sfirstName() << endl;
    aFileStream << "Last" << slastName() << endl;
    aFileStream << "GPA" << sGPA() << endl;
    
    }*/
};

// Default STUDENT Constructor
Student::Student()
{
    sID        = NULL;
    sfirstName = "";
    slastName  = "";
    sGPA       = NULL;
}

// STUDENT Constructor w 4 inputs
Student::Student(int sID, const string sfirstName, const string slastName, float sGPA)
{
    this->sID = sID;
    this->sGPA = sGPA;
    this->sfirstName = sfirstName;
    this->slastName = slastName;
}

// STUDENT Constructo with only first and last name
Student::Student(const string sfirstName, const string slastName)
{
    this->sfirstName = sfirstName;
    this->slastName = slastName;
}

// STUDENT Copy Constructor
Student::Student(Student &sinit)
{
    // set first name
    setsfirstName( sinit.sfirstName );
    {
        sfirstName = sinit.sfirstName;
    }
    
    // set last name
    setslastName( sinit.slastName );
    {
        slastName = sinit.slastName;
    }
    
    sID = sinit.sID;
    sGPA = sinit.sGPA;
    
}

// STUDENT Destructor
Student::~Student()
{
    cout << "Destructor called: "<< endl;
   /* if( sfirstName )
    {
        // free memory
        free(sfirstName);
    }
    
    if( slastName )
    {
        // free memory
        free( slastName );
    }*/
    
}


class Professor
{
private:
    
    int          pID;
    string pfirstName;
    string plastName;
    float    pSalary;
    bool    pTenured;
//Department department;


public:
    Professor();
    Professor(int pID, const string pfirstName, const string plastName, float pSalary, bool pTenured);
    Professor(const string pfirstName, const string plastName);
    Professor(Professor &pinit);
    ~Professor();
    
    // Get function for ID
    int getpID()
    {
        return pID;
    }
    
    // Get function for First Name
    const string getpfirstName()
    {
        return pfirstName;
    }
    
    // Get function for Last Name
    const string getplastName()
    {
        return plastName;
    }
    
    // Get function for salary
    float getpSalary()
    {
        return pSalary;
    }
    
    // Get function for Tenured
    bool getpTenured()
    {
        return pTenured;
    }
    
    
    // Set funtion for ID
    void setpID(int pI)
    {
       pID = pI;
    }
    
    // Set function for first Name
    void setpfirstName(string pfirstName)
    {
        this->pfirstName = pfirstName;
    }
    
    // Set function for last Name
    void setplastName(string plastName)
    {
        this->plastName = plastName;  
    }
    
    // Set function for Salary
    void setpSalary(float pS)
    {
        pSalary = pS;
    }
    
    // Set funtion for ID
    bool setpTenured(int pT)
    {
       pTenured = pT;
    }
    
    /*void serializeProfessor()
    {
    aFileStream << "ID" << Student0->getsID() << endl;
    aFileStream << "First" << Student0->getsfirstName() << endl;
    aFileStream << "Last" << Student0->getslastName() << endl;
    aFileStream << "GPA" << Student0->getsGPA() << endl;
    }*/
    
};

    
// Default Constructor
Professor::Professor()
{
    pID        = NULL;
    pfirstName = "";
    plastName  = "";
    pSalary    = NULL;
    pTenured   = NULL;
}


Professor::Professor(int pID, const string pfirstName, const string plastName, float pSalary, bool pTenured)
{
    this->pID = pID;
    this->pfirstName = pfirstName;
    this->plastName = plastName;
    this->pSalary = pSalary;
    this->pTenured = pTenured;
    
}

Professor::Professor(const string pfirstName, const string plastName)
{
   
    this->pfirstName = pfirstName;
    this->plastName = plastName;
}

// Copy Constructor
Professor::Professor(Professor &pinit)
{
    // set first name
    setpfirstName( pinit.pfirstName );
    {
        pfirstName = pinit.pfirstName;
    }
    
    // set last name
    setplastName( pinit.plastName );
    {
        // allocate and copy string
        plastName = pinit.plastName;
    }
    
    pID = pinit.pID;
    pSalary = pinit.pSalary;
    pTenured = pinit.pTenured;
    
}

// Destructor
Professor::~Professor()
{
    cout << "Destructor called: "<< endl;
    /*if( pfirstName )
    {
        // free memory
        free(pfirstName);
    }
    
    if( plastName )
    {
        // free memory
        free( plastName );
    }*/
    
}


class Employee
{
private:
    
    int          eID;
    string efirstName;
    string elastName;
    float    eSalary;
    
public:
    Employee();
    Employee(int eID, const string efirstName, const string elastName, float eSalary);
    Employee(const string efirstName, const string elastName);
    Employee(Employee &einit);
    ~Employee();
    
    // Get function for Employee ID
    int geteID()
    {
        return eID;
    }
    
    // Get function for Employee First Name
    const string getefirstName()
    {
        return efirstName;
    }
    
    const string getelastName()
    {
        return elastName;
    }
    
    // Get function for Employee Salary
    float geteSalary()
    {
        return eSalary;
    }
    
    // Set Employee ID
    void seteID(int eI)
    {
        eID = eI;
    }
    
    // Set Employee First Name
    void setefirstName(string efirstName)
    {
        this->efirstName = efirstName;
    }
    
    // Set Employee Last Name
    void setelastName(string elastName)
    {
        this->elastName = elastName;
    }
    
    
    // Set function for Employee Salary
    void seteSalary(float eS)
    {
        eSalary = eS;
    }
    
    /*void serializeStudent()
    {
    aFileStream << "ID" << Student0->getsID() << endl;
    aFileStream << "First" << Student0->getsfirstName() << endl;
    aFileStream << "Last" << Student0->getslastName() << endl;
    aFileStream << "GPA" << Student0->getsGPA() << endl;
    }*/
};    
    
    
    // Default Constructor
Employee::Employee()
{
    eID        = NULL;
    efirstName = "";
    elastName  = "";
    eSalary    = NULL;
}


Employee::Employee(int eID, const string efirstName, const string elastName, float eSalary)
{
    this->eID = eID;
    this->efirstName = efirstName;
    this->elastName = elastName;
    this->eSalary = eSalary;
    
}

Employee::Employee(const string efirstName, const string elastName)
{
    this->efirstName = efirstName;
    this->elastName = elastName;
}

// Copy Constructor
Employee::Employee(Employee &einit)
{
    // set first name
    setefirstName( einit.efirstName );
    {
        efirstName = einit.efirstName;
    }
    
    // set last name
    setelastName( einit.elastName );
    {
        elastName = einit.elastName;
    }
    
    eID = einit.eID;
    eSalary = einit.eSalary;
    
}

// Destructor
Employee::~Employee()
{
    cout << "Destructor called: "<< endl;
    /*if( efirstName )
    {
        // free memory
        free(efirstName);
    }
    
    if( elastName )
    {
        // free memory
        free( elastName );
    }*/
    
}



int main()
{
   
   
    ifstream bFileStream;
    
    bFileStream.open("studentData.txt");
    
    char in = bFileStream.get();
    
    
    while (bFileStream.good())
    {
        cout << in;
        in = bFileStream.get();
    }
    
    bFileStream.close();

    
    /*ifstream bFileStream;
    
    bFileStream.open("studentData.txt");
    char in = bFileStream.get();
    
    char *saveMe;
    Student *Student0 = new Student();
    
    while (bFileStream.good())
    {
        saveMe += in;
        
        if (in == '\n') 
        {
            Student0->setsID(stoi( saveMe ) );
        }
         cout << saveMe << endl;
        in = bFileStream.get();
    }
    
    bFileStream.close();
    
    cout << "stuff" << endl;
    cin .get();*/
    
   
}