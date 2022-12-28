#include<stdio.h>
#include"admin.h"

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