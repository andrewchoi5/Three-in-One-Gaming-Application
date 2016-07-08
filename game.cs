using System;
using System.IO;
using System.Timers;
using System.Windows.Forms;
using System.Threading;

class ProgramInitiate
{
    static void Main() 
    {
        Console.WriteLine("\n======== THREE-IN-ONE C#-EDITION GAMINNG APPLICATION ======== \n");
        Console.WriteLine("Developed by ANDREW CHOI\nUniversity of Waterloo Computer Engineering Honours 1B");
        while(1 != 2)
        {
            Console.WriteLine("Please select a game you wish to play: \n");
            Console.WriteLine("1.Soccer333");
            Console.WriteLine("2.IceCream!");
            Console.WriteLine("3.Up & Down");
            Console.WriteLine("4.Exit the gaming application");
            int casenumber = int.Parse(Console.ReadLine());
            switch(casenumber)
            {
                case 1:
                    Soccer();//side note: you cannot invoke a non-static method from a static method
                    Console.Clear(); 
                    break;
                case 2:
                    IceCream();
                    Console.Clear();
                    break;
                case 3:
                    UpDown();
                    Console.Clear();
                    break;
                case 4:
                    //Application.Exit();
                    //Environment.Exit; //Only assignment, .. new object expressions can be used as statement;
                    Environment.Exit(0);
                    break;
            }
        }
    }

    public static int SoccerGame()
    {
        int tmp, com2, com3, i, num1, num2, num3, result;
        Random randomNumber = new Random();
        int com1 = randomNumber.Next() % 9 + 1;
        while(1==1)
        {
            com2 = randomNumber.Next() % 9 + 1;
            if(com1 != com2)
            {
                break;
            }
        }
        while(1==1)
        {
            com3 = randomNumber.Next() % 9 + 1;
            if(com1 != com3 && com2 != com3)
            {
                break;
            }
        }
        for(i=0; i<10; ++i)
        {
            result =0;
            while(1==1)
            {
                Console.Write("Insert three natural numbers here: ");
                tmp = int.Parse(Console.ReadLine());
                num1 = tmp / 100; //getting 1st digit utilizing the fact that the number is not rounded up.
                num2 = (tmp / 10) % 10; //getting the 10th digit using remainders (mod)
                num3 = tmp % 10; //retrieving the 100th digit by just taking the remainder of tmp/10.
                
                if(tmp >= 123 && tmp <= 987) //and
                {
                    if(num1 != num2 && num1 != num3 && num2 !=num3)
                    {
                        break;
                    }
                }
                Console.Write("You have inserted a wrong input.\n");
                Console.Write("Integer 0 and same numbers are prohibited as per game rules.\n");
            }
            
            if(num1 == com1)
                result +=10;
            
            else if(num1 == com2 || num1 == com3)
            {
                result +=100;
            }
            else
            {
                result +=1;
            }
            
            
            if(num2 == com2)
            {
                result +=10;
            }
            else if(num2 == com1 || num2 == com3)
            {
                result +=100;
            }
            else
            {
                result +=1;
            }
            
            if(num3 == com3)
            {
                result +=10;
            }
            else if(num3 == com1 || num3 == com2)
            {
                result +=100;
            }
            else
            {
                result +=1;
            }
            
            if(result %10 == 3)
            {
                Console.Write("You have won the game! Congratulations!\n");
                return 1;
            }
            Console.Write("{0} ball {1} strike {2} out\n", result/100, (result/10)%10, result%10);
            
        }
        Console.WriteLine("You have lost the game!\n");
        Console.WriteLine("Temporary Number was {0}{1}{2}. Better luck next time!\n", com1, com2, com3);
        return 0;
    }
    
    public static void SoccerInstructions()
    {
        Console.Clear();
        Console.Write("Goal: predict a three-digit number that the computer will randomly generate.\n");
        Console.Write("Number cannot contain a 0 and numbers on each digit cannot be duplicated\n");
        Console.Write("Players has 10 opportunities to match it.\n");
        Console.Write("Every time the user guesses, computer provides information about the data.\n");
        Console.Write("If the both the number and digit place are same: strike. If only the number matches: ball");
        Console.Write("If there is no number match: out\n");
        Console.Write("For instance, if computer produces 957,\n");
        Console.Write("and user inputs 123, computer prints <3 out>.\n");
        Console.Write("If the user inputs 759, computer prints <2 ball 1 strike>, Easy!\n");
    }
    
    public static void Soccer()
    {
        int win = 0;
        int lose = 0;
        Console.Clear();
    
        while(1==1)
        {
            Console.WriteLine("The Soccer 333 Game\n");
            Console.Write("1. Execute the Game\n");
            Console.Write("2. Check your Records\n");
            Console.Write("3. Game Explanations\n");
            Console.Write("0. Previous Menu\n");
            Console.Write(">");
            int sel = int.Parse(Console.ReadLine());
            if(sel == 1)
            {
                if( SoccerGame() == 1)
                    win++;
                else
                    lose++;
            }
            else if(sel == 2)
            {
                Console.WriteLine("Your records are {0}W {1}L.\n",win, lose);
            }
            else if(sel == 3)
            {
                SoccerInstructions();
            }
            else if(sel == 0)
            {
                Console.WriteLine("Going Back to Previous Menu.\n");
                return;
            }
            else
            {
                Console.WriteLine("Wrong Input!\n");
            }
            Console.ReadKey();
            Console.Clear();
        }
    }
    
    
    public static int IceCream()
    {
        int i;
        int win=0, lose=0;
        Console.Clear();
        
        while(1 == 1)
        {
            int count = 0;
            Console.Clear();
            Console.WriteLine("IceCream!\n");
            Console.Write("1. Start Game \n");
            Console.Write("2. Check Your Records\n");
            Console.Write("3. Previous Menu\n");
            Console.WriteLine("4. Game Instructions. Read!");
            Console.Write(">    ");
            int sel = int.Parse(Console.ReadLine());
            switch(sel){
            
            case 1:		
                while(1 == 1)
                {
                    Console.WriteLine("Pick a number amongst these 3 natural numbers: 1, 2, 3");
                    sel = int.Parse(Console.ReadLine());
                    if(sel <= 0 || sel >= 4)
                    {
                        Console.Write("Wrong Input! Give it another attempt.\n");
                        continue;
                    }
                    
                    for(i = 0; i < sel; i++)
                    {
                        count++;
                        if(count == 31)
                        {
                            Console.Write("You've lost\n");
                            lose++;
                            break;
                        }
                        Console.Write("{0}!\n",count);
                        Thread.Sleep(650);
                    }
                    if(count == 31)
                    {
                        break;
                    }			
                    Console.Write("Computer is typing....................\n");
                    if((count+4)==31)
                    {
                        sel = 3;
                    }
                    else if((count+3)==31)
                    {
                        sel = 2;
                    }
                    else if((count+2)==31)
                    {
                        sel = 1;
                    }
                    else
                    {
                        Random rand = new Random();
                        sel = rand.Next() % 3 + 1;
                    }
                    for(i = 0; i < sel; i++)
                    {
                        count++;
                        if(count == 31)
                        {
                            Thread.Sleep(550);
                            Console.WriteLine(".");Thread.Sleep(550);
                            Console.WriteLine("..");Thread.Sleep(550);
                            Console.WriteLine("...");Thread.Sleep(550);
                            Console.WriteLine("....");Thread.Sleep(550);
                            Console.WriteLine(".....");Thread.Sleep(550);
                            Console.WriteLine("......");Thread.Sleep(550);
                            Console.WriteLine(".......");Thread.Sleep(550);
                            Console.WriteLine("........");Thread.Sleep(550);
                            Console.WriteLine(".........");Thread.Sleep(1000);
                            
                            Console.Write("{0}..........!!!!!!\n",count);
                            Thread.Sleep(500);
                            Console.Write("Congratulations, You have won!\n");
                            win++;
                            break;
                        }
                        Console.Write("{0}!\n",count);
                        Thread.Sleep(650);
                    }
                    if(count==31)
                        break;
                }
                break;
                
            case 2:
                Console.WriteLine("<<<<<<<< Your Records >>>>>>>>\n");
                Console.WriteLine("  WIN  : {0}\n", win);
                Console.WriteLine("  LOSE : {0}\n", lose);
                break;
                
            case 3:
                Console.WriteLine("Previous Menu Summoned.\n");
                return 0;
                
            case 4:
                IceCreamInstructions();
                break;   
                
            default:
                Console.Write("Please insert a valid number.");
                break;  
            }
            Console.ReadKey();
        }
        return 0;
    }
    
    public static void IceCreamInstructions()
    {
        Console.Clear();
        Console.Write("Goal: You and computer will have a battle. \n");
        Console.Write("Starting from you, you and computer will keep adding a natural number between 0 and 4 ");
        Console.WriteLine("to the number you started with.");
        Console.WriteLine("You absolutely HAVE to say a number between 0 and 4. There is no pass or skip.");
        Console.WriteLine("Here is the crucial part: the first one to say then number \"31\" is the LOSER!");
        Console.WriteLine("In other words, you want to AVOID having to say 31 first.");
        Console.WriteLine("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n------> Cheat Code: ");
        Console.WriteLine("In your mind, have a number 2.");
        Console.WriteLine("To that number, add multiples of 4.");
        Console.WriteLine("Some examples include 2, 6, 10 ,14, 18... and so forth");
        Console.WriteLine("Keep saying those numbers and you'll be crowned as winner!");
    }
   
    public static int UpDown()
    {
        int player, com;
        int number, dummy;
        int score, min = 99;
        Console.Clear();
        Random rdm = new Random();
        
        while(1==1){
            Console.Clear();	
            Console.WriteLine(" === UP & Down Game ===\n");
            Console.Write("1. Start Game\n");
            Console.Write("2. See Records\n");
            Console.Write("3. Previous Menu\n");
            Console.Write("> ");
            number = int.Parse(Console.ReadLine());
    
            switch(number){
            case 1:
                com = rdm.Next() % 99 + 1;
                score = 0;
                dummy = 3;
                while(1==1)
                {
                    Console.Clear();
                    if(dummy==3){
                        Console.WriteLine(" ===  Start  === \n");					
                    }else if(dummy==1){
                        Console.WriteLine(" ===  Up  === \n");
                        score++;
                        
                    }else if(dummy==2){
                        Console.WriteLine(" ===  Down  === \n");
                        score++;
                        
                    }else{
                        score++;
                        Console.WriteLine("You got it after {0} attempts!\n",score);
                        if(min > score)
                        {
                            min = score;
                            Console.WriteLine("A new record for you!\n");
                        }		
                        break;
                    }
                    Console.Write("Insert a number--> ");
                    player = int.Parse(Console.ReadLine());				
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
                if(min == 99)
                {
                    Console.WriteLine("The game has not yet begun.\n");
                    break;
                }            
                Console.WriteLine("Your highest record is: %d.\n",min);
                break;
            case 3:
                Console.WriteLine("Exiting the game.\n");
                return 0;			
            }
            Console.ReadKey();
        }	
    }
}

