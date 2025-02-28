#include <stdio.h>
#include <windows.h>
#include <conio.h>             //for the _khbit

#define b "\033[34m"
#define g "\033[32m"
#define r "\033[31m"
#define w "\033[37m"
#define g_h "\033[42m"
#define r_h "\033[41m"
#define clr "\033[0m"
#define y "\033[33m"
#define bold "\033[1m"




int main() {
char mainMenu,musicMenu,exoChoice;
while(1) {

while (2) {


if(_kbhit()) {                    //actively listens for a key press without waiting for the getch()
    mainMenu = getch();
}
if (mainMenu == 'q') {
    exit(0);                      // exit / break, pretty straight forward
} else if (mainMenu == 'x') break;


printf(w"\n\t\t\t\t ** Hello and welcome to the Lab N1 full guide ! **");
printf(w"\n\n\n\n\n\n\t\tWe did our best to provide you with all the Lab N1 exercises in one place for you convenience!");
printf(w"\n\n\t\t\t\t\t\t from task 1 to task 10!\t\n\n\n\n\n\n\n\n");
printf(w r_h"\n\n\n\n\n\n\n\n\t\t\t\t\t\t Quit (q) ");
printf(w g_h"\t Next (x) ");
Sleep(2000);
printf(clr"");
system("cls");
printf(r"\n\t\t\t\t ** Hello and welcome to the Lab N1 full guide ! **");
printf(w"\n\n\n\n\n\n\t\tWe did our best to provide you with all the Lab N1 exercises in one place for you convenience!");
printf(w"\n\n\t\t\t\t\t\t from task 1 to task 10!\t\n\n\n\n\n\n\n\n");
printf(w r_h"\n\n\n\n\n\n\n\n\t\t\t\t\t\t Quit (q) ");
printf(w g_h"\t Next (x) ");
Sleep(2000);
printf(clr"");
system("cls");
printf(g"\n\t\t\t\t ** Hello and welcome to the Lab N1 full guide ! **");
printf(w"\n\n\n\n\n\n\t\tWe did our best to provide you with all the Lab N1 exercises in one place for you convenience!");
printf(w"\n\n\t\t\t\t\t\t from task 1 to task 10!\t\n\n\n\n\n\n\n\n");
printf(w r_h"\n\n\n\n\n\n\n\n\t\t\t\t\t\t Quit (q) ");
printf(w g_h"\t Next (x) ");
Sleep(2000);
printf(clr"");
system("cls");
printf(b"\n\t\t\t\t ** Hello and welcome to the Lab N1 full guide ! **");
printf(w"\n\n\n\n\n\n\t\tWe did our best to provide you with all the Lab N1 exercises in one place for you convenience!");
printf(w"\n\n\t\t\t\t\t\t from task 1 to task 10!\t\n\n\n\n\n\n\n\n");
printf(w r_h"\n\n\n\n\n\n\n\n\t\t\t\t\t\t Quit (q) ");
printf(w g_h"\t Next (x) ");
Sleep(2000);
printf(clr"");
system("cls");
}


while (4) {
exoMenu: ;
printf(clr"");
system("cls");
printf(w bold"\n\n\n\n\n\n\t\t\t\t\t\t    Choose an exercise!\n"clr);
/*printf(clr"\n\n\n\n\n\t[1] Exo1 \t[2] Exo2 \t[3] Exo3 \t[4] Exo4 \t[5] Exo5 \t[6] Exo6 \t[7] Exo7");
printf("\n\n\n\t\t\t\t       [8] Exo8 \t [9] Exo9 \t[0] Exo10");*/

printf(g "\n\n\n\n\n        \t\t\t [1] Task 1      \t" y "[2] Task 2      \t" r "[3] Task 3\n" clr);
printf(g "\n        \t\t\t [4] Task 4      \t" y "[5] Task 5      \t" r "[6] Task 6\n" clr);
printf(g "\n        \t\t\t [7] Task 7      \t" y "[8] Task 8      \t" r "[9] Task 9\n" clr);
printf(y "\n\t\t\t\t\t\t        [0] Task 10"clr);


exoChoice = getch();

switch (exoChoice) {
case '1' : goto exo1; break;
case '2' : goto exo2; break;
case '3' : goto exo3; break;
case '4' : goto exo4; break;
case '5' : goto exo5; break;
case '6' : goto exo6; break;
case '7' : goto exo7; break;
case '8' : goto exo8; break;
case '9' : goto exo9; break;
case '0' : goto exo10; break;
default : ;
}

if (0) {
while (5.1) {
exo1:;
printf(clr"");
system("cls");
printf("Exercise 1\nWrite the following program :\n#include <stdio.h>\nmain()\n/* Our first program in C */\n{ printf(\"hello, world \n\");\n}\nCompile and execute this program, what is the role of \\n ?");
printf("\n\nAnswer : the \\n is an escape sequence used to move to a new line");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.2) {
exo2:;
printf(clr"");
system("cls");
printf("Exercise 2\nWrite a program that:\n- Displays: \"Hello, please press a key\"\n- Waits for a key press\n- Clears the screen\n- Displays: \"Thank you for pressing a key\"");
printf("\n\n------------------------------------------------------------------------------------------------------------------------");
printf("\n\n\n\nHello, press a key.");
getch();
system("cls");
printf("Shoo nigger\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0)
while (5.3) {
exo3:;
printf(clr"");
system("cls");
printf("Exercise 3\nWrite a program that asks the user to enter two numbers, then multiplies their values, assigns the result to a\nthird variable, and then displays it.");
printf("\n\n------------------------------------------------------------------------------------------------------------------------");
int xd,xddzs,balls;
printf("Hand over 2 numbers little shit\n");
scanf("%i", &xd);
printf("Now the second one\n");
scanf("%i", &xddzs);
balls = xd*xddzs;
printf("The little number you wanted is %i ,bitch",balls);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}

if (0) {
while (5.4) {
exo4:;
printf(clr"");
system("cls");
printf("Exercise 4\nWrite a program that compares two integers a and b, and displays one of the following messages depending\non the case: a=b, a>b, or a<b.");
printf("\n\n------------------------------------------------------------------------------------------------------------------------");
int a1,b1;
printf("Let's get this over with quick, hand over the first number\n");
scanf("%d",&a1);
printf("Quick fuck head, the second one\n");
scanf("%d",&b1);
printf("Hold up hold up hold up");

Sleep(1000);
printf("\nAre you fucking serious?");

Sleep(1300);
printf("\nAre you a fucking 10 year old or something???");

Sleep(1600);
if (a1==b1) {
    printf("\n%d is equal to %d..\n\n",a1,b1);
} else if (a1>b1) {
    printf("\nThis generation is lost, %d is greater than %d...\n\n",a1,b1);
} else printf("\nCan't believe this is what life got me doing, %i is bigger than %i\n\n",b1,a1);

Sleep(2000);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.5) {
exo5:;
printf(clr"");
system("cls");
printf("Exercise 5\nWrite a program that determines if an entered integer is even or odd.");
printf("\n\n------------------------------------------------------------------------------------------------------------------------");
int niggers;
printf("Hand over the number idiot\n");
scanf("%d", &niggers);
if (niggers<0) {niggers=-niggers;}
while (niggers>1) {
    niggers += -2;
}
if (niggers==1) {
    printf("He odd bruv");
} else printf("We even");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.6) {
exo6:;
printf(clr"");
system("cls");
printf("Exercise 6\nWrite two programs that swap two entered integers:\n1. With an intermediate value.\n2. Without an intermediate value.");
printf(y"\nNote: here I'm only gonna do the second iteration because it's gonna look the same");
printf(clr"\n\n------------------------------------------------------------------------------------------------------------------------");
int a2,b2;
printf("Hand them over\n");
scanf("%d",&a2);
printf("The other one too\n");
scanf("%d",&b2);
a2 = a2+b2;
b2 = a2-b2;
a2 = a2-b2;
printf("I don't get the point of this, but here, %d and his brother %d\n\n\n",a2,b2);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.7) {
exo7:;
printf(clr"");
system("cls");
printf("Exercise 7\nWrite a program that displays the largest of three entered numbers.");
printf(clr"\n\n------------------------------------------------------------------------------------------------------------------------");
int a3,b3,c3;
printf("Hand them over\n");
scanf("%i",&a3);
printf("The other one too\n");
scanf("%i",&b3);
printf("Last and not least\n");
scanf("%i",&c3);
if (a3>b3) {
    if (b3>c3) {
        printf("%i is the biggest",a3);
    } else  if (c3>a3) {printf("%i is the biggest",c3);} else printf("%i is the biggest",a3);
} else if (b3>c3) {printf("%i is the biggest",b3);} else printf("%i is the biggest",c3);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.8) {
exo8:;
printf(clr"");
system("cls");
printf("Exercise 8\nWrite a program that asks the user how much is 2 X 2, and repeats this question as long as the answer is false.\nAdd the message \"False, try again\" after each wrong answer, and \"Bravo!\" for the correct answer");
printf(clr"\n\n------------------------------------------------------------------------------------------------------------------------");
char xy;
printf("What's 2x2?\n");
while (1==1) {
    xy= getch();
    if (xy=='4') {
        printf("Bravo! You found it!");
        break;
    }
    printf("False, try again\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.9) {
exo9:;
printf(clr"");
system("cls");
printf("Exercise 9\nImprove exercise 8 by counting the number of attempts and displaying it at the end: \"Bravo! You found it in x\nattempts.\"");
printf(clr"\n\n------------------------------------------------------------------------------------------------------------------------");
char xy1;
int sexy1 = 1;
printf("What's 2x2?\n");
while (1==1) {
    xy1= getch();
    if (xy1=='4') {
        printf("Bravo! You found it in %i attempt(s).", sexy1);
        break;
    }
    sexy1++;
    printf("False, try again\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}

if (0) {
while (5.10) {
exo10:;
printf(clr"");
system("cls");
printf("Exercise 10\nWrite a program that asks the user to enter a positive integer, then displays all the even numbers between 0 and\nthe entered number.");
printf(clr"\n\n------------------------------------------------------------------------------------------------------------------------");
int x4,y4;
printf("One positive integer please!\n");
scanf("%i",&x4);
y4=x4;
while (y4>=0) {
    printf(",%i\t",x4-y4);
    y4-=2;
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to move back to the exercise menu");
getch();
goto exoMenu;
}
}



}
}
}
