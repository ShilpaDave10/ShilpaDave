#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
int t[2];
int n,y,z;
//pen paper questinpaper
char Array[3] = {1,2,3};
int main()
{
printf("\t\t\t\t\tSHARING ALGORITHM......");
while(z>0)
{
for(y=1;y<3;y++)
{
t[y] = Array[rand()%3];
}
if(t[1]==1 && t[2]==2)
{
printf("faculty provide: pen & paper to student who having questionpaper with him.");
Sleep(2);
}
else if(t[1]==2 && t[2]==3)
{
printf("\nTeacher Provide :paper & question paper to student whohaving pen with him.");
Sleep(2);
}
else if(t[1]==1 && t[2]==3)
{
printf("\nTeacher Provide :pen & question paper to student whohaving paper with him.");

Sleep(2);
}
else if(t[1]==2 && t[2]==1)
{
printf("\nTeacher Provide :paper & pen to student who is havingquestion paper with him");
Sleep(2);
}
else if(t[1]==3 && t[2]==2)
{
printf("\nTeacher Provide :question paper & paper to student who ishaving pen with him.");
Sleep(2);
}
else if(t[1]==3 && t[2]==1)
{
printf("\nTeacher Provide :-question paper & pen to student who ishaving paper with him");
Sleep(2);
}
}
// return 0;
}


