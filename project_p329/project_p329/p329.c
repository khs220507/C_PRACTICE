#include <stdio.h>

int main(void)
{
	int age;
	char name[20];
	
	printf("���� �Է� : ");
	scanf("%d", &age);

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);
	
	return 0;
}