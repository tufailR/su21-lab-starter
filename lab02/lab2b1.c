#include<stdio.h>


     struct Student {
          
	     char Name[50];
             int age;
             int ID;
     };
   int main(){
	   struct Student student;
	   
        printf("Enter student Name:  " );
	scanf("%s",student.Name );
	

	printf("Enter student's ID: ");
	scanf("%d",&student.ID);
	
	
	printf("Enter student's age: ");
	scanf("%d",&student.age );

	printf("\n Student's Information:\n");
	printf("Name: %s\n",student.Name);
	printf("ID: %d\n",student.ID);
	printf("age: %d\n",student.age);
	return 0;
 } 
