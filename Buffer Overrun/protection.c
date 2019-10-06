#include <stdio.h>

#include <string.h>



void enterGrade(char *id, int entered_grade)

{
    
	if(strlen(id) == 9){
      // protection by checking input length
		int grade = entered_grade;
      
		char stdID[10];
      
		strcpy(stdID, id);
      
		printf("The grade of student %s is = %d", stdID, grade);
    
	}
    
	else {
      
		printf("The student' ID taller than allowed length");
    
	}

}



int main()
{
    
	enterGrade("120141721", 89);

    
	return 0;

}
