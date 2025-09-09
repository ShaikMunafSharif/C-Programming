#include <stdio.h>
struct student {
	int rollno;
	char name[20];
	float marks;
};
int main() {
	struct student s[3];
	for(int i=0;i<3;i++) {
		scanf("%d %s %f",&s[1].rollno,&s[1].name,&s[1].marks);
	}
}
