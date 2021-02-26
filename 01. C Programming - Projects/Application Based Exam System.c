#include <stdio.h>
#include<string.h>

// Application Base Instant Mcq Exam System.


struct StudentData //structure Declare
{

char Own_name[100];
char fname[100];
char Father_name[100];
char Mother_name[100];         // Element Of Structer
char Address[100];
float gpassc;
float gpahsc;
char Major[100];
int Subject;
int Score;
int contact;

};

void Information (struct StudentData Student); // Function Prototype

void main () // Main Body
{
    struct StudentData Student;


    printf("\n\t******* Welcome TO Online Admission Test ********\n\n\n\n");

    printf("\n If You Want To Participant On Examination Please Fill The Following Things Showing Below (It's Mendatory)\n\n\n");



Information(Student); // Function Call


printf("\n\n\n\tWe Recored Your Information");

}

// This function Work For Get Student Information******

void Information (struct StudentData Student) // Function Body
{
// Student Information
printf("\n Applicant Full Name: ");
gets(&Student.Own_name);
printf(" Enter Father name: ");
gets(Student.Father_name);
printf(" Enter Mother name: ");
gets(Student.Mother_name);
printf(" Enter Your Full Address: ");          // Input Information
gets(Student.Address);
printf(" Enter Contact Number: ");
scanf("%d",&Student.contact);
printf(" Enter GPA In HSC (A - Levels): ");
scanf("%f",&Student.gpahsc);

if(Student.gpahsc<4)
    {
     printf("Your Are NOt Eligible To Participate\nYou Have Atleast GPA 4 In HSc");
    }
else if(Student.gpahsc>5)
    {
   printf("Invalid GPA Score");
    }

else                                                        // Cheack Eligibility
    {

     printf(" Enter GPA In SSC (O - Levels): ");
scanf("%f",&Student.gpassc);
if(Student.gpahsc<4)
   printf("Your Are NOt Eligible To Participate\nYou Have Atleast GPA 4 In HSc");
if(Student.gpahsc>5)
   printf("Invalid GPA Score");