#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
struct t
{
int arrivaltime;
};
int sequencecounter,firstcome,iterativesc=0, iterativefc= 0;
int z,mc1=0,mc2=0,mc=0;

void program(struct t v1[],struct t v2[])
{
struct t
f[firstcome],s[sequencecounter],m[sequencecounter+firstcome];
for(z=0;z<sequencecounter;z++)
{
s[z]=v2[z];
}
for(z=0;z<firstcome;z++)
{
f[z]=v1[z];
}
if( firstcome!=0 && sequencecounter!=0)
{
while(iterativesc<sequencecounter && iterativefc<firstcome)
{
if(f[iterativefc].arrivaltime == s[iterativesc].arrivaltime)
{
m[mc1] = f[iterativefc];
printf("Faculty %d will issue the book\n",mc1+1);
mc1++;
mc++;
iterativefc++;
m[mc2]= s[iterativesc];
printf("Student %d will issue the book\n",mc2+1);
mc2++;
iterativesc++;
mc++;
}
else if(f[iterativefc].arrivaltime < s[iterativesc].arrivaltime)
{
m[mc1]= f[iterativefc];
printf("Faculty %d will issue the book\n",mc1+1);
mc1++;
iterativefc++;
mc++;

}
else if(f[iterativefc].arrivaltime > s[iterativesc].arrivaltime)
{
m[mc2]= s[iterativesc];
printf("Student %d will issue the book\n",mc2+1);
mc2++;
mc++;
iterativesc++;
}
else;
}
if(mc != (firstcome+sequencecounter))
{
if(firstcome!=iterativefc)
{
while(iterativefc!=firstcome)
{
m[mc1]= f[iterativefc];
printf("Faculty %d will issue the book\n",mc1+1);
mc1++;
mc++;
iterativefc++;
}
}
else if(sequencecounter!=iterativesc)
{
while(iterativesc!=sequencecounter)
{
m[mc2]= s[iterativesc];
printf("Student %d will issue the book\n",mc2+1);
mc2++;
mc++;
iterativesc++;
}
}
}

}
else if(firstcome==0)
{
while(iterativesc!=sequencecounter)
{
m[mc2]= s[iterativesc];
printf("Student %d issued the book\n",mc2+1);
mc2++;
mc++;
iterativesc++;
}
}
else if(sequencecounter==0)
{
while(iterativefc!=firstcome)
{
m[mc1]= f[iterativefc];
printf("Faculty %d issued the book\n",mc1+1);
mc1++;
mc++;
iterativefc++;
}}}
main()
{
printf(" students.... : ");
scanf("%d",&sequencecounter);
printf("faculty......: ");
scanf("%d",&firstcome);
struct t fac[firstcome],std[sequencecounter];
printf("\n");
for(z=0;z<sequencecounter;z++)
{
printf("arrival time(student)%d = ",z+1);
scanf("%d",&std[z].arrivaltime);
}
for(z=0;z<firstcome;z++)

{
printf("Enter arrival time(faculty) %d = ",z+1);
scanf("%d",&fac[z].arrivaltime);
}
program(fac,std);
}
