//Header file for Coordinator
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Declaring macros
#define UPDATE_COORDINATOR 1
#define ADD_QUIZ 2
#define UPDATE_QUIZ 3
#define DELETE_QUIZ 4
#define DISPLAY_QUIZ 5
#define EXIT 0

//Structure for coordinator
typedef struct coordinator
{
        char name[BUFFER_SIZE];
        char userid[BUFFER_SIZE];
        char pswd[PSWD_SIZE];
        long int phone_num ;
        char Email_id[BUFFER_SIZE];
        struct coordinator *next;
}coordinator;

//Structure for quiz
typedef struct question_ans
{
	int q_num;
	char question[QUESTION_BUFFER_SIZE];
	char ans_string[4][BUFFER_SIZE];
	int ans_integer[4];
	char ans_str[BUFFER_SIZE];
	int ans_int;
	int check_flag;
	struct question_ans *next;
}question_ans;

void Coordinator();
question_ans *add_new_quiz(question_ans*,char *str);
void adding_question_to_file(char *); 
question_ans *create_list_for_QA(question_ans*,question_ans);
question_ans *update_quiz(question_ans*,char *str);
question_ans *delete_question(question_ans * , int);
void save_QA_info_into_file(question_ans*,char *str);
void first_round_of_quiz_game(contestant*,int);
void second_round_of_quiz_game(contestant*,int);

coordinator *update_coordinator(char *,coordinator *);
question_ans *add_new_quiz(question_ans *,char *str); 
question_ans *create_list_for_QA(question_ans *, question_ans );
question_ans *update_quiz(question_ans * , char *str);
void save_QA_info_into_file(question_ans * , char *str);
