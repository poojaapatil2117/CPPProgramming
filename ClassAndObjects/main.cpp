/*
// we have store the information of bank account
// lets use the structure

#include <iostream>  //using STructure:
//#include<cstdio>

using namespace std;

struct bankAccount
{
    char nm[20];
    int age;
    char pass[30];
};
int main()
{
    struct bankAccount B;
    cout<<endl<<"Enter the account Holder name"<<endl;
    cin.getline(B.nm,40);

    cout<<endl<<"Enter The age of Account Holde"<<endl;
    cin>>B.age;
    fflush(stdin);
    cout<<endl<<"Enter The PassWord Of accout "<<endl;
    cin.getline(B.pass,30);

    cout<<endl<<"The account Holder name = "<<B.nm<<endl<<"The Age = "<<B.age<<endl<<"the Pass = "<<B.pass<<endl;
    return 0;
}
*/
//----------------------------------------------------------------------------------------
/*
 Due to several different advantages, we will prefer functions(Modular Approch)

#include<iostream>
using namespace std;

struct student
{
    char name[40];
    int RollNo;
    char address[40];
    int standerd;
};

void input(struct student& a)
{
    fflush(stdin);
    cout<<endl<<"Enter Student Name"<<endl;
    cin.getline(a.name,50);

    cout<<endl<<"Enter Student Roll No "<<endl;
    cin>>a.RollNo;

    fflush(stdin);

    cout<<endl<<"Enter Student Address "<<endl;
    cin.getline(a.address,90);

    cout<<endl<<"Enter The Student standered"<<endl;
    cin>>a.standerd;

}
void display(struct student a)
{
    cout<<endl<<"Name = "<<a.name<<"\tRollNo = "<<a.RollNo<<"\tAddress = "<<a.address<<"\tstanderd = "<<a.standerd<<endl;
}
int main()
{
    struct student one;
    struct student two;
    struct student three;

    input(one);
    display(one);

    input(two);
    display(two);

    input(three);
    display(three);
    return 0;
}
*/
//==========================================================================================
/*
In above case as the account data b, moving from function to fuction and every
function able to access it. the account data is not secure.

to attend the security to data lets use the class


#include<iostream>
using namespace std;

class BankAcc
{
    private:

        char name[45];
        int age ;
        char pass[45];

    public:
        void input()
        {
            cout<<endl<<"Enter Account Holder name "<<endl;
            cin.getline(name,45);

            cout<<endl<<"Enter Account Holder age "<<endl;
            cin>>age;

            fflush(stdin);

            cout<<endl<<"Enter Account Password "<<endl;
            cin.getline(pass,45);
        }
        void display()
        {
            cout<<endl<<"name = "<<name<<"\tAge = "<<age<<"\tPassword = "<<pass<<endl;
        }

};

int main()
{
    BankAcc s1;
    BankAcc s2;


    s1.input();
    s1.display();

    s2.input();
    s2.display();

    return 0;
}
*/
//=======================================================================================
/*
 Defining the member functions outside of class.

#include<iostream>
#include<cstdio>
using namespace std;

class bankacc
{

    private:
        char name[45];
        int age;
        char pass[45];

    public:
        void input();
        void display();
};
void  bankacc::input()
{
    cout<<endl<<"Enter Name"<<endl;
    cin.getline(name,45);

    cout<<endl<<"Enter Age"<<endl;
    cin>>age;

    fflush(stdin);

    cout<<endl<<"Enter Password"<<endl;
    cin.getline(pass,45);
}
void bankacc::display()
{
    cout<<endl<<"name = "<<name<<"\t Age = "<<age<<"\t Password = "<<pass;
}
int main()
{
    bankacc b1;
    bankacc b2;

    b1.input();
    b1.display();

    b2.input();
    b2.display();
    return 0;
}
*/

//========================================================================
/*
 Passing the arguments to member function

#include<iostream>
#include<string.h>
using namespace std;

class BankAcc
{
    char nm[45];
    int accno;
    char pass[45];

    public:
        void input(char a1[],int a2,char a3[])
        {
            strcpy(nm,a1);
            accno=a2;
            strcpy(pass,a3);
        }
        void display()
        {
            cout<<endl<<"name = "<<nm<<"\tAccNum = "<<accno<<"\tPassword = "<<pass;
        }
};

int main()
{
    BankAcc b1;
    b1.input("pooja",1234,"pooja123");
    b1.display();



    char nm1[45],pass1[45];
    int accno1;

    cout<<endl<<"Enter Name"<<endl;
    cin.getline(nm1,40);

    cout<<endl<<"Enter accNo"<<endl;
    cin>>accno1;

    fflush(stdin);

    cout<<endl<<"Enter Password"<<endl;
    cin.getline(pass1,40);


    BankAcc b2;
    b2.input(nm1,accno1,pass1);
    b2.display();

    return 0;

}
*/
//==========================================================================
/*

 Using function overloading within class

#include<iostream>
#include<string.h>
using namespace std;

class bankAcc
{
    char nm[45];
    int accno;
    char pass[45];

    public:

        void input()
        {
            cout<<"Enter Name"<<endl;
            cin.getline(nm,40);

            cout<<"Enter accNo"<<endl;
            cin>>accno;

            fflush(stdin);

            cout<<"Enter Pass"<<endl;
            cin.getline(pass,40);
        }

        void input(char a1[],int a2,char a3[])
        {
            strcpy(nm,a1);
            accno=a2;
            strcpy(pass,a3);
        }
        void display()
        {
            cout<<endl<<"Name = "<<nm<<"\tAccNum = "<<accno<<"\tpass ="<<pass;
        }
};
int main()
{
    bankAcc b1;
    b1.input();
    b1.display();

    bankAcc b2;
    b2.input("tusharPatil",1234,"Tushar@123");
    b2.display();

    bankAcc b3;
    b3.input();
    b3.display();

    bankAcc b4;
    b4.input("virat",18,"virat@123");
    b4.display();

    return 0;
}
*/
//==============================================================================================================
/// Defining out own class "Number"

/*
#include<iostream>
using namespace std;
class Number
{
    int num;

    public:

        void set()
        {
            cout<<endl<<"Enter Your Number:"<<endl;
            cin>>num;
        }
        void display()
        {
            cout<<endl<<"Number = "<<num;
        }

};

int main()
{
    Number n1;
    n1.set();
    n1.display();
    return 0;
}
*/

//================================================================================================
/// Processing Number object
/*
#include<iostream>
using namespace std;

class Number
{
    int num;

    public:
        void set()
        {
            cout<<endl<<"Enter Your Number:"<<endl;
            cin>>num;
        }
        void display()
        {
            cout<<endl<<"The Number = "<<num;
        }
        void isEvenOdd()
        {
            if(num%2==0)
            {
                cout<<endl<<"The Number Is Even"<<endl;
            }
            else
            {
                cout<<endl<<"Number Is Odd"<<endl;
            }
        }
        void IsPositiveOrNegative()
        {
            if(num>0)
            {
                cout<<endl<<"The Number Is Positive(+)"<<endl;
            }
            else if(num<0)
            {
                cout<<endl<<"The Number Is Negative(-)"<<endl;
            }
            else
            {
                cout<<endl<<"Number is Zero"<<endl;
            }
        }

};

int main()
{
    Number n1;

    n1.set();
    n1.display();

    cout<<endl<<"------EVEN ODD CHEAK----";
    n1.isEvenOdd();

    cout<<endl<<"-----FOR POSITIVE NEGATIVE OR ZERO----";
    n1.IsPositiveOrNegative();

    return 0;
}
*/
//================================================================================================

/// Passing argument to member function and returning the value from member function
/*

#include<iostream>
using namespace std;

class Number
{
    int num;

    public:
        void set()
        {
            cout<<endl<<"Enter Your Number:"<<endl;
            cin>>num;
        }
        void set(int t)
        {
            num=t;
        }
        void display()
        {
            cout<<endl<<"The Number = "<<num;
        }
        int get()
        {
            return num;
        }
        void isEvenOdd()
        {
            if(num%2==0)
            {
                cout<<endl<<"The Number Is Even"<<endl;
            }
            else
            {
                cout<<endl<<"Number Is Odd"<<endl;
            }
        }
        void IsPositiveOrNegative()
        {
            if(num>0)
            {
                cout<<endl<<"The Number Is Positive(+)"<<endl;
            }
            else if(num<0)
            {
                cout<<endl<<"The Number Is Negative(-)"<<endl;
            }
            else
            {
                cout<<endl<<"Number is Zero"<<endl;
            }
        }

        int getRevere()
        {
            int no=num;
            int r=0;
            while(no!=0)
            {
                r=(r*10)+(no%10);
                no=no/10;
            }
            return r;
        }


        //void getRevere()
        //{
          //  int no=num;
            //int r=0;
            //while(no!=0)
            //{
              //  r=(r*10)+(no%10);
              //  no=no/10;
            //}
            //cout<<endl<<"The Revers = "<<r;
        //}

        char* ispalindrom()
        {
            if(num==getRevere())
            {
                return "Palindrom";
            }
            else
            {
                return "Not-Palindrom";
            }
        }

};

int main()
{
    Number n1;
    n1.set();
    n1.display();


   // int rev=n1.getRevere();
    //cout<<endl<<"The Revers = "<<rev;

    cout<<endl<<"------EVEN ODD CHEAK----";
    n1.isEvenOdd();

    cout<<endl<<"-----FOR POSITIVE NEGATIVE OR ZERO----";
    n1.IsPositiveOrNegative();


    Number n2;
    n2.set();
    n2.display();
    n2.getRevere();
    cout<<endl<<"Is N2 Is palindrom "<<n2.ispalindrom();


    cout<<endl<<"for Passing value In function";
    n2.set(23);
    n2.isEvenOdd();

    cout<<endl<<"the Value of N2 is"<<n2.get();

    return 0;
}
*/
//================================================================================

/// Defining the private function within a class.

/*
#include<iostream>
using namespace std;

class result
{
    private:
        int sub1;
        int sub2;
        int sub3;

        void getresult()
        {
            if(sub1>40 && sub2>40 && sub3>40)
            {
                cout<<endl<<"Pass With Avg:"<<(sub1+sub2+sub3)/3;
            }
            else
            {
                cout<<endl<<"Fail";
            }
        }

    public :
        void input()
        {
            cout<<endl<<"Enter Subject marks";
            cin>>sub1>>sub2>>sub3;
        }
        void display()
        {
            cout<<endl<<sub1<<"\t"<<sub2<<"\t"<<sub3;
            getresult();
        }
};
int main()
{
    result r1;
    r1.input();
    r1.display();

    return 0;
}
*/
//=================================================================================
/// Using Array as a member of class
/*
#include<iostream>
#include<iomanip>
using namespace std;

class result
{
    private:
        int marks[5];
    public:
        void input()
        {
            cout<<endl<<"Enter An array Elements";
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
        }
        void display()
        {
            cout<<endl<<"Display The Elements:";
            for(int i=0;i<5;i++)
            {
                cout<<setw(10)<<marks[i];
            }
        }
        void showResult()
        {
            int flg=0,i,tot=0;
            float per;
            for(i=0;i<5;i++)
            {
                if(marks[i]<40)
                {
                    flg=1;
                    break;
                }
                tot=tot+marks[i];
            }
            if(flg==0)
            {
                per=tot/5.0;
                cout<<endl<<"pass With Per ="<<per;
            }
            else
            {
                cout<<endl<<"fail";
            }
        }
};
int main()
{

    result r1;
    r1.input();
    r1.display();
    r1.showResult();

}
*/
//===============================================================================
/*

 WAP to define folowing class and create object and perform different operations

#include<iostream>
using namespace std;
#include<iomanip>
class myarray
{
    private:
        int arr[5];

    public:
        void input();
        void display();
        void sorting();
        void binarySearch();
        int getEven();
        int getEvenDisplay();
        int getOddDisplay();
        int findOccurance();
};

void myarray::input()
{
    cout<<endl<<"Enter an array Elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}

void myarray::display()
{
    for(int i=0;i<5;i++)
    {
        cout<<setw(6)<<arr[i];
    }
    cout<<endl;
}
void myarray::sorting()
{
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<endl<<"Display Elements After Sorting";
    display();

}
void myarray::binarySearch()
{
    sorting();
    int num,start=0,end=5,mid,flag=0;
    cout<<endl<<"Enter your Number you want to Search";
    cin>>num;

    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==num)
        {
            flag=1;
            break;
        }
        else if(num<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(flag==1)
    {
        cout<<endl<<" The Element "<<num<<" Found at "<<mid+1<<" postion";
    }
    else
    {
        cout<<endl<<"Number Is Not Present In Array";
    }

}
int myarray::getEven()
{
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
           cnt++;
        }
    }
    return cnt;
}
int myarray::getEvenDisplay()
{
    cout<<endl<<"Even Numbers Are:";
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<setw(6)<<arr[i];
        }
    }
}
int myarray::getOddDisplay()
{
    cout<<endl<<"Odd Numbers Are:";
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<setw(6)<<arr[i];
        }
    }
}
int myarray::findOccurance()
{
    int num,cnt=0,flag=0;
    cout<<endl<<"Enter Your Number You Want To find occ Of that Num";
    cin>>num;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            cnt++;
        }
    }
    return cnt;

}

int main()
{
    myarray a1;
    a1.input();
    a1.display();

    a1.sorting();
    a1.binarySearch();

    int count=a1.getEven();
    cout<<endl<<"Even Numbers count :"<<count<<endl;


    a1.getEvenDisplay();
    a1.getOddDisplay();

    int Occurance=a1.findOccurance();
    cout<<endl<<" The Number Occured in array "<<Occurance<<" Times";

    return 0;
}
*/
//================================================================================
/*
class Box
{
    private:
	int length;
	int width;
	int height;

    public:
	void in(); // allowed to modify the prototype
	void out();
	int getlength();
	int getwidth();
	int getheight();
	int setlength(int);
	int setwidth(int);
	int setheight(int);
	int volume();
};


#include<iostream>
using namespace std;

class Box
{
    private:
        int len;
        int wid;
        int height;
    public:
        int getLeng()
        {
            cout<<endl<<"Enter The Legth";
            cin>>len;
        }
        int getWidth()
        {
            cout<<endl<<"Enter The Width";
            cin>>wid;

        }
        int getheight()
        {
            cout<<endl<<"Enter The Height";
            cin>>height;
        }
        int setLeng(int L)
        {
            len=L;
        }
        int setWidth(int w)
        {
             wid=w;

        }
        int setheight(int H)
        {
            height=H;
        }
};
int main()
{
    Box b1;
    b1.getLeng();
    b1.getWidth();
    b1.getheight();
    b1.setLeng(1);
    b1.setWidth(2);
    b1.setheight(3);

    return 0;
}
*/
//================================================================================
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
*/
//======================================================================================================
/*
#include<iostream>
using namespace std;

class distance
{
    private:
        double val;
    public:
        void set()


        double get();
        void show();
        double tocentimeter();
        double getfeet();
        void ininches();

};
int main()
{
    return 0;
}
*/
//========================================================================================================

/*// Using static function with is class.

#include<iostream>
using  namespace std;

class Number
{
    public:

        static int getRevers(int no)
        {
            int rev=0;
            while(no!=0)
            {
                rev=(rev*10)+(no%10);
                no=no/10;
            }
            return rev;
        }

};

int main()
{
    int num;
    cout<<endl<<"Enter Your Number:";
    cin>>num;

    int r=Number::getRevers(num);
    cout<<endl<<" The Reverse of: "<<num<<" is "<<r;

    return 0;
}
*/
//=============================================================================================
/*

 another example of Copy Array

#include<iostream>
using namespace std;
#include<iomanip>
class Array
{
    public :

        static void CopyArray(int x[],int y[])
        {
            for(int i=0;i<5;i++)
            {
                y[i]=x[i];
            }
        }

};

int main()
{
    int arr[]={1,2,3,4,5};
    int arr1[5];

    cout<<endl<<"Original Array:";
    for(int i=0;i<5;i++)
    {
        cout<<setw(7)<<arr[i];
    }


    Array::CopyArray(arr,arr1);


    cout<<endl<<"Copied Array:";
    for(int i=0;i<5;i++)
    {
        cout<<setw(7)<<arr1[i];
    }

    return 0;
}
*/
//==========================================================================================================
// static data member:
#include<iostream>
using namespace std;

class Item
{
    private:
        int ic;
        float iPr;
        static float tot;

    public:
        void in()
        {
            cout<<endl<<"Enter The Item Number:";
            cin>>ic;

            cout<<endl<<"Enter The item Prise:";
            cin>>iPr;

            tot=tot+iPr;
        }
        void out()
        {
            cout<<endl<<" Item Number "<<ic<<" Item Prise "<<iPr;
        }

        void display()
        {
            cout<<endl<<"The Tot = "<<tot;
        }

};
float Item::tot;

int main()
{
    Item a1,a2,a3,a4;

    a1.in();
    a2.in();
    a3.in();
    a4.in();

    a1.out();
    a2.out();
    a3.out();
    a4.out();

    a1.display(); //a2.display() Or a3.display() or a3.display()

    return 0;
}









