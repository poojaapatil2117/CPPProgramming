///Pointer, Virtual function and Polymorphism
/*
#include <iostream>
using namespace std;

int main()
{
    int x=10;
    int *p;
    p=&x;

    cout<<endl<<"The Value Of x:"<<x;
    cout<<endl<<"The value Of p:"<<*p;

    float ft=45.67;
    float *q;
    q=&ft;


    cout<<endl<<"The Value Of ft:"<<ft;
    cout<<endl<<"The value Of Q:"<<*q;

    return 0;
}
*/
//============================================================================================
/// Using pointer to refer array
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[5]={11,22,33,44,55};
    int *p;

    p=arr;
    cout<<endl<<"Array Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<setw(5)<<*(p+i);
    }

    return 0;
}
*/
//=============================================
///Taking Input
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[5];
    int *p;

    p=arr;
    cout<<endl<<"Enter an Array Elements are:";
    for(int i=0;i<5;i++)
    {
        cin>>*(p+i);
    }

    cout<<endl<<"Array Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<setw(5)<<*(p+i);
    }

    return 0;
}
*/
//==================================================================
/// suing pointer arithmatic in above program
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[5];
    int *p;

    p=arr;
    cout<<endl<<"Enter an Array Elements are:";
    for(int i=0;i<5;i++)
    {
        cin>>*p++;
    }

    p=arr;
    cout<<endl<<"Array Elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<setw(5)<<*(p++);
    }

    return 0;
}
*/
//===========================================================
/// Dynamic memory allocation for pointer using "new"
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int *p;
    int cnt;

    cout<<endl<<"Enter Your Count:";
    cin>>cnt;

    p=new int[cnt];
    cout<<endl<<"Enter an Array Elements are:";
    for(int i=0;i<cnt;i++)
    {
        cin>>*(p+i);
    }


    cout<<endl<<"Array Elements are:";
    for(int i=0;i<cnt;i++)
    {
        cout<<setw(5)<<*(p+i);
    }

    return 0;
}
*/
//====================================================================
/// pointer to function
/*
#include<iostream>
#include<iomanip>
using namespace std;

void add(int x,int y)
{
    cout<<endl<<"The Addition Is:"<<(x+y);
}
void multi(int x,int y)
{
    cout<<endl<<"The Multiplication Is:"<<(x*y);
}
int main()
{
    int a,b;
    cout<<endl<<"Enter The Values Of A and B:";
    cin>>a>>b;

    add(a,b);
    multi(a,b);

    void (*fptr)(int ,int);

    fptr=&add;
    fptr(a,b);

    fptr=&multi;
    fptr(a,b);

    return 0;
}
*/
//===============================================================================
///pointer to Object
/*
#include<iostream>
#include<iomanip>
using namespace std;

class Item
{
    private:
        int icode;
        float ipr;
    public:
        void Input()
        {
            cout<<endl<<"Enter Your Icode and Ipr:";
            cin>>icode>>ipr;
        }
        void display()
        {
            cout<<endl<<"Icode = "<<icode<<"\tIpr = "<<ipr;
        }
};

int main()
{
    Item ob;
    ob.Input();
    ob.display();

    Item *p;
    p=&ob;
    p->Input();
    p->display();
    return 0;
}
*/
//===============================================================================================
///PolyMorphisum:
/*
#include<iostream>
using namespace std;

class Shape
{
    public:
      virtual void area()
        {
            cout<<endl<<"In Base Class Shape:";
        }
};
class Triangle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In child Class Triangle:";
        }
};
class Circle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In child Class circle:";
        }
};
class Rectangle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In child Class Rectangle:";
        }
};


int main()
{
    Shape *s;

    Triangle tob;
    s=&tob;
    s->area();

    Circle cob;
    s=&cob;
    s->area();

    Rectangle rob;
    s=&rob;
    s->area();

    return 0;
}
*/
//======================================================================================
/// Now, we and to ad one more child
/*
#include<iostream>
using namespace std;

class Shape
{
    public:
       virtual void area()
        {
            cout<<endl<<"In Base Class shape:";
        }

};
class Triangle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In child Class Triangle:";
        }
};

class Circle:public Shape
{
    public:
         void area()
        {
            cout<<endl<<"In child Class circle:";
        }
};

class Rectangle:public Shape
{
    public:
        void area()
        {
            cout<<endl<<"In child Class Rectangle:";
        }
};

class Pantagone:public Shape
{
     public:
        void area()
        {
            cout<<endl<<"In child Class Pantagone:";
        }
};

int main()
{
    Shape *s;

    Triangle tob;
    s=&tob;
    s->area();

    Circle cob;
    s=&cob;
    s->area();

    Rectangle rob;
    s=&rob;
    s->area();

    Pantagone pob;
    s=&pob;
    s->area();

    return 0;
}
*/
//================================================================================================
///Book Example
/*
#include<iostream>
#include<string.h>
using namespace std;

class Media
{
    protected:
        char Title[40];
        float pr;
    public:
        Media(char *str,float Price)
        {
            strcpy(Title,str);
            pr=Price;
        }
        virtual void display()
        {}
};
class Book:public Media
{
    protected:
        int Pages;
    public:
        Book(char *ch,float pri, int p):Media(ch,pri)
        {
            Pages=p;
        }
        void display()
        {

            cout<<"\n Title:"<<Title;
            cout<<"\n Price:"<<pr;
            cout<<"\n pages:"<<Pages;
        }
};
class Tape:public Media
{
    protected:
        int time;
    public:
        Tape(char *c,float p,int t):Media(c,p)
        {
            time=t;
        }
        void display()
        {
            cout<<"\n Title:"<<Title;
            cout<<"\n Price:"<<pr;
            cout<<"\n pages:"<<time;
        }
};
int main()
{
    char * title=new char[50];
    float price;
    int pages,time;


    cout<<endl<<"Enter The Book Details";

    fflush(stdin);
    cout<<"\n Title:";   cin>>title;
    cout<<"\n Price:";      cin>>price;
    cout<<"\n pages:";   cin>>pages;

    Book book1(title,price,pages);


    cout<<endl<<"Enter The Tape Details";
    fflush(stdin);
    cout<<"\n Title:";   cin>>title;
    cout<<"\n Price:";      cin>>price;
    cout<<"\n Time:";   cin>>time;


    Tape Tape1(title,price,time);


    Media *list[2];
    list[0]=&book1;
    list[1]=&Tape1;


    cout<<endl<<"Media Details:";

    cout<<endl<<"------Book Details-------";
    list[0]->display();

    cout<<endl<<"------Tape Details-------";
    list[1]->display();


    return 0;
}
*/
//==================================================================================================
/*
Books And Media::

#include<iostream>
#include<string.h>
using namespace std;

class Media
{
    public:

       virtual void Input(char *a,float p,int r)
        {
        }
        virtual void display()
        {}
};
class Book:public Media
{
    protected:
        char Title[40];
        float pr;
        int Pages;

    public:
       void Input(char *ch,float pri, int p)
        {
            strcpy(Title,ch);
            pr=pri;
            Pages=p;
        }
        void display()
        {
            cout<<"\n Title:"<<Title;
            cout<<"\n Price:"<<pr;
            cout<<"\n pages:"<<Pages;
        }
};
class Tape:public Media
{
    protected:
        char Titlet[40];
        float prt;
        int timet;

    public:
        void Input(char *c,float p,int t)
        {
            strcpy(Titlet,c);
            prt=p;
            timet=t;
        }
        void display()
        {
            cout<<"\n Title:"<<Titlet;
            cout<<"\n Price:"<<prt;
            cout<<"\n pages:"<<timet;
        }
};
int main()
{
    char  title[50],titlet[30];
    float price,pricet;
    int pages,time;
    int timet;

    cout<<endl<<"Enter The Book Details";
    fflush(stdin);
    cout<<"\n Title:";   cin>>title;
    cout<<"\n Price:";      cin>>price;
    cout<<"\n pages:";   cin>>pages;


    cout<<endl<<"Enter The Tape Details";
    fflush(stdin);
    cout<<"\n Title:";   cin>>titlet;
    cout<<"\n Price:";      cin>>pricet;
    cout<<"\n Time:";   cin>>timet;

    Media *list;

    Book  book1;
    list=&book1;
    list->Input(title,price,pages);


    cout<<endl<<"Media Details:";
    cout<<endl<<"------Book Details-------";
    list->display();

    Tape Tape1;
    list=&Tape1;
    list->Input(titlet,pricet,timet);


    cout<<endl<<"------Tape Details-------";
    list->display();

    return 0;
}
*/
//=================================================================================================
///Programming Ex:9.1
/*
#include<iostream>
using namespace std;

class shape
{
    int db;
    int db1;
    public:
        void Getarea(int x,int y)
        {
            db=x;
            db1=y;
        }
        virtual void ShowArea(){}
};
class Triangle:public shape
{
    int AreaTri;
    public:
        void GetareaTri(int x,int y)
        {
            AreaTri=((float)1/2)*x*y;
        }
        void ShowArea()
        {
            cout<<endl<<" The Area Of Triangle: "<<AreaTri;
        }
};
class Rectangle:public shape
{
    int AreaRect;
    public:
        void GetareaRct(int x,int y)
        {
            AreaRect=x*y;
        }
        void ShowArea()
        {
            cout<<endl<<"The Area Of Rectangle: "<<AreaRect;
        }
};
int main()
{

    int a,b;
    cout<<endl<<"Enter The values Of A And B";
    cin>>a>>b;

    shape *s;

    Rectangle rob;
    rob.GetareaRct(a,b);
    s=&rob;
    s->Getarea(a,b);
    s->ShowArea();

    Triangle tob;
    tob.GetareaTri(a,b);
    s=&tob;
    s->Getarea(a,b);
    s->ShowArea();

    return 0;
}
*/
//==============================================================================================================
///9.2
/*
#include<iostream>
using namespace std;

class shape
{
    int db;
    int db1;
    public:
        void Getarea(int x,int y=0)
        {
            db=x;
            db1=y;
        }
        virtual void ShowArea(){}
};
class Triangle:public shape
{
    int AreaTri;
    public:
        void GetareaTri(int x,int y)
        {
            AreaTri=((float)1/2)*x*y;
        }
        void ShowArea()
        {
            cout<<endl<<" The Area Of Triangle: "<<AreaTri;
        }
};
class Rectangle:public shape
{
    int AreaRect;
    public:
        void GetareaRct(int x,int y)
        {
            AreaRect=x*y;
        }
        void ShowArea()
        {
            cout<<endl<<"The Area Of Rectangle: "<<AreaRect;
        }
};
class circle:public shape
{
    int r;
    public:
        void GetAreaCir(int rad)
        {
            r=3.14*rad*rad;
        }
        void ShowArea()
        {
            cout<<endl<<"The Area Of Circle: "<<r;
        }
};
int main()
{

    int a,b;
    cout<<endl<<"Enter The values Of A And B";
    cin>>a>>b;

    shape *s;

    Rectangle rob;
    rob.GetareaRct(a,b);
    s=&rob;
    s->Getarea(a,b);
    s->ShowArea();

    Triangle tob;
    tob.GetareaTri(a,b);
    s=&tob;
    s->Getarea(a,b);
    s->ShowArea();

    circle cob;
    cob.GetAreaCir(b);
    s=&cob;
    s->Getarea(a,b);
    s->ShowArea();

    return 0;
}
*/
//=================================================================================================
///9.3
/*
#include<iostream>
using namespace std;

class shape
{
    int db;
    int db1;
    public:
        virtual void Getarea(int x,int y=0){}
       // void ShowArea(){}
};
class Triangle:public shape
{
    int AreaTri;
    public:
        void Getarea(int x,int y)
        {
            AreaTri=((float)1/2)*x*y;
        }
        void ShowAreaTria()
        {
            cout<<endl<<" The Area Of Triangle: "<<AreaTri;
        }
};
class Rectangle:public shape
{
    int AreaRect;
    public:
        void Getarea(int x,int y)
        {
            AreaRect=x*y;
        }
        void ShowAreaRect()
        {
            cout<<endl<<"The Area Of Rectangle: "<<AreaRect;
        }
};
class circle:public shape
{
    int r;
    public:
        void Getarea(int rad)
        {
            r=3.14*rad*rad;
        }
        void ShowAreaCir()
        {
            cout<<endl<<"The Area Of Circle: "<<r;
        }
};
int main()
{
    int a,b;
    cout<<endl<<"Enter The values Of A And B";
    cin>>a>>b;

    shape *s;

    Rectangle rob;
    s=&rob;
    s->Getarea(a,b);
    rob.ShowAreaRect();

    Triangle tob;
    s=&tob;
    s->Getarea(a,b);
    tob.ShowAreaTria();


    circle cob;
    s=&cob;
    s->Getarea(a);
    cob.ShowAreaCir();

    return 0;
}
*/
//====================================================================================================
///8.1  Inheritance:
/*
#include<iostream>
using namespace std;

class BankAcc
{
    char Nm[40];
    int AccNo;
};
class CurrAcc:public BankAcc
{

};
class SavingAcc:public BankAcc
{

};

int main()
{
    return 0;
}
*/


















