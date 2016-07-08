#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int baseball_game(){
	int tmp, com1, com2, com3, i, num1, num2, num3, result;
	srand(time(NULL));
    
	com1 = rand()%9+1;
	while(1)
    {
		com2=rand()%9+1;
		if(com1 != com2)
        {
			break;
		}
	}
	while(1){
		com3=rand()%9+1;
		if(com1 != com3 && com2 != com3){
			break;
		}
	}
	for(i=0; i<5; i++){
		result =0;
		while(1){
			printf("���ڸ� ���ڸ� �Է��ϼ��� : ");
			scanf("%d",&tmp);
			num1 = tmp/100;
			num2 = (tmp/10)%10;
			num3 = tmp%10;
			if(tmp >=123 && tmp <=987){
				if(num1 != num2 && num1 != num3 && num2 !=num3){
					break;
				}
			}
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			printf("���� 0�� �ߺ� ���ڴ� ������� �ʽ��ϴ�.\n");
		}
		if(num1==com1)
			result +=10;
		
		else if(num1 == com2 || num1 == com3){
			result +=100;
		}
		else{
			result +=1;
		}
		if(num2==com2){
			result +=10;
		}
		else if(num2 == com1 || num2 == com3){
			result +=100;
		}
		else{
			result +=1;
		}
		if(num3 == com3){
			result +=10;
		}
		else if(num3 == com1 || num3 == com2){
			result +=100;
		}
		else{
			result +=1;
		}
		if(result %10 == 3){
			printf("����� �¸��Ͽ����ϴ�.\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n",
			result/100, (result/10)%10, result%10);
		
	}
	printf("You are a loser.\n");
	printf("������ ���� : %d%d%d\n", com1, com2, com3);
	return 0;
}
void baseball_rule(){
	system("cls");
    printf("Goal: predict a three-digit number that the computer will randomly generate.\n");
    printf("Number cannot contain a 0 and numbers on each digit cannot be duplicated\n");
    printf("Players has 5 opportunities to match it.\n");
    printf("Every time the user guesses, computer provides information about the data.\n");
    printf("If the both the number and digit place are same: strike. If only the number matches: ball");
    printf("If there is no number match: out\n");
    printf("For instance, if computer produces 957,\n");
    printf("and user inputs 123, computer prints <3 out>.\n");
    printf("IF the user inputs 759, computer prints <2 ball 1 strike>, Easy!\n");
}
void baseball(){
int sel, win=0, lose=0;
	system("cls");

	while(1){
		printf("Baseball Game\n");
		printf("1. ���� ����\n");
		printf("2. ���� Ȯ��\n");
		printf("3. ���� ����\n");
		printf("0. ���� �޴�\n");
		printf(">");
		scanf("%d",&sel);
		if(sel == 1){
			if(baseball_game()){
				win++;
			}
			else{
				lose++;
			}
		}
		else if(sel == 2){
			printf("����� ������ %d�� %d�� �Դϴ�.\n",win, lose);
		}
		else if(sel == 3){
			baseball_rule();
		}
		else if(sel == 0){
			printf("���� �޴��� ���ư��ϴ�.\n");
			return ;
		}
		else{
			printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		}
		system("pause");
		system("cls");
	}
}


int baskin()
{
	int sel,count;
	int i;
	int win=0, lose=0;

	system("cls");
	while(1){
		count=0;
		system("cls");
		printf("Baskin Robbins 31 !\n");
		printf("      1.���ӽ���. \n");
		printf("      2.����Ȯ�� \n");
		printf("      3.�����޴� \n");
		printf("      > ");
		scanf("%d",&sel);
		switch(sel){
		case 1:		
			while(1)
			{
				printf("1 ~ 3 ���� :");
				scanf("%d",&sel);
				if(sel <= 0 || sel >= 4){
					printf("�߸��Է��ϼ̽��ϴ�\n");
					continue;
				}
				for(i=0;i<sel;i++)
				{
					count++;
					if(count==31){
						printf("��û��...������\n");
						lose++;
						break;
					}
					printf(" %d !\n",count);
					Sleep(500);
				}
				if(count==31)
				{
					break;
				}			
            
				printf("��ǻ�� \n");
	
				if((count+4)==31){
					sel = 3;
				}else if((count+3)==31){
					sel = 2;
				}else if((count+2)==31){
					sel = 1;
				}else{
					srand(time(NULL));
					sel = rand()%3+1;
				}
				for(i=0;i<sel;i++)
				{
					count++;
					if(count==31){
						printf(" %d.......?!\n",count);
						printf("����� �̱�̽��ϴ�...��.�� \n");
						win++;
						break;
					}
					printf(" %d !\n",count);
					Sleep(500);
				}
				if(count==31)
					break;
			}
			break;
		case 2:
			printf("<<����� ����>>\n");
			printf("  WIN  : %d\n", win);
			printf("  LOSE : %d\n", lose);
			break;
		case 3:
			printf("���α׷��� �����ϰڽ��ϴ�.\n");
			return 0;
		}
		system("pause");
		}
		
	return 0;
}

int updown()
{
	int player, com;
	int number, dummy;
	int score,min=99;
	system("cls");
	srand(time(NULL));
	
	while(1){
		system("cls");		
		printf(" === UP & Down Game ===\n");printf("1. Start Game\n");
        printf("2. See Records\n");printf("3. Previous Menu\n");printf("> ");
		scanf("%d", &number);

		switch(number){
		case 1:
			com = rand()%99+1;
            score = 0;
            dummy = 3;
			while(1)
			{
				system("cls");
				if(dummy==3){
					printf(" ===  START  === \n");					
				}else if(dummy==1){
					printf(" ===  U  P  === \n");
					score++;
					
				}else if(dummy==2){
					printf(" ===  Down  === \n");
					score++;
					
				}else{
					score++;
					printf("%dȸ���� ������ϴ� \n",score);
					if(min>score)
					{
						min = score;
						printf("�ְ����� �����ϼ̽��ϴ�. \n");
					}		
					
					break;
				}
				printf("Inser a number--> ");
				scanf("%d",&player);				
				if(player > com){
					dummy = 2;
				}else if(player < com){
					dummy = 1;
				}else{
					dummy = 4;
				}					
			}			
			break;
		case 2:
			if(min==99)
			{
				printf("The game has not yet begun.\n");break;
			}
			printf("Your highest record is: %d.\n",min);break;
		case 3:
			printf("Exiting the game.\n");
			return 0;			
		}
		system("pause");
	}	
}
void main(){
	int num; printf("\n======== THREE-IN-ONE C GAMINNG APPLICATION ========");
    printf("\nDeveloped by ANDREW CHOI\nUniversity of Waterloo Computer Engineering Honours 1B");
	while(1){
		printf("\nSelect a game: \n\n");printf("1.�߱�����\n");	printf("2.����Ų���31\n");
        printf("3.���ٿ� ����\n");printf("4.���α׷� ����\n");scanf("%d",&num);
		switch(num){
		case 1:baseball();system("cls");break;
		case 2:baskin();system("cls");break;
		case 3:updown();system("cls");break;
		case 4:exit(1);	
		}
	}
}