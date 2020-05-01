#include<iostream.h>
#include<fstream.h>
int main()
{
ofstream fout("item");
cout<<"enter item name:";
char name[30];
fout<<name<<"\n";
cout<<"enter item cost:";
float cost;
cin>>cost;
fout<<cost<<"\n";
fout.close();
ifstream fin("item");
fin>>name;
fin>>cost;
cout<<"\n";
cout<<"item name:"<<name<<"\n";
cout<<"item cost:"<<cost<<"\n";
fin.close();
return 0;
}
