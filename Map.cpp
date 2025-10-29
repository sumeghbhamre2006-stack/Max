/*Implement a map associative container in which the keys
will be the Permanent Registration Number (PRN) of the students and the values will be
the name of the respective student. Develop a program that prompts the user for PRN
and then it looks in the map, using the PRN as an index and returns the name of the
student.*/


#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<int,string> mapType;
mapType prnMap;
mapType::iterator iter;
int choice,prn,n;
string name;
cout<<"*** Student PRN System ***\n";
while(true)
{
cout<<"\n1.Add Students\n2.Display All\n3.Search Student\n4.Delete Student\n5.Clear All\n6.Exit\nEnter your choice:";
cin>>choice;
if(choice==1)
{
cout<<"\nEnter number of students to add:";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\nEnter PRN of student "<<i+1<<":";
cin>>prn;
cout<<"Enter name of student "<<i+1<<":";
cin>>name;
prnMap.insert(pair<int,string>(prn,name));
}
cout<<"Records added successfully.\n";
}
else if(choice==2)
{
if(prnMap.empty())
cout<<"No records to display.\n";
else
{
cout<<"\n*** Student PRN List ***\n";
for(iter=prnMap.begin();iter!=prnMap.end();iter++)
cout<<iter->first<<":"<<iter->second<<"\n";
cout<<"Total students:"<<prnMap.size()<<"\n";
}
}
else if(choice==3)
{
if(prnMap.empty())
cout<<"No records found.\n";
else
{
cout<<"\nEnter PRN to search:";
cin>>prn;
iter=prnMap.find(prn);
if(iter!=prnMap.end())
cout<<prn<<"'s name is "<<iter->second<<"\n";
else
cout<<"PRN not found.\n";
}
}
else if(choice==4)
{
if(prnMap.empty())
cout<<"Map is empty. No records to delete.\n";
else
{
cout<<"\nEnter PRN to delete:";
cin>>prn;
int erased=prnMap.erase(prn);
if(erased)
cout<<"PRN "<<prn<<" deleted successfully.\n";
else
cout<<"PRN not found.\n";
}
}
else if(choice==5)
{
prnMap.clear();
cout<<"All records cleared.\n";
}
else if(choice==6)
{
cout<<"Exiting program...\n";
break;
}
else
cout<<"Invalid choice.\n";
}
return 0;
}
