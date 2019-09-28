#include <stdio.h>

#include <string.h>



void enterGrade(char *id, int entered_grade)

{

	int grade = entered_grade;
    
	char stdID[10];
    
	strcpy(stdID, id);
    
	printf("The grade of student %s is = %d", stdID, grade);

}



int main()

{
    
	enterGrade("120141455", 89);

    
	// when length of input are increased, the attack will be occured
	return 0;

}
