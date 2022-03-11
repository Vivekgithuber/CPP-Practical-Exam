#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class student
{
   public:
   int Rollno,Year;
   char Name[20];
   char Class[20];
   double TotalMarks;
   void getinpt()
   {
     cout<<"Enter student details:- "<<endl;
     cout<<"\nEnter student roll number: ";
   cin>>Rollno;
   cout<<"Enter year: ";
   cin>>Year;
   cout<<"Enter name: ";
   cin>>Name;
   cout<<"Enter class: ";
   cin>>Class;
   cout<<"Enter total marks: ";
   cin>>TotalMarks;
   }
};
int main()
{  
student s1[5];
   char ch;
   for(int i=0;i<3;i++)
   s1[i].getinpt();
   ofstream f1;
   f1.open("student.txt");
   if(!f1)
   { 
     cout<<"Error in file!!!";
   exit(100);
   }
   for(int i=0;i<3;i++)
   {
     f1<<setw(5)<<s1[i].Rollno;
   f1<<setw(5)<<s1[i].Name;
   f1<<setw(5)<<s1[i].Class;
   f1<<setw(5)<<s1[i].Year;
   f1<<setw(5)<<s1[i].TotalMarks<<endl;
   }
   f1.close();
   ifstream f2;
   f2.open("student.txt");
     cout<<ch;
   
   return 0;
}




