#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int m[5]= {0,0,0,0,0};
//m[0] = marks for history
//m[1] = marks for literature
//m[2] = marks for astrology
//m[3]= marks for current affairs
int z[5]= {0,0,0,0,0};
char name[200];
void marks();
void main ()
{ printf ("\n\n\t\tWELCOME TO OUR MIXED BAG QUIZ \n\n"); printf("PLEASE ENTER YOUR NAME : \n");
gets(name);
printf("\n*************************************** \n"); printf("Hello %s ! Hope you are doing well.\n",name);
printf("LET'S GET STARTED WITH THE RULES OF THE QUIZ \n" ); printf("************************************* \n");
printf ("1. THERE ARE 4 CATEGORIES THAT YOU CAN PLAY NAMELY, \n");
printf(" **HISTORY \n **LITERATURE \n **ASTROLOGY \n **CURRENT AFFAIRS \n");
printf ("2. EACH CATEGORY HAS 3 QUESTIONS\n3. EACH QUESTION IS OF 5 POINTS\n4. EVERY  CORRECT ANSWER GIVES YOU 5 POINTS IF AND ONLY IF YOU ANSWER IN STIPULATED TIME i.e 20  SECONDS :) OTHERWISE YOU GET ONLY 2 MARKS IF YOU GIVE CORRECT ANSWER AFTER  TIMEOUT\n");
printf ("AND EVERY INCORRECT ANSWER WILL GIVE YOU 0 POINTS\n5. ALL ARE SINGLE CORRECT  QUESTIONS\n");
printf("************************************* \n");
printf ("YOU CAN PLAY EACH CATEGORY ONLY ONCE AND THE FINAL POINTS WILL BE DISPLAYED IN  THE END\n");
printf("************************************* \n");
printf("************************************* \n");
printf ("\t\t %s ALL THE BEST :-)\n",name);
int sum=0,n;
ques();
printf ("YOUR POINTS IN DIFFERENT CATEGORIES ARE : \n");
marks();
 printf("\t HOPE YOU ENJOYED IT!!\n");
 printf("\t THANK YOU FOR PARTICIPATING!!");
}
int ques()
{
 int n1;
 clock_t t;
do
{
 int choice;
 char ans;

printf("************************************* \n");
printf("Here are the different categaries :");
printf ("\nPRESS 1 FOR HISTORY \nPRESS 2 FOR LITERATURE\nPRESS 3 FOR ASTROLOGY\nPRESS 4  FOR CURRENT AFFAIRS\n");
scanf("%d",&choice) ;
int o=0;
while(o==0)
{
if (z[choice]==1)
{ printf("NOOOO! You have already played this category please select any other Category!!\n"); scanf(" %d",&choice) ;
o=0;}
else
{break;}
}
printf("############################################################################ ##########################################\n");
switch(choice)
{ printf("in switch\n");

 case 1: //for history
 {
 z[1]=1;

 printf ("\n\nQ1: Adolf Hitler died in:\n");
 printf ("A: 1939\nB: 1945\nC: 1947\nD: 1845\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 double time_taken = ((double)t)/CLOCKS_PER_SEC; // calculate the elapsed time  printf("You took %.2f seconds to answer.\n", time_taken);
 if(ans=='B'|| ans=='b')
 {if(time_taken<20.00)
 { printf ("\nWell DONE! your answer is CORRECT!!\n Great you have anwered Real quick !!");  m[0]+=5;
 }
else
 { printf ("KUDOS %s Your answer is CORRECT!!,But OOppss you were too slow.",name);  m[0]+=2;
 }
 }
 else
 {printf ("Sorry your answer is wrong, correct ans is B");
 }
 printf ("\n\nQ2: Which one of the following four vedas contains an account of magical charms and  spells : \n");
 printf ("A: Rigaveda\nB: Samaveda\nC: Yajurveda\nD: Atharvaveda\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
 if (ans=='D'|| ans=='d')
 {if(time_taken<20.00)
 { printf ("Yayy your answer is CORRECT!!\nand you were really fast !!");
 m[0]+=5;
 }
 else
 { printf ("Yayy your answer is CORRECT!!,But you were really slow %s :(",name);  m[0]+=2;
 }
 }
 else
 {printf ("Sorry your answer is wrong, correct ans is D\nStress your brain cells a little more!!");  }
 printf ("\n\nQ3: Mahatma Gandhi's remark , ' A post-dated cheque on a crumbling bank' is  regarding the proposal of __\n");
 printf ("A: Simon Commission\nB: Cripps Mission\nC: Cabinet Mission\nD: Wavel Plan\n");  printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.", time_taken);
 if(ans=='B'|| ans=='b')
 {if(time_taken<20.00)
 { printf ("\nWOAHO your answer is CORRECT!!\nyou were really fast !!");  m[0]+=5;
 }
 else
 { printf ("GOOD %s your answer is CORRECT!!,But you took too long to reply..Hopefully you  did not try to google the answer;)",name);
 m[0]+=2;
 }
}
 else
 {printf ("Sorry your answer is wrong, correct ans is B");
 }
}
 break;
case 2: //for literature
 { z[2]=1;
 printf ("\n\nQ1: What kind of book is a Nebula Award given for?\n");
 printf ("A: Science Fiction\nB: Poetry\nC: Romance\nD: Drama\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 double time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='A'|| ans=='a')
{
if(time_taken<20.00)
 { printf ("\nWOAHO %s your answer is CORRECT!!\nyou were really fast!!",name);  m[1]+=5;
 }
 else
 { printf ("Yayy your answer is CORRECT!!,But you were really slow.SPEED UP OR YOU WILL  LOOSE POINTS.");
 m[1]+=2;
 }
}
else
{
printf ("Sorry %s your answer is wrong, correct ans is A\nStress your brain cells a little more!!",  name);
}
printf ("\n\nQ2: Which historical event does Charles Dickens’ novel A Tale of Two Cities  concern?\n");
printf ("A: The American Revolution\nB: The Chinese Revolution\nC: The Russian Revolution\nD:The  French Revolution\n");
printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='D'|| ans=='d')
 {
 if(time_taken<20.00)
 { printf ("\nKUDOS!! your answer is CORRECT!!\nyou were really fast !!");  m[1]+=5;
 }
 else
 { printf ("GOOD your answer is CORRECT!!,But you took too long to reply..Hopefully you did  not try to google the answer;)");
 m[1]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is D");
}
 printf ("\n\nQ3: Which British novelist created the iconic character James Bond?\n");  printf ("A: Ian Fleming\nB: Alan Moore\nC: James Dashner\nD: J. R. R. Tolkien\n");  printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='A'|| ans=='a')
 {
 if(time_taken<20.00)
 { printf ("\nYayy your answer is CORRECT!!\nyou were really fast !!");
 m[1]+=5;
 }
 else
 { printf ("Yayy your answer is CORRECT!!,but you were really slow.");
 m[1]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is A\nStress your brain cells a little more!!");  } }
break;
case 3: //for astrology
{ z[3]=1;
 printf ("\n\nQ1:Based on observaions of the universal expansion, the age of the universe is  about \n");
 printf ("A: 14,000 years\nB: 14 trillion years \nC: 14 billion years \nD: 14 million years \n ");  printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 double time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='C'|| ans=='c')
 {
 if(time_taken<20.00)
 { printf ("\nYayy %s your answer is CORRECT!!\nyou were really fast !!",name);  m[2]+=5;
 }
 else
 { printf ("Yayy your answer is CORRECT!!,but you were really slow.");
 m[2]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is C.");
 }
 printf ("\n\nQ2:What is the angle between solar plane and galatic plane ? \n");  printf ("A: 0 degree\nB: 60 degree \nC: 30 degree \nD: 45 degree \n ");  printf ("Please enter tscanf he correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='B'|| ans=='b')
 {
 if(time_taken<20.00)
 { printf ("\nYayy your answer is CORRECT!!\nThat was real quick!!");  m[2]+=5;
 }
 else
 { printf ("GOOD %s your answer is CORRECT!!,but your reply was too slow. SPEED  UP!",name);
 m[2]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is B.");
 }
 printf ("\n\nQ3: The point directly over your head is called ___ \n");  printf ("A: the North Star \nB: the meridian \nC: the zenith \nD: the celesial pole \n ");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='C'|| ans=='c')
 {
 if(time_taken<20.00)
 { printf ("\nKUDOS!! %s your answer is CORRECT!!\nyou were really fast !!");  m[2]+=5;
 }
 else
 { printf ("Well Done your answer is CORRECT!!,but you were really slow. SPEED UP!!!");  m[2]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is C\nStress your Brain cells a little more");  }
} break;
case 4: //currunt affair
 { z[4]=1;
 printf ("\n\nQ1: Which country hosted the 2021's BRICS Financial Cooperation Meeting\n");  printf ("A: India\nB: Brazil\nC: China\nD: South Africa\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 double time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='A'|| ans=='a')
 {
 if(time_taken<20.00)
 { printf ("\nWOAHOO your answer is CORRECT!!\nand you answered before the TIMEOUT!!");  m[3]+=5;
 }
 else
 { printf ("Congrats %s your answer is CORRECT!!,But you took too long to reply..Hopefully  you did not try to google the answer ;) ",name);
 m[3]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is A");
 }
 printf ("\n\nQ2: Recently (in Feb'21), Mohamed Bazoum was elected as the President of:\n");  printf ("A: Italy\nB: Georgia\nC: Niger\nD: Guinea\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
if (ans=='C'|| ans=='c')
 {
 if(time_taken<20.00)
 { printf ("\n %s YAYY!! your answer is CORRECT!!\nyou were really fast !!",name);  m[3]+=5;
 }
 else
 { printf ("NICE your answer is CORRECT!!,but OOppss you were really slow.");  m[3]+=2;
 }
 }
else
 {
 printf ("Sorry your answer is wrong, correct ans is C, Strain your brain cells a little more\n");  }
 printf ("\n\nQ3: Which state government announced the creation of separate Department for  Skill Development & Entrepreneurship in ITIs and Polytechnic colleges?\n");
 printf ("A: Kerela\nB: Bihar\nC: Odisha\nD: Tamil Nadu\n");
 printf ("Please enter the correct option\n");
 t = clock();
 scanf (" %c", &ans);
 t = clock() - t;
 time_taken = ((double)t)/CLOCKS_PER_SEC;
 printf("You took %.2f seconds to answer.\n", time_taken);
 if (ans=='B'|| ans=='b')
 {if(time_taken<20.00)
 { printf ("\nYayy your answer is CORRECT!!\nyou were really fast !!");
 m[3]+=5;
 }
 else
 { printf ("WELL DONE your answer is CORRECT!!,but you were really slow.");  m[3]+=2;
 }
 }
 else
 {printf ("Sorry %s your answer is wrong, correct ans is B.Better luck next time.",name);  }
 }
 }
printf ("\n\nPRESS 1 TO CONTINUE PLAYING OR PRESS ZERO TO EXIT THE QUIZ AND DISPLAY YOUR  SCORE : \n");
 scanf ("%d",&n1);
 if (z[1]==1&&z[2]==1&&z[3]==1&&z[4]==1)
{printf ("WOAHH! YOU HAVE PLAYED ALL CATEGORIES!! SEEMS LIKE YOU LOVED PLAYING OUR  QUIZ!!\n");
break;}

}
while(n1!=0);
}
//Method to calculate marks.
void marks()
{int sum=0,i,sumcate=0,totalmark=0;
double percentage=0;
char *topic[4];
for(i=0;i<4;i++)
{
 topic[i] = malloc(30);
}
topic[0]="History";
topic[1]="Literature";
topic[2]="Astrology";
topic[3]="Current Affairs";
for (i=0;i<4;i++)
 {printf("%s : %d", topic[i], m[i]);
 printf("\n");
 }
 for (i=0;i<5;i++)
 {
 sum= sum+m[i];
 sumcate=sumcate+z[i];
 }
 totalmark=sumcate*15;
 printf ("%s YOUR TOTAL SCORE IS : %d out of %d\n\n",name, sum,totalmark);  percentage=(sum*100)/totalmark;
 if(percentage>60.00)
 { printf ("YOU SCORED MORE THAN 60 PERCENT IN THE CATEGORIES YOU PLAYED THEN  CONGRATS YOU ARE IN THE TOP 40 PERCENTILE OF THE PARTICIPANTS.\n");
}
else
 { printf ("OOPS! YOU COULDN'T SCORE MORE THAN 60 PERCENTILE,YEAH THIS QUIZ IS NOT THAT  EASY :) \n THEN NO NEED TO FEEL DISCOURAGED THERE'S ALWAYS WAYS TO IMPROVE YOURSELF!  KEEP PRACTISING\n");
}
}
