//client file
#include<stdio.h>
#include<string.h>
#include"admin.h"
#include"contestant.h"
#include"coordinator.h"
int main()
{		
	design();
	printf("WELCOME TO Quiz Game\n");
	printf("\nPress any key to continue\n");
	getchar();
	design();
	main_menu();	
}
