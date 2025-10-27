/*Develop a system that defines inventory class with suitable data members and  
member functions. Perform read and write operations using class objects.*/  
#include <iostream>  
#include <fstream>  
#include <string>  
using namespace std;  
class Inventory{  
protected:  
string Name;  
int ID;  
int price;  
int quantity;  
public:  
void accept();  
void display();  
};  
void Inventory::accept(){  
cout<<"Enter Name of Product:";  
cin>>Name;  
cout<<"Enter ID of Product:";  
cin>>ID;  
cout<<"Enter Price of Product:";  
cin>>price;  
cout<<"Enter Quantity of Product:";  
cin>>quantity;  
};  
void Inventory::display(){  
cout<<"---------------------------------------------------"<<endl;
cout<<"Name of Product is:"<<Name<<endl;  
cout<<"ID of Product is:"<<ID<<endl;  
cout<<"Price of Product is:"<<price<<endl;  
cout<<"Quantity of Product is:"<<quantity<<endl;  
cout<<"---------------------------------------------------"<<endl;
};  
int main(){  
fstream file_ob;  
int siz;  
cout<<"Enter Number of Entries:";  
cin>>siz;  
Inventory I1[siz];  
file_ob.open("Inven.txt",ios::out|ios::binary);  
for(int i=0;i<siz;i++){  
I1[i].accept();  
file_ob.write((char *) &I1[i],sizeof(Inventory));  
}  
file_ob.close();  
Inventory I2[siz];  
file_ob.open("Inven.txt",ios::in|ios::binary);  
for(int i=0;i<siz;i++){  
file_ob.read((char *) &I2[i],sizeof(Inventory));  
I2[i].display();  
}  
file_ob.close();  
return 0;  
};  
