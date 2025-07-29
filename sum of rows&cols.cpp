#include <stdio.h>
int main() {
	int a[3][3],i,j,rows,cols;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++) {
		rows=cols=0;
		for(j=0;j<3;j++) {
			rows=rows+a[i][j];
			cols=cols+a[j][i];
		}
		printf("Sum of rows = %d\n",rows);
		printf("Sum of cols = %d",cols);
	}
	return 0;
	
}
