#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
enum Department {Physics, Engineering, Mathematics};

class Student
{
private:
    
    int          sID;
    char *sfirstName;
    char  *slastName;
    float       sGPA;


public:
    Student();
    Student(int sID, const char *sfirstName, const char *slastName, float sGPA);
    Student(const char *sfirstName, const char *slastName);
    Student(Student &sinit);
    ~Student();
    
    // Get STUDENT function for ID
    int getsID()
    {
        return sID;
    }
    
    // Get STUDENT function for First Name
    const char *getsfirstName()
    {
        return sfirstName;
    }
    
    // Get STUDENT function for Last Name
    const char *getslastName()
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
    void setsfirstName(char* sfirstName)
    {
        int lensFirst = strlen(sfirstName) + 1;
        this->sfirstName = new char[lensFirst];
        strcpy(this->sfirstName, sfirstName);
    }
    
    // Set STUDENT function for last Name
    void setslastName(char* slastName)
    {
        int lensLast = strlen(slastName)  + 1;
        this->slastName = new char[lensLast];
        strcpy(this->slastName, slastName);  
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
    sfirstName = NULL;
    slastName  = NULL;
    sGPA       = NULL;
}

// STUDENT Constructor w 4 inputs
Student::Student(int sID, const char *sfirstName, const char *slastName, float sGPA)
{
    int lensFirst = strlen(sfirstName) + 1;
    int lensLast = strlen(slastName)  + 1;
    this->sID = sID;
    this->sGPA = sGPA;
    this->sfirstName = new char[lensFirst];
    this->slastName = new char[lensLast];
    strcpy(this->sfirstName, sfirstName);
    strcpy(this->slastName, slastName);
}

// STUDENT Constructo with only first and last name
Student::Student(const char *sfirstName, const char *slastName)
{
    int lensFirst = strlen(sfirstName) + 1;
    int lensLast = strlen(slastName)  + 1;
    this->sfirstName = new char[lensFirst];
    this->slastName = new char[lensLast];
    strcpy(this->sfirstName, sfirstName);
    strcpy(this->slastName, slastName);
}

// STUDENT Copy Constructor
Student::Student(Student &sinit)
{
    // set first name
    setsfirstName( sinit.sfirstName );
    {
        int lensFirst = strlen(sfirstName) + 1;
        sfirstName = new char[lensFirst];
        sfirstName = sinit.sfirstName;
    }
    
    // set last name
    setslastName( sinit.slastName );
    {
        // allocate and copy string
        int lensLast = strlen(slastName) + 1;
        slastName = new char[lensLast];
        slastName = sinit.slastName;
    }
    
    sID = sinit.sID;
    sGPA = sinit.sGPA;
    
}

// STUDENT Destructor
Student::~Student()
{
    cout << "Destructor called: "<< endl;
    if( sfirstName )
    {
        // free memory
        free(sfirstName);
    }
    
    if( slastName )
    {
        // free memory
        free( slastName );
    }
    
}


class Professor
{
private:
    
    int          pID;
    char *pfirstName;
    char  *plastName;
    float    pSalary;
    bool    pTenured;
//Department department;


public:
    Professor();
    Professor(int pID, const char *pfirstName, const char *plastName, float pSalary, bool pTenured);
    Professor(const char *pfirstName, const char *plastName);
    Professor(Professor &pinit);
    ~Professor();
    
    // Get function for ID
    int getpID()
    {
        return pID;
    }
    
    // Get function for First Name
    const char *getpfirstName()
    {
        return pfirstName;
    }
    
    // Get function for Last Name
    const char *getplastName()
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
    void setpfirstName(char* pfirstName)
    {
        int lenpFirst = strlen(pfirstName) + 1;
        this->pfirstName = new char[lenpFirst];
        strcpy(this->pfirstName, pfirstName);
    }
    
    // Set function for last Name
    void setplastName(char* plastName)
    {
        int lenpLast = strlen(plastName)  + 1;
        this->plastName = new char[lenpLast];
        strcpy(this->plastName, plastName);  
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
    pfirstName = NULL;
    plastName  = NULL;
    pSalary    = NULL;
    pTenured   = NULL;
}


Professor::Professor(int pID, const char *pfirstName, const char *plastName, float pSalary, bool pTenured)
{
    this->pID = pID;
    int lenpFirst = strlen(pfirstName) + 1;
    int lenpLast = strlen(plastName)  + 1;
    this->pfirstName = new char[lenpFirst];
    this->plastName = new char[lenpLast];
    strcpy(this->pfirstName, pfirstName);
    strcpy(this->plastName, plastName);
    this->pSalary = pSalary;
    this->pTenured = pTenured;
    
}

Professor::Professor(const char *pfirstName, const char *plastName)
{
    int lenpFirst = strlen(pfirstName) + 1;
    int lenpLast = strlen(plastName)  + 1;
    this->pfirstName = new char[lenpFirst];
    this->plastName = new char[lenpLast];
    strcpy(this->pfirstName, pfirstName);
    strcpy(this->plastName, plastName);
}

// Copy Constructor
Professor::Professor(Professor &pinit)
{
    // set first name
    setpfirstName( pinit.pfirstName );
    {
        int lenpFirst = strlen(pfirstName) + 1;
        pfirstName = new char[lenpFirst];
        pfirstName = pinit.pfirstName;
    }
    
    // set last name
    setplastName( pinit.plastName );
    {
        // allocate and copy string
        int lenpLast = strlen(plastName) + 1;
        plastName = new char[lenpLast];
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
    if( pfirstName )
    {
        // free memory
        free(pfirstName);
    }
    
    if( plastName )
    {
        // free memory
        free( plastName );
    }
    
}


class Employee
{
private:
    
    int          eID;
    char *efirstName;
    char  *elastName;
    float    eSalary;
    
public:
    Employee();
    Employee(int eID, const char*efirstName, const char *elastName, float eSalary);
    Employee(const char *efirstName, const char *elastName);
    Employee(Employee &einit);
    ~Employee();
    
    // Get function for Employee ID
    int geteID()
    {
        return eID;
    }
    
    // Get function for Employee First Name
    const char *getefirstName()
    {
        return efirstName;
    }
    
    const char *getelastName()
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
    void setefirstName(char* efirstName)
    {
        int leneFirst = strlen(efirstName) + 1;
        this->efirstName = new char[leneFirst];
        strcpy(this->efirstName, efirstName);
    }
    
    // Set Employee Last Name
    void setelastName(char* elastName)
    {
        int leneLast = strlen(elastName) + 1;
        this->elastName = new char[leneLast];
        strcpy(this->elastName, elastName);
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
    efirstName = NULL;
    elastName  = NULL;
    eSalary    = NULL;
}


Employee::Employee(int eID, const char *efirstName, const char *elastName, float eSalary)
{
    this->eID = eID;
    int leneFirst = strlen(efirstName) + 1;
    int leneLast = strlen(elastName)  + 1;
    this->efirstName = new char[leneFirst];
    this->elastName = new char[leneLast];
    strcpy(this->efirstName, efirstName);
    strcpy(this->elastName, elastName);
    this->eSalary = eSalary;
    
}

Employee::Employee(const char *efirstName, const char *elastName)
{
    int leneFirst = strlen(efirstName) + 1;
    int leneLast = strlen(elastName)  + 1;
    this->efirstName = new char[leneFirst];
    this->elastName = new char[leneLast];
    strcpy(this->efirstName, efirstName);
    strcpy(this->elastName, elastName);
}

// Copy Constructor
Employee::Employee(Employee &einit)
{
    // set first name
    setefirstName( einit.efirstName );
    {
        int leneFirst = strlen(efirstName) + 1;
        efirstName = new char[leneFirst];
        efirstName = einit.efirstName;
    }
    
    // set last name
    setelastName( einit.elastName );
    {
        // allocate and copy string
        int leneLast = strlen(elastName) + 1;
        elastName = new char[leneLast];
        elastName = einit.elastName;
    }
    
    eID = einit.eID;
    eSalary = einit.eSalary;
    
}

// Destructor
Employee::~Employee()
{
    cout << "Destructor called: "<< endl;
    if( efirstName )
    {
        // free memory
        free(efirstName);
    }
    
    if( elastName )
    {
        // free memory
        free( elastName );
    }
    
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