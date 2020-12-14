#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("Reading the data files...\nRead done! 10 schedules are read\n");
	
	printf("1. printf all the schedules\n");
	
	printf("2. search for schedules in the month\n");
	
	printf("3. search for schedules in the place\n");
	
	printf("4. search for specific type schedule\n");
	
	printf("5. exit\n");
	
	printf("select an option:\n");
	scanf("%d", &i);
	
	return 0;
}
