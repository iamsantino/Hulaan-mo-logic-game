#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>

int menu(); // menu of the game //
int game(); // structure of the questions // 20 items // 
void highscore(); // save's the highscore in the game //
void displayscore(); // display the highest score in the game //
void writescore(float score, char plnm[20]); // structure for writing and storing of name with scores //
void instructions(); // instructions of the game //
void credits(); // displays credits of the game //
// this function display the high score in the game //
void displayscore()
{
char name[20];
float s;
FILE *f;
system("cls");
f=fopen("score.dll","r");
fscanf(f,"%s%f",&name,&s);
cout<<"\n\n\n\n\n\n\n\n\n";textcolor(WHITE);
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
textcolor(LIGHTCYAN+BLINK);
cprintf("\n               %s has secured the Highest Score %.2f points!!!",name,s);
cout<<"\n\n";
textcolor(WHITE);
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
fclose(f);
getch();
}
// end of the structure for displaying highscore //

// structure for writing and storing of  the score //
void writescore(int score, char plnm[20])
{
float sc;
char nm[20];
FILE *f;
system("cls");
f=fopen("score.dll","r");
fscanf(f,"%s%f",&nm,&sc);
if(score>=sc)
{
sc=score;
fclose(f);
f=fopen("score.dll","w");
fprintf(f,"%s\n%.2f",plnm,sc);
fclose(f);
}
}// end of writing highscore //

// structure for credits //
void credits()
{
clrscr();
int colors[3] = { LIGHTGREEN, LIGHTBLUE, LIGHTMAGENTA };
delay(500);
sound(300);textcolor(colors[rand()%3]);
cout<<"\n\t            ***** HULAAN MO : TAGALOG LOGIC GAME *****\n\n";delay(200);
nosound();cout<<"\t\t\t\t    CONCEPT BY    \n\t\t\t\t     GROUP 2";delay(200);
cout<<"\n\n\t\t\t          GAME DESIGNER    \n\t\t\t\t Dexter f. febrio\n";delay(200);
cout<<"\n\t\t\t\t  GROUP MEMBERS \n\t\t\t\t Emmanuel Cailing\n\t\t\t\t Pamela Fernandez\n\t\t\t\t  Marimar Bocol";delay(200);
cout<<"\n\t\t\t\t  Wahabi Laduka\n\t\t\t\t  Rommel Rivera";delay(200);
cout<<"\n\n\t\t\t\t   INSTRUCTOR \n\t\t\t\tSir Jayson Largo\n\n\t\t\t\t";delay(200);
cout<<" SECTION/SUBJECT\n\t\t\t\t  BS3EA/COS 216\n\n\n\n";delay(200);
cout<<"  GAME DEVELOPER: Dexter F. Febrio    ";delay(200);cout<<" ||";delay(200);
cout<<"   version 1.0 Released date 07/26/17";
getch();
}// end of the credits structure //
// instruction of the game //
void instructions()
{
int colors[3] = { LIGHTGREEN, LIGHTMAGENTA, LIGHTCYAN };
clrscr();textcolor(colors[rand()%3]);
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cout<<"                         HULAAN MO : TAGALOG LOGIC GAME \n";
cout<<"                              MECHANICS ng LARO\n";
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cout<<" # May 20 katanungan ang buong game.\n\n";
cout<<" # Ang gagawin mo ay sagutan ng tama ang bawat tanong.\n\n";
cout<<" # Bawat tamang sagot ay may katumbas na 50 points.\n\n";
cout<<" # NO NEED TO CAPSLOCK YOUR ANSWER . maliliit lang dapat.\n\n";
cout<<" # Be aware sa isasagot dahil kung ano man ang iyong  inilagay ay yun\n";
cout<<"   lang ang ivavalidate ni program.\n\n";
cout<<" # Kapag nasagutan mo lahat ng katanungan ikaw ang papalit sa huling\n";
cout<<"   nag highscore.\n\n";
cout<<" # Wrong spelling is WRONG. make sure bago ka mag enter dapat sure ka na\n";
cout<<"   sa sagot mo.\n\n";
cout<<" # Hindi namin ipapakita ang tamang sagot. hahayaan namin kayo ang maka\n";
cout<<"   tuklas ng sagot. ANO KAYO SINESWERTE? -________-\n";
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
sound(1000);delay(500);sound(800);delay(700);nosound();getch();
}
// structure for main() //
int main(void)
{
char playername[20];
float score;
int choice;
int i;
int colors[5] = { BLUE, RED, GREEN, MAGENTA, DARKGRAY };
clrscr();
for(i=0;i<=100;i++)
{
textcolor(colors[rand()%5]);
cout<<"\n\n\n\n\n\n\n\n\n";
cprintf("              #       #####    ##   #####  # ##    #  #####");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     #  #  #  #    # # # #   # #");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     # ###### #    # # #  #  # # ####");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     # #    # #    # # #   # # #     #");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              ######  #####  #    # #####  # #    ##  #####   ");
textcolor(colors[rand()%5]);cprintf("[%d]",i);
{
delay(100);
}
clrscr();
if(i==100)
{
clrscr();
textcolor(colors[rand()%5]);
cout<<"\n\n\n\n\n\n\n\n\n";
cprintf("              #       #####    ##   #####  # ##    #  #####");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     #  #  #  #    # # # #   # #");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     # ###### #    # # #  #  # # ####");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              #      #     # #    # #    # # #   # # #     #");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("              ######  #####  #    # #####  # #    ##  #####   ");
textcolor(colors[rand()%5]);cprintf("[%d]",i);
sleep(3);clrscr();textcolor(colors[rand()%5]);
cout<<"\n\n\n\n\n\n\n\n\n";
cprintf("                    #####   #####  ##    # ######  ## ## ##");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("                    #    # #     # # #   # #       ## ## ##");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("                    #    # #     # #  #  # #####   ## ## ##");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("                    #    # #     # #   # # #       ## ## ##");cout<<"\n";
textcolor(colors[rand()%5]);
cprintf("                    #####   #####  #    ## ######  () () ()");cout<<"\n";
textcolor(colors[rand()%5]);cout<<"\n\n\n\n\n\n\n\n\n\n";
cprintf(" PRESS ANY KEY TO CONTINUE...");
getch();
}
}
do
{
choice = menu();
switch(choice)
{
case 0:
     cout<<"\n\t\t\t     THANKS FOR PLAYING!!!";
     sound(50);delay(700);nosound();
     sleep(3);
     exit(0);
case 1:
      sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
      delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
      game();
case 2:
      delay(500);
      displayscore();
      break;
case 3:
      delay(500);
      instructions();
      break;
case 4:
      delay(500);
      credits();
      break;
default:
      break;
}
}
while(choice!=0);
return score;
}// end of main game //
// this function serve as the menu of the game //
int menu()
{
clrscr();
int score;
int menuchoice;
clrscr();
int colors[5] = { WHITE, LIGHTMAGENTA, LIGHTCYAN, LIGHTGREEN, LIGHTRED };
srand(time(NULL));
textcolor(GREEN);delay(500);cout<<"\n";
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
textcolor(colors[rand()%5]+BLINK);delay(500);
cprintf("  #   #  #    #  #          #          #      ##    #      ##     ##   ##### ");cout<<"\n";
cprintf("  #   #  #    #  #         # #        # #     # #   #      # #   # #  #     # ");cout<<"\n";
textcolor(colors[rand()%5]+BLINK);
cprintf("  #####  #    #  #        #####      #####    #  #  #      #  # #  #  #     # ");cout<<"\n";
textcolor(colors[rand()%5]+BLINK);
cprintf("  #   #  #    #  #       #     #    #     #   #   # #      #   #   #  #     # ");cout<<"\n";
cprintf("  #   #   ####   #####  #       #  #       #  #    ##      #       #   ##### ");cout<<"\n";
textcolor(GREEN);delay(300);
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
textcolor(LIGHTBLUE);
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t TAGALOG LOGIC GAME \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
textcolor(GREEN);cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cprintf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
cout<<"\n\n\n";textcolor(colors[rand()%5]);delay(300);
cprintf("                                [1] START GAME");cout<<"\n";
cprintf("                                [2] HIGH SCORES");cout<<"\n";
cprintf("                                [3] INSTRUCTIONS");cout<<"\n";
cprintf("                                [4] CREDITS");cout<<"\n";
cprintf("                                [0] QUIT GAME");cout<<"\n\n";
cprintf("                                CHOOSE: ");cin>>menuchoice;
return menuchoice;
} // end of the function of menu //
// structure for int game() // questions inside here //
int game()
{
clrscr();
int score=0;
int countr=50;
char playername[20];
int out=0;
int  colors[3] = { LIGHTGREEN, LIGHTCYAN, LIGHTMAGENTA };
char guest_one[] = { "mangga" };
char answer[20];
textcolor(colors[rand()%3]);
cprintf("ENTER YOUR NAME");cout<<"\n";
cprintf("ONE WORD ONLY");cout<<"\n";
gets(playername);
clrscr();textcolor(colors[rand()%3]);
cout<<"\n     Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"     QUESTION #1 :\n";
cprintf("     Minsan prutas, minsan baba mo.");
cout<<"\n";textcolor(GREEN);cprintf("     SAGOT: ");
scanf("%s",answer);
if(strcmp(guest_one,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n     CONGRATS !!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"     You Gain "<<countr<<" points!!!";
cout<<"\n     Press any key to continue...";
getch();
}
else
{
sleep(1);
textcolor(GREEN);
cprintf("\n     OooooPsss!!! MALI !!! ISIP ISIP DIN!!!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("     Ang tamang sagot ay ");cout<<guest_one;
score += out;
cout<<"\n";cout<<"     You Gain "<<out<<" point!!!";
cout<<"\n     Press any key to continue...";
getch();
}
clrscr();
textcolor(colors[rand()%3]);
char guest_two[] = { "tita" };
cout<<"\n     Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"     QUESTION #2 :\n";
cprintf("     Anong tawag sa kapatid ng papa mo pero di mo tito?");
cout<<"\n";cout<<"     SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_two,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n     CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"     You Gain "<<countr<<" points!!!";
cout<<"\n     Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("\n     Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("     Ang tamang sagot ay ");cout<<guest_two;
cout<<"\n";cout<<"     You Gain "<<out<<" point!!!";
cout<<"\n     Press any key to continue...";
getch();
}
clrscr();
char guest_three[] = { "1" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #3 :\n";
cprintf("          Alin sa tatlo ang mauuna?");
cout<<"\n";cprintf("          ---[1]---[3]---[2]---FINISH");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_three,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!! ");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_three;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_four[] = { "takure" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #4 :\n";
cprintf("          Ano ba!!! Bakit ako na lang palaging pinagiinitan niyo?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_four,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_four;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_five[] = { "usb" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #5 :\n";
cprintf("          Anong katabi ng USA?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_five,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_five;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_six[] = { "cellphone" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #6 :\n";
cprintf("          Paborito mo akong paglaruan tuwing gabi sa kama.");cout<<"\n";
cprintf("          Wag mo akong gamitin sa oras ng trabaho ha.Ipahawak");cout<<"\n";
cprintf("          mo lang ako sa mga taong mahalaga.");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_six,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_six;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_seven[] = { "basilio" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #7 :\n";
cprintf("          Ano ang first name ni basilio?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_seven,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_seven;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_eight[] = { "abnormal" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #8 :\n";
cprintf("          Anong tawag mo sa taong isa lang ang mata?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_eight,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_eight;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_nine[] = { "gastos" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #9 :\n";
cprintf("          Anong gas ang masakit sa bulsa?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_nine,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_nine;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_ten[] = { "tatay" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #10 :\n";
cprintf("          Ang mangingisda ay may nakitang mag-ina sa tabi ng ilog.");cout<<"\n";
cprintf("          tinanong ng mangingisda kung anong ginagawa nila dun.");cout<<"\n";
cprintf("          Ang sagot naman ng nanay:");cout<<"\n";
cprintf("          'May hinuhuli kami, kapag nahuhuli namin pinapatay namin");cout<<"\n";
cprintf("          kapag hindi naman namin nahuhuli inuuwi nalang namin sa bahay namin'");cout<<"\n";
cprintf("          TANONG: Ano yung hinuhuli nung mag-ina?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_ten,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_ten;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_eleven[] = { "penguin" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #11 :\n";
cprintf("          HOWARD: Wala kayo sa alaga kong ibon, lumalangoy");cout<<"\n";
cprintf("          Tanong: Anong ibong ang alaga ni Howard?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_eleven,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_eleven;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_twelve[] = { "binti" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #12 :\n";
cprintf("          Alin sa buo mong katawan nasa likod ang tiyan?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_twelve,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_twelve;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_thirteen[] = { "chess" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #13 :\n";
cprintf("          Si mang Perdro ay may sampung anak.Sila A,B,C,D,E,F,G,H,I at J.");cout<<"\n";
cprintf("          lahat ng anak ni mang pedro ay may ginagawa sa kanilang bahay.");cout<<"\n";
cprintf("          si A - nag-lalaba");cout<<"\n";cprintf("          si B - nag-wawalis");cout<<"\n";
cprintf("          si C - naglalaro ng 'chess'");cout<<"\n";cprintf("          si D - nanunuod ng tv");
cout<<"\n";cprintf("          si E - naghuhugas");cout<<"\n";cprintf("          si F - naliligo");
cout<<"\n";cprintf("          si G - nagcocomputer");cout<<"\n";cprintf("          si H - naglalaro ng kanyang phone");
cout<<"\n";cprintf("          si I - kumakain");cout<<"\n";cprintf("          TANONG: Anong ginagawa ni J?");cout<<"\n";
cprintf("          ONE WORD ONLY!!!' '");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_thirteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_thirteen;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_fourteen[] = { "anu" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #14 :\n";
cprintf("          May 5 anak si Mary, ang pangalan nila ay Dada,Dede,Didi,");cout<<"\n";
cprintf("          Dodo,anu ang pangalan ng isa pa nilang kapatid.");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_fourteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_fourteen;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_fifthteen[] = { "kumapit" };
textcolor(colors[rand()%3]);
cout<<"\n Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<" QUESTION #15 :\n";
cprintf(" Nakasakay ng barko si Pedro, nagsasight seeing siya ng");cout<<"\n";
cprintf(" biglang humampas ng malakas ang alon, umuga ang barko at");cout<<"\n";
cprintf(" nalaglag siya.Nakita niya ang kapitan ng barko.");cout<<"\n";
cprintf(" TANONG: Anung sunod niyang ginawa?");
cout<<"\n";cout<<" SAGOT: ";scanf("%s",answer);
if(strcmp(guest_fifthteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<" You Gain "<<countr<<" points!!!";
cout<<"\n Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("\n Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf(" Ang tamang sagot ay ");cout<<guest_fifthteen;
cout<<"\n";cout<<" You Gain "<<out<<" point!!!";
cout<<"\n Press any key to continue...";
getch();
}
clrscr();
char guest_sixteen[] = { "hello" };
textcolor(colors[rand()%3]);
cout<<"\n Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<" QUESTION #16 :\n";
cprintf(" Si Emman ay may gusto sa kahera ng tindahan ni aling nena. Para mag papansin");cout<<"\n";
cprintf(" ay pumunta siya at nanghiram ng calculator sabay pinindot ang mga .07734");cout<<"\n";
cprintf(" Anong gustong sabihin ni Emman sa kahera?");
cout<<"\n";cout<<" SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_sixteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<" You Gain "<<countr<<" points!!!";
cout<<"\n Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf(" Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf(" Ang tamang sagot ay ");cout<<guest_sixteen;
cout<<"\n";cout<<" You Gain "<<out<<" point!!!";
cout<<"\n Press any key to continue...";
getch();
}
clrscr();
char guest_seventeen[] = { "pakbet" };
textcolor(colors[rand()%3]);
cout<<"\n       Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"       QUESTION #17 :\n";
cprintf("       Anong halaman ang nag-iiba ang pangalan kapag niluto o binabalatan?");
cout<<"\n";cout<<"       SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_seventeen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n       CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"       You Gain "<<countr<<" points!!!";
cout<<"\n       Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("       Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("       Ang tamang sagot ay ");cout<<guest_seventeen;
cout<<"\n";cout<<"       You Gain "<<out<<" point!!!";
cout<<"\n       Press any key to continue...";
getch();
}
clrscr();
char guest_eightteen[] = { "shopping" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #18 :\n";
cprintf("          Anong sitwasyon kung saan pinagpapawisan ang mga lalaki habang");cout<<"\n";
cprintf("          gustong ulit ulitin naman ng mga babae?");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_eightteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("          Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("          Ang tamang sagot ay ");cout<<guest_eightteen;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_nineteen[] = { "handaan" };
textcolor(colors[rand()%3]);
cout<<"\n          Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<"          QUESTION #19 :\n";
cprintf("          Magdamagan na palakihan ng tiyan.");
cout<<"\n";cout<<"          SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_nineteen,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n          CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<"          You Gain "<<countr<<" points!!!";
cout<<"\n          Press any key to continue...";
getch();
}else
{
sleep(1);
textcolor(GREEN);
cprintf("\n	    Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf("         Ang tamang sagot ay ");cout<<guest_nineteen;
cout<<"\n";cout<<"          You Gain "<<out<<" point!!!";
cout<<"\n          Press any key to continue...";
getch();
}
clrscr();
char guest_twenty[] = { "pako" };
textcolor(colors[rand()%3]);
cout<<"\n Player name: "<<playername<<" | SCORE: "<<score<<"\n\n";
cout<<" QUESTION #20 LAST QUESTION :\n";
cprintf(" Tandaan mo na minsan kailangan natin masaktan at ibaon ng iba");cout<<"\n";
cprintf(" para malaman natin ang ating silbi, saka natin maiisip");cout<<"\n";
cprintf(" tayo pala ay mahalaga.");
cout<<"\n";cout<<" SAGOT: ";
scanf("%s",answer);
if(strcmp(guest_twenty,answer)==0)
{
sleep(1);
textcolor(CYAN);
cprintf("\n CONGRATS!!! MAY TAMA KA!!!");
sound(300);delay(200);sound(400);delay(200);sound(500);delay(200);sound(600);
delay(400);sound(500);delay(200);sound(600);delay(1000);nosound();
score +=countr;
cout<<"\n";cout<<" You Gain "<<countr<<" points!!!";
cout<<"\n Press any key to continue...";
getch();clrscr();
(colors[rand()%3]);cout<<"\n Waiting for results please wait...";sleep(3);
cout<<"\n\n Press any key to continue...";
getch();clrscr();
cout<<"\n\n"<<playername<<" !!! Your total score is "<<score<<" points!!!";
getch();
writescore(score,playername);
return out;
}else
{
sleep(1);
textcolor(GREEN);
cprintf("\n Oopps!!! MALI ka !!! HAHAHA!");
sound(50);delay(500);nosound();
cout<<"\n";cprintf(" Ang tamang sagot ay ");cout<<guest_twenty;
cout<<"\n";cout<<" You Gain "<<out<<" point!!!";
cout<<"\n Press any key to continue...";
getch();clrscr();
(colors[rand()%3]);cout<<"\n Waiting for results please wait...";sleep(3);
cout<<"\n\n Press any key to continue...";
getch();clrscr();
cout<<"\n\n "<<playername<<" !!! Your total score is "<<score<<" points!!!";
getch();
writescore(score,playername);
return out;
}
} // end of the game structure //