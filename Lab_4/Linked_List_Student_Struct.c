#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student
{
    int     ID;
    char    firstName[30];
    char    lastName[30];
    float   GPA;
    struct  Student *next;
} Student;


Student* firstStudent = NULL;


Student* createStudent(int ID, char firstName[], char lastName[], float GPA)
{
    Student*   newStudent = NULL;
    
    // Create new student
    newStudent = (Student *) malloc( sizeof(Student) );
    
    if( newStudent != NULL)
    {
        newStudent->ID = ID;
        strcpy(newStudent->firstName, firstName);
        strcpy(newStudent->lastName, lastName);
        newStudent->GPA = GPA;
        newStudent->next = NULL;
    }
    
    return newStudent;
}


// Add a Node to the end of the list
void addStudent(Student* newStudent)
{
    Student* currentStudent = firstStudent;
    
    // Check for empty list
    if( firstStudent == NULL )
    {
        firstStudent = newStudent;
        return;
    }
    
    // Loop to end of list
    while( currentStudent->next != NULL )
        currentStudent = currentStudent->next;
        
    // Add new node to end
    currentStudent->next = newStudent;
}


// Insert a node into the list
void insertStudent(Student* afterStudent, Student* newStudent)
{
    // Update the newNode next
    newStudent->next = afterStudent->next;
    
    // Update afterNode next
    afterStudent->next = newStudent;
}


// Delete a node from the list
void deleteStudent(Student* deleteStudent)
{
    Student* currentStudent = firstStudent;
    Student* prevStudent;
    
    // Check if node is the head
    if( firstStudent == deleteStudent )
    {
        firstStudent = firstStudent->next;
        free( deleteStudent );
        return;
    }
    
    // Find the node to delete
    while( currentStudent != NULL && currentStudent != deleteStudent )
    {
        prevStudent = currentStudent;
    }
    
    // If node found, unlink it
    if( currentStudent != NULL )
    {
        prevStudent->next = currentStudent->next;
    }
    
    free( deleteStudent );
}

void printStudents()
{
    Student*   student = firstStudent;
    
    
    while( student!= NULL )
    {
        printf("%d\t", student->ID );
        printf("   %s\t", student->firstName );
        printf("\t%s\t", student->lastName );
        printf("%f\t\n", student->GPA );
        student = student->next;
    }
}

int main()
{
    Student    *newStudent;
    int              j = 0;
    int              n = 1;
    int         rosterSize;
    int             userID;
    char userFirstname[30];
    char  userLastname[30];
    float          userGPA;
    
    printf("Declare the amount of students: \n");
    scanf("%d" , &rosterSize);
    printf("\n");
    
    
    do
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
        
        newStudent = createStudent(userID, userFirstname, userLastname, userGPA);
        if ( newStudent )
            addStudent( newStudent );
            j++;
    }
        while ( j < rosterSize );
    

    
   
        
    printf("ID\tFirst Name\tLast Name\t GPA\t\n");
    printStudents();
    printf("\n");
    
  /*  
        
    printf("After insterNode\n");
    printNodes();
    printf("\n");
    
    deleteStudent(firstStudent);
    
    printf("After deleteNode\n");
    printNodes();
    printf("\n");*/
    

    
    
    return 0;
}