#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#define BUFFER_SIZE 20
#define PSWD_SIZE 8
#define QUESTION_BUFFER_SIZE 200
#define EXIT 0
#define ADMIN 1
#define COORDINATOR 2
#define CONTESTANT 3
#define MANAGE_COORDINATOR 1
#define MANAGE_CONTESTANT 2
#define LOGOUT 3
#define EXIT 4
//Declaration of LL
typedef struct admin_data
{
	char user_name[BUFFER_SIZE];
	char pswd[BUFFER_SIZE];	
	struct admin_data *next ;
}admin_data;

//Declaring functions for admin
void design();
void admin();
void admin();
admin_data read_admin_file(admin_data);
coordinator *new_coordinator();
void save_coordinator_data_into_file(coordinator*);
coordinator *create_list_for_cordinator(coordinator*,coordinator);
coordinator data_extraction_from_cordinator_file(char* , coordinator);
coordinator *update_coordinator(char*,coordinator*);
void adding_new_coordinator_to_file();
coordinator *delete_coordinator(char*,coordinator*);
void display_coordinator();
void delete_contestant();
contestant *delete_contestant(contestant *,char *);
void view_contestant();

//Validations functions
int integer_validation(char *);
int alpha_validator(char *);
int password_validation(char *);
int phone_validation(char *);
int email_validation(char *);
int ans(int);
int int_ans_choice(int,int);
