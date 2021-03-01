#include <iostream>
#include <fstream>
using namespace std;

void operacja()
{
int t[21][21];
int suma_jedynek=0;
int poprawny_bit;

fstream plik("dane_obrazki.txt");
for (int i=0; i<20; i++)
{
   for (int j=0; j<20; j++)
  {
       plik>>t[21][21];
  }
}
for (int i=0; i<20; i++)
{ 
   for (int j=0; j<20; j++)
  { 
       if(t[i][j]==1)
       {
       	t[i][j]>>suma_jedynek; 
	   }
  }
}
for(int i=0;i<20;i++)
{
	for(int j=0;j<20;j++)
	{
		cout <<t[i][j]<<endl;
	}
}


}
int main() 
{
	operacja();
	return 0;
}
