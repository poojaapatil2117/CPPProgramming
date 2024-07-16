/*
#include <iostream>
#include <iomanip>
using namespace std;
float findpercentage(const int marks[5], int sc)
{
	int tot=0;
	for(int i=0;i<sc;i++)
	{
		tot=tot+marks[i];
         marks[i]=tot; // By mistake - will generate an error message, coz it is decl as const
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
*/
//====================================================
/*
#include <iostream>
using namespace std;

void add(double a, double b)
{
	cout<<endl<<"Addition 1 is: "<<(a+b+c);
}
void add(float a, float b)
{
	cout<<endl<<"Addition 2 is: "<<(a+b);
}

int main()
{
	int x,y;
	cout<<endl<<"Enter two int values: ";
	cin>>x>>y;
	add(34.567,4657.567); // x and y is promoted to float


	float p,q;
	cout<<endl<<"Enter two float values: ";
	cin>>p>>q;
	add(4.5,6.56);

	return 0;
}
*/
//======================================================
/*
#include<iostream>
using namespace std;
struct BankAccount
{
	char nm[40];
	int accno;
	char pass[20];
};
void input(struct BankAccount &t)
{
    fflush(stdin);
	cout<<endl<<"enter the account holder name: ";
	cin.getline(t.nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>t.accno;

    fflush(stdin);
	cout<<endl<<"enter the account password: ";
	cin.getline(t.pass,40);
}
void display(struct BankAccount k)
{
	cout<<endl<<"Name: "<<k.nm<<"\t Account Number: "<<k.accno<<"\t Password: "<<k.pass;
}
int main()
{
	struct BankAccount b;

	input(b);
	display(b);

	return 0;
}
*/
//==============================================================================
/*
#include<iostream>
using namespace std;
class BankAccount
{
    private:
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input();
	void display();
};
void BankAccount::input()
{
    fflush(stdin);
	cout<<endl<<"enter the account holder name: ";
	cin.getline(nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>accno;
    fflush(stdin);
	cout<<endl<<"enter the account password: ";
	cin.getline(pass,40);

}
void BankAccount::display()
{
	cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
}
int main()
{
	BankAccount b1;
	b1.input();
	b1.display();

	BankAccount b2;
	b2.input();
	b2.display();

	return 0;
}

//======================================================

#include<iostream>
using namespace std;
class BankAccount
{
    private:
	char nm[40];
	int accno;
	char pass[20];
    public:
	void input();
	void display();
};
void BankAccount::input()
{
    fflush(stdin);
	cout<<endl<<"enter the account holder name: ";
	cin.getline(nm,40);
	cout<<endl<<"enter the account number: ";
	cin>>accno;
    fflush(stdin);
	cout<<endl<<"enter the account password: ";
	cin.getline(pass,40);
}
void BankAccount::display()
{
	cout<<endl<<"Name: "<<nm<<"\t Account Number: "<<accno<<"\t Password: "<<pass;
}
int main()
{
	BankAccount b1;
	b1.input();
	b1.display();

	BankAccount b2;
	b2.input();
	b2.display();

	return 0;
}
*/
//==========================================================

// Define below mentioned classes with some methods with it
/*
class Distance
{
    private:
	double value;
    public:
	void set();
	double get();
	void show();
	void tocentimeter();
	double getfeet();
	double getmeters();
	void ininches();
};


#include<iostream>
using namespace std;

class Distance
{
    private :
        double value;
    public:
        void set()
        {
            cout<<"Enter Your Value In Inches :";
            cin>>value;
        }
        double get()
        {
            return value;
        }
        void show()
        {
            cout<<"Value = "<<value;
        }
        void toCentiMeter()
        {
            double centimeter = value*2.54;
            cout<<"\ntoCentiMeter = "<<centimeter;
        }
        double GetFeet()
        {
            return (value/12);
        }
        double GetMeter()
        {
            return (value*0.0254);
        }
};

int main()
{
    Distance d;
    d.set();
    double val = d.get();
    d.show();
    d.toCentiMeter();

    double Getfeet = d.GetFeet();
    cout<<"\nGetFeet() = "<<Getfeet;


    double GetMeter = d.GetMeter();
    cout<<"\nGetMeter() = "<<GetMeter;

    return 0;
}
*/
//=======================================================================

//Array Of Object
/*
#include<iostream>
using namespace std;

class StaticVar
{
     char nm[50];
     double per;
    public:
      void input()
      {
          fflush(stdin);
          cout<<"\nEnter The Student Details :";
          cout<<"\nEnter STudent Name:";
          cin.getline(nm,50);
          fflush(stdin);
          cout<<"\nEnter The Per:";
          cin>>per;
      }
      void display()
      {
          cout<<"Name :"<<nm<<"\tId :"<<per;
      }
};
int main()
{
    StaticVar S[5];

    for(int i=0;i<5;i++)
    {
        cout<<"\nStudent :"<<i+1<<" ";
        S[i].input();
    }

    for(int i=0;i<5;i++)
    {
        cout<<"\nStudent :"<<i+1<<" ";
        S[i].display();
    }

    return 0;
}
*/
//=====================================================================

//Object Pass As Argument to function
/*
#include<iostream>
using namespace std;

class time
{
    private:
        int hour,minuts;
    public :
        void SetTime(int h,int m)
        {
            hour=h;
            minuts=m;
        }
};
int main()
{
    return 0;
}

//===============================================

#include<iostream>
using namespace std;

void LocalClass()
{
    class LocalClassExample
    {
        private:
            static int a;
        public :

        void input()
        {
            cout<<"Enter The Number :";
            cin>>a;
        }
        void out()
        {
            cout<<"A = "<<a;
        }
    };
    LocalClassExample localclass ;
    localclass.input();
    localclass.out();
}
int main
{
    LocalClass();
    return 0;
}
*/
//===============================================================






















