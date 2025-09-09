#include <stdio.h>
struct student {
	int rollno;
	char name[10];
	float marks;
}; 
int main() {
	struct student s1,s2,s3 = {1,"Munaf",90};
	struct student *ptr = &s1;
	printf("Enter info for s2: ");
	scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);
	printf("Info for s1");
	printf("\n %d %s %f",s1.rollno,s1.name,s1.marks);
	printf("\nInfo for s2");
	printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
	printf("\nInfo for s3");
	printf("\n %d %s %f",s3.rollno,s3.name,s3.marks);
	return 0;
}
