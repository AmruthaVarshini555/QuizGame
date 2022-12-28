#include<stdio.h>

//Declaration of macros
#define BUFFER_SIZE 20
#define PSWD_SIZE 8
#define QUESTION_BUFFER_SIZE 200
#define EXIT 0
#define ADMIN 1
#define COORDINATOR 2
#define CONTESTANT 3
#define MANAGE_COORDINATOR 1
#define MANAGE_CONTESTANT 2
#define CREATE 1
#define UPDATE 2
#define DELETE 3
#define DISPLAY 4
#define PREVIOUS 5
#define DELETE_CONTESTANT 1
#define VIEW_CONTESTANT 2
#define LOGOUT 3
#define UPDATE_COORD 1
#define NEW_QUIZ 2
#define UPDATE_QUIZ 3
#define DELETE_QUIZ 4
#define DISPLAY_QUIZ 5

typedef struct admin_data
{
	char user_name[BUFFER_SIZE];
	char pswd[BUFFER_SIZE];
	struct admin_data *next;
}admin_data;


//Declaration of functions
void design();
int main_menu();

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
contestant *delete_contestant(contestant * , char *);
void view_contestant();