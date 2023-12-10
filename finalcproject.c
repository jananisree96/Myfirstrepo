//Employee details management 
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[50];
	int age;
	char position[50];
	char gender[20];
}e[200];
int empcount=0;
void input()
{
	int i;
	if(empcount<100)
	{
		printf("Enter employee id:");
		scanf("%d",&e[empcount].id);
		printf("Enter employee name:");
		scanf("%s",e[empcount].name);
		printf("Enter employee Age:");
		scanf("%d",&e[empcount].age);
		printf("Enter employee position:");
		scanf("%s",e[empcount].position);
		printf("Enter employee gender(M/F):");
		scanf("%s",e[empcount].gender);
		empcount++;
		printf("Employee details added successfully!\n");
	}
	else
	{
		printf("Maximum employee records reached");
	}
}
//print:
void printallemployees()
{
	int i;
	for(i=0;i<empcount;i++)
	{
		printf("Employee%d\n",i+1);
		printf("ID:%d\n",e[i].id);
		printf("Name:%s\n",e[i].name);
		printf("Age:%d\n",e[i].age);
		printf("Position:%s\n",e[i].position);
		printf("Gender:%s\n",e[i].gender);
	}
}
//age:
void printemployeebyage(int targetage)
{
	int i;
	for(i=0;i<empcount;i++)
	{
		if(e[i].age==targetage)
		{
			printf("Employee with age:%d\n",targetage);
			printf("ID:%d\n",e[i].id);
			printf("Name:%s\n",e[i].name);
			printf("Position:%s\n",e[i].position);
			printf("Gender:%s\n",e[i].gender);
		}
	}
}
//gender:
void printemployeesbygender(char *targetgender)
{
	int i,j;
	for(i=0;i<empcount;i++)
	{
		j=strcmp(e[i].gender,targetgender);
		if(j==0)
		{
			printf("employee with gender%s:\n",targetgender);
			printf("ID:%d\n",e[i].id);
			printf("Name:%s\n",e[i].name);
			printf("Age:%d\n",e[i].age);
			printf("Position:%s\n",e[i].position);
		}
	}
}
int main()
{
	int choice,ch,targetage;
	char targetgender[40];
	do
	{
		printf("\n employee details Management Menu:\n");
		printf("1.Insert Employee Details\n");
		printf("2.Print All Employee Details\n");
		printf("3.Print Employee by age\n");
		printf("4.Print Employee by gender\n");
		printf("5.Exit\n");
		printf("Enter your choice(1-5):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				input();
				break;
			case 2:
				printallemployees();
				break;
			case 3:
				printf("Enter the age to search for:");
				scanf("%d",&targetage);
				printemployeebyage(targetage);
				break;
			case 4:
				printf("Enter the gender to search for (M/F):");
				scanf("%s",targetgender);
				printemployeesbygender(targetgender);
				break;
			case 5:
				printf("Exiting the program\n");
				break;
			default:
				printf("Invalid choice.Please select a valid option(1-5)\n");
		}
		printf("Do you want continue?\n");
		printf("If YES select:1,if NO select:2\n If you want Exit select:0\n");
		scanf("%d",&ch);
	}
		while(ch!=0);
		printf("Thank you for using our Application:)");
		return 0;
	}
