
#include <iostream>
#include <iomanip>
using namespace std;
float findpercentage(const int marks[5], int sc)
{
	int tot=0;
	for(int i=0;i<sc;i++)
	{
		tot=tot+marks[i];
       // marks[i]=tot; // By mistake - will generate an error message, coz it is decl as const
	}
	return tot/float(sc);
}
void display(int m[])
{
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<m[i];
    }
}
int main()
{
	int m[5];

	cout<<endl<<"Enter the marks in 5 subjects: ";
	for(int i=0;i<5;i++)
	{
		cin>>m[i];
	}

	float per=findpercentage(m,5);
	cout<<endl<<"Marks: ";
	display(m);
	cout<<endl<<"Percentage is: "<<per;

	return 0;
}
