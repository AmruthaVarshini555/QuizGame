//Header file for the coordinator
#include<stdio.h>
#include"admin.h"



typedef struct coordinator
{
        char name[BUFFER_SIZE];
        char userid[BUFFER_SIZE];
        char pswd[PSWD_SIZE];
        long int phone_num;
        char Email_id[BUFFER_SIZE];
        struct coordinator *next;
}coordinator;

void Coordinator();
question_ans *add_new_quiz(question_ans*,char *str);
void adding_question_to_file(char *); 
question_ans *create_list_for_QA(question_ans*,question_ans);
question_ans *update_quiz(question_ans*,char *str);
question_ans *delete_question(question_ans * , int);
void save_QA_info_into_file(question_ans*,char *str);
void first_round_of_quiz_game(contestant*,int);
void second_round_of_quiz_game(contestant*,int);

int integer_validation(char *);
int alpha_validator(char *);
int password_validation(char *);
int phone_validation(char *);
int email_validation(char *);
int ans(int);
int int_ans_choice(int,int);
