#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main()
{
	
	int num;
	printf("\n======== THREE-IN-ONE C-EDITION GAMINNG APPLICATION ========");
    printf("\nDeveloped by ANDREW CHOI\nUniversity of Waterloo Computer Engineering Honours 1B");
	while(1){
		printf("\nSelect a game: \n\n");
		printf("1.Soccer333\n");
		printf("2.IceCream!\n");
        printf("3.Up & Down\n");
		printf("4.Exit the Game Application\n");
		scanf("%d",&num);
		
		switch(num){
		case 1:Soccer();system("cls");break;
		case 2:IceCream();system("cls");break;
		case 3:UpDown();system("cls");break;
		case 4:exit(1);	
		}
	}
}

int SoccerGame(){
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
			printf("Please insert three natural numbers right here: ");
			scanf("%d",&tmp);
			num1 = tmp/100;
			num2 = (tmp/10)%10;
			num3 = tmp%10;
			if(tmp >=123 && tmp <=987){
				if(num1 != num2 && num1 != num3 && num2 !=num3){
					break;
				}
			}
			printf("I'm afraid you have inserted a wrong input!\n");
			printf("Integer 0 and same numbers are prohibited as per game rules.\n");
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
			printf("You have won the game! Congratulations!\n");
			return 1;
		}
		printf("%d ball %d strike %d out\n", result/100, (result/10)%10, result%10);
		
	}
	printf("Unfortunately, you have lost the game!\n");
	printf("The temporary number was %d%d%d\n", com1, com2, com3);
	return 0;
}

void SoccerInstructions(){
	system("cls");
    printf("Goal: predict a three-digit number that the computer will randomly generate.\n");
    printf("Number cannot contain a 0 and numbers on each digit cannot be duplicated.\n");
    printf("Players has 5 opportunities to match it.\n");
    printf("Every time the user guesses, computer provides information about the data.\n");
    printf("If the both the number and digit place are same: strike. If only the number matches: ball");
    printf("If there is no number match: out\n");
    printf("For instance, if computer produces 957,\n");
    printf("and user inputs 123, computer prints <3 out>.\n");
    printf("If the user inputs 759, computer prints <2 ball 1 strike>\n");
}

int Soccer(){
	int sel, win=0, lose=0;
	system("cls");

	while(1){
		printf("Soccer 333\n");
		printf("1. Execute the Game\n");
		printf("2. Check your Record\n");
		printf("3. Game Explanations\n");
		printf("4. Previous Menu\n");
		printf(">");
		scanf("%d",&sel);
		if(sel == 1){
			if( SoccerGame( ) == 1){
				win++;
			}
			else{
				lose++;
			}
		}
		else if(sel == 2){
			printf("Your record is %dwin(s) and %dloss(es).\n", win, lose);
		}
		else if(sel == 3){
			SoccerInstructions();
		}
		else if(sel == 4){
			printf("Going Back to the Prior Menu.\n");
			return;
		}
		else{
			printf("You have typed a wrong input!\n");
		}
		system("pause");
		system("cls");
	}
}


void IceCreamInstructions(){
       system("cls");
       printf("Goal: You and computer will have a battle. \n");
       printf("Starting from you, you and computer will keep adding a natural number between 0 and 4 ");
       printf("to the number you started with.");
       printf("You absolutely HAVE to say a number between 0 and 4. There is no pass or skip.\n");
       printf("Here is the crucial part: the first one to say then number \"31\" is the LOSER!\n");
       printf("In other words, you want to AVOID having to say 31 first.\n");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n------> Cheat Code:\n");
       printf("In your mind, have a number 2.\n");
       printf("To that number, add multiples of 4.\n");
       printf("Some examples include 2, 6, 10 ,14, 18... and so forth\n");
       printf("Keep saying those numbers and you'll be crowned as winner!\n");
}

int IceCream()
{
	int sel,count;
	int i;
	int win=0, lose=0;

	system("cls");
	while(1){
		count=0;
		system("cls");
		printf("IceCream!\n");
		printf("1. Start Game\n");
		printf("2. Check your Records\n");
		printf("3. Previous Menu\n");
		printf("4. Game Instructions. Must Read!\n");
		printf(">> ");
		scanf("%d",&sel);
		switch(sel){
		case 1:		
			while(1)
			{
				printf("Pick a number amongst these 3 natural numbers: 1, 2, 3\n");
				scanf("%d",&sel);
				if(sel <= 0 || sel >= 4){
					printf("Wrong Input! Give it another shot!\n");
					continue;
				}
				for(i=0;i<sel;i++)
				{
					count++;
					if(count==31){
						printf("You've Lost.\n");
						lose++;
						break;
					}
					printf(" %d !\n",count);
					Sleep(650);
				}
				if(count==31)
				{
					break;
				}			
            
				printf("Your opponent is currently typing...................\n");
	
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
				for(i = 0; i < sel; i++)
				{
					count++;
					if(count==31){
						Sleep(650);
						printf(" %d....................!!!!!!!?!\n",count);
						printf("Congratulations! You are the champion!\n");
						win++;
						break;
					}
					printf(" %d !\n",count);
					Sleep(650);
				}
				if(count==31)
					break;
			}
			break;
		case 2:
			printf("<< YOUR RECORD >>\n");
			printf("  WIN  : %d\n", win);
			printf("  LOSE : %d\n", lose);
			break;
		case 3:
			printf("Going to the Previous Menu\n");
			return 0;
		
		case 4:
			IceCreamInstructions();
			break;
		
		default:
			printf("Please select an appropriate number.");
			break;
		}
		system("pause");
		}
		
	return 0;
}

int UpDown()
{
	int player, com;
	int number, dummy;
	int score,min = 99;
	system("cls");
	srand(time(NULL));
	
	while(1){
		system("cls");		
		printf(" === UP & Down Game ===\n");
		printf("1. Start Game\n");
        printf("2. See Records\n");
		printf("3. Previous Menu\n");
		printf("> ");
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
					printf("You got it after %d attempts!\n",score);
					if(min>score)
					{
						min = score;
						printf("You have written a new record!\n");
					}		
					
					break;
				}
				printf("Insert a number--> ");
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