#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
enum Department {Physics, Engineering, Mathematics};

class CollegePerson
{
private:    
    int           cpID;
    string cpfirstName;
    string  cplastName;

public:
    CollegePerson();
    CollegePerson(int cpID, const string cpfirstName, const string cplastName);
    ~CollegePerson();
};

// Default STUDENT Constructor
CollegePerson::CollegePerson()
{
    cpID        = NULL;
    cpfirstName = "";
    cplastName  = "";

}

CollegePerson::CollegePerson(int cpID, const string cpfirstName, const string cplastName)
{
    this->cpID = cpID;
    this->cpfirstName = cpfirstName;
    this->cplastName = cplastName;
}    
    
CollegePerson::~CollegePerson()
{
    cout << "Destructor called: "<< endl;
   
     /*   // free memory
       delete[] cpfirstName;
   
    
   
        // free memory
        delete[] cplastName;*/
    
}
class Student: private CollegePerson
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
   
     /*   // free memory
       delete[] sfirstName;
   
    
   
        // free memory
        delete[] slastName;*/
    
}


class Professor : private CollegePerson
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
        
      /*  // free memory
       delete[] pfirstName;
   
    
   
        // free memory
        delete[] plastName;*/
    
}


class Employee : private CollegePerson
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
    
       /* // free memory
       delete[] efirstName;
   
    
   
        // free memory
        delete[] elastName;*/
    
    
}



int main()
{
    CollegePerson  *newStudent;
    CollegePerson* root = NULL;
    int                  j = 0;
    int                  n = 1;
    int             rosterSize;
    int                 userID;
    int               userMenu;
    int             menuSelect;
    string       userFirstname;
    string        userLastname;
    string          userDelete;
    float              userGPA;
    float           userSalary;
    bool           userTenured;
    
    
    /*do
    {
        printf("Enter student's ID#[%d]: ", n);
        scanf("%d", &userID);
        printf("Enter student's First Name[%d]: ", n);
        scanf("%s", &userFirstname);
        printf("Enter student's Last Name#[%d]: ", n);
        scanf("%s", &userLastname);
        printf("Enter student's GPA[%d]: ", n);
        scanf("%f", &userGPA);
        printf("\n");
        n = n + 1;
        
        newStudent = createStudent(userID, userFirstname, userLastname, userGPA);
        if ( newStudent )
            addStudent( newStudent );
            j++;
    }
        while ( j < rosterSize );*/
        
    
    
    printf("Make a selection\n");
    printf("1)List\n");
    printf("2)Add\n");
    printf("3)Remove\n");
    printf("4)Update\n");
    printf("5)Quit\n\n");
    
    scanf("%d", &userMenu);
    
    menuSelect = userMenu;
    
    switch (menuSelect)
    {
        case 1:
        {
          printf("\nID\tFirst Name\tLast Name\t GPA\n");
           ifstream bFileStream;
    
        bFileStream.open("Lab7.txt");
    
        char in = bFileStream.get();
    
    
        while (bFileStream.good())
        {
            cout << in;
            in = bFileStream.get();
        }
    
        bFileStream.close(); 
        return 0;
        }
        
        
        case 2:
        {
          printf("Enter ID#[%d]: ", n);
          scanf("%d", &userID);
          printf("Enter First Name[%d]: ", n);
          scanf("%s", &userFirstname);
          printf("Enter Last Name#[%d]: ", n);
          scanf("%s", &userLastname);
          printf("\n");
          n = n + 1;
          
          Student *Student0 = new Student();
          Student0->setsID(userID);
          Student0->setsfirstName(userFirstname);
          Student0->setslastName(userLastname);
          break;
        }
        
        case 3:
        {
        printf("Select the student to remove: \n");
        scanf("%s", userDelete);
      
        }
        
        case 4:
        {
        /*ofstream aFileStream("Lab7.txt");
    
   
        
        aFileStream << Student0->getsID() << endl;
        aFileStream << Student0->getsfirstName() << endl;
        aFileStream << Student0->getslastName() << endl;
        aFileStream << Student0->getsGPA() << endl;
    
    
    
        aFileStream << Professor0->getpID() << endl;
        aFileStream << Professor0->getpfirstName() << endl;
        aFileStream << Professor0->getplastName() << endl;
        aFileStream << Professor0->getpSalary() << endl;
        aFileStream << Professor0->getpTenured() << endl;
    
    
        aFileStream << Employee0->geteID() << endl;
        aFileStream << Employee0->getefirstName() << endl;
        aFileStream << Employee0->getelastName() << endl;
        aFileStream << Employee0->geteSalary() << endl;
    
    
   
        aFileStream.close();*/
        }
        
        case 5:
        {
            scanf("Nothing");
        }
        
    }
    

    
    
/*    
    delete Employee0;
    
    delete Professor0;
    
    delete Student0;*/
   
    
   
}