#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure student with the following members
struct student
{
    int ID;
    char firstName[30];
    char lastName[30];
    float GPA;
};

struct student* create_student(int ID, char firstName[], char lastName[], float GPA)
{
    struct student* newStudent = (struct student*)malloc( sizeof( struct student) );
    
        newStudent->ID = ID;
        strcpy(newStudent->firstName, firstName);
        strcpy(newStudent->lastName, lastName);
        newStudent->GPA = GPA;
   
    return newStudent;
}


void destroy_student( struct student* obj)
{
    if ( obj )
        free( obj );
}


void print_student ( struct student* obj)
{
int i;

     for(i = 0; i < rosterSize; ++i)
    {
        printf("Student ID#: ");
        scanf("%d" , &(rosterPtr+i)->ID);
    
        printf("Student First Name: ");
        scanf("%s" , (rosterPtr+i)->firstName);
    
        printf("Student Last Name : ");
        scanf("%s" , (rosterPtr+i)->lastName);
    
        printf("Student GPA: " );
        scanf("%f" , &(rosterPtr+i)->GPA);
        printf("\n");
    }
    
    if ( obj )
    {
        printf("student->ID = %d\n", obj->ID);
        printf("student->firstName = %s\n", obj->firstName);
        printf("student->lastName = %s\n", obj->lastName);
        printf("student->GPA = %f\n", obj->GPA);
    }
}


int main()
{
   /* struct student *rosterPtr;
    int i;
    int j;
    int t;*/
    int rosterSize;
    
    printf("Declare the amount of students: ");
    scanf("%d" , &rosterSize);
    printf("\n");
    
    struct student **newArray =(struct student**)malloc(rosterSize*sizeof(struct student*)); 
    
    print_student(rosterSize);
    
    
    
  
    
   
    
       /* printf("Student Roster Size: [%d]\n", rosterSize);
        printf("\n");
        printf("GPA\t ID\t First Name\t Last Name\n");*/
        
/*for (i = 0; i < rosterSize; ++i)
    {    
        for (j = i + 1; j < rosterSize; j++)
        {
           
           if ((rosterPtr+j)->GPA < (rosterPtr+i)->GPA)
            {
            Student t = (rosterPtr+i)
            (rosterPtr+i) = (rosterPtr+j);
            (rosterPtr+j) = t;
           
            }*/
            
       // }
        
       /* for (i = 0; i < rosterSize; i++)
        {
        printf("%.1f\t", (rosterPtr+i)->GPA);
    
        printf(" %d", (rosterPtr+i)->ID);
    
        printf("\t %s\t", (rosterPtr+i)->firstName);
    
        printf("\t%s  \n", (rosterPtr+i)->lastName);  
        
        }*/
    //}
    
    return 0;
    scanf("Nothing");
}