#include<stdio.h>
int main(void) {
	char fname[60];
	char lname[60];
	int age = NULL;
	int actype = NULL;//1->creditcard,2->saving

	printf_s("What is your firstname?\n");
	scanf("%59s", &fname);
	printf_s("What is your lastname?\n");
	scanf("%59s", &lname);
	printf_s("Thank you %s %s \n", fname, lname);

	printf_s("How old are you?\n");
	scanf("%d", &age);
	if (age >= 18) {//credit
		actype = 1;
		printf_s("We can open a credit card account for you. Would you like to proceed?\n");
	} else {//saving
		actype = 2;
		printf_s("We can open a credit card account for you. Would you like to proceed?\n");
	}
	switch (actype)
	{
		case 1:
			printf_s("credit\n");
			break;
		case 2:
			printf_s("saving\n");
			break;
		default:
			break;
	}
	return 0;
}