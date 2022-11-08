#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

FILE* fp;
char str[30];
fp = fopen("C:\sample.txt", "w");
	
printf("input a word:");
scanf("%s", &str);
fprintf(fp, "%s\n", str);

printf("input a word:");
scanf("%s", &str);
fprintf(fp, "%s\n", str);

printf("input a word:");
scanf("%s", &str);
fprintf(fp, "%s\n", str);


fclose(fp);
}

