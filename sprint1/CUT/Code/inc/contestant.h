//Declaring header file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Declaring macros
#define CONTESTANT_REGISTRATION 1
#define PLAY_QUIZ 2
#define CONTINUE_QUIZ 3
#define CHECK_SCORE 4
#define RULES 5
#define EXIT 6
//LL for contestant
typedef struct contestant
{
	char user_id[BUFFER_SIZE];
	char user_name[BUFFER_SIZE];
	char email_id[BUFFER_SIZE] ;
	char phone_num[BUFFER_SIZE];
	char pswd[BUFFER_SIZE];
	int first_score;
	int second_socre ;
	int check ;
	int check_2 ;
	struct contestant *next ;
}contestant;

//contestant functions
contestant *Contestant();
contestant *registration_contestant(contestant*);
void adding_contestant_to_file();
void save_contestant_data_into_file(contestant *);
contestant data_extraction_from_contestant_file(char*, contestant);
contestant *play_quiz(char*,char*,contestant*);
contestant *continue_quize_game(char *, char *,contestant *,question_ans *);
void save_score_to_file(contestant*);
void check_score_contestants(contestant*);
void rules();
void first_round_of_quiz_game(contestant *,int);
void second_round_of_quiz_game(contestant *,int );
int int_ans_choice(int,int);
