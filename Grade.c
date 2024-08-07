//Program for finding grade for the students by if-else statement
#include<stdio.h>
int main(){
	int a=90;
	int b=80;
	int c=70;
	int d=60;
	int e=50;
	int f=40;
	int grade;
	printf("Enter your score : ");
	scanf("%f",&grade);
	grade>f?grade>e?grade>d?grade>c?grade>b?grade>a?printf("Your grade is A")
	:printf("Your grade is B"):printf("Your grade is C"):printf("Your grade is D")
	:printf("Your grade is E"):printf("Your grade is F"):printf("You fail");
	
	
	switch(grade){
		case(A){
			printf("Execllent work!");
			break;
		}
		case(B){
			printf("Good!");
			break;
		}
		case(C){
			printf("Not bad!");
			break;
		}
		case(D){
			printf("Can do better!");
			break;
		}
		case(E){
			printf("Very poor!");
			break;
		}
		case(F){
			printf("Disappointing!");
			break;
		}
	}
	
	
	if(A||B||C||D||E||F){
		print("You are eligiblr for next level";)
	}
	else{
		printf("Please try next time");
	}
	
}
