#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bloodbank
{
char name[500];
int age[500];
char add[500];
char email[500];
int mobileno[500];
char bloodgr[500];
char gender[500];

void outputdata()
{
cout<<"Name"<<name;
cout<<"Age"<<age;
cout<<"Address"<<add;
cout<<"emailID"<<email;
cout<<"Mobile"<<mobileno;
cout<<"Blood group"<<bloodgr;
cout<<"Gender"<<gender;
}
void inputdata()
{
cout<<"Enter Name,Age,Address,EmailID,Mobile,BloodGroup,Gender";
cin>>name>>age>>add>>email>>mobileno>>bloodgr>>gender;
}
};

int main()
{
int n,t;
bloodbank bb[100];
cout<<"\n Enter number of doners:";
cin>> n;
for(int i =0;i<=n;i++)
{
bb[i].inputdata();
}
for(int j =0;j<=n;j++)
{
bb[j].outputdata();
}
cout<<"\n Filter options are: 1. blood group.\n 2. mobile \n 3. emailid \n";
cin>>t;
if(t==1)
{
int a ;
cout <<"\n Enter the age:";
cin>> a;
for(int s = 0;s<=n;s++)
{
if(bb[s].age==a)
{
bb[s].outputdata();
}
}
else if(t==2)
{
int a ;
cout <<"\n Enter the mobile:";
cin>> a;
for(int s = 0;s<=n;s++)
{
if(bb[s].mobile==a)
{
bb[s].outputdata();
}
}
else if(t==3)
{
int a ;
cout <<"\n Enter the email:";
cin>> a;
for(int s = 0;s<=n;s++)
{
if(bb[s].email==a)
{
bb[s].outputdata();
}
}
else
{
}
getch();
return 0;
}












