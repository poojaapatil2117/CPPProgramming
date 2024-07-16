///Default Constructer:
/*
#include <iostream>
using namespace std;

class demo
{
    private:
        int x;
        float y;
        double z;

    public:
        demo()
        {
            cout<<endl<<" Default Constructer ";
            x=10;
            y=21.17;
            z=56.834;
        }
        void input()
        {
            cout<<endl<<" Enter Your X , Y And Z ";
            cin>>x>>y>>z;
        }
        void out()
        {
            cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
        }
};

int main()
{
    demo d1;
    d1.out();

    //d1.input();
    //d1.out();

    return 0;
}
*/
//====================================================================
/// defining the constructor outside of class
/*
#include<iostream>
using namespace std;

class demo
{
    private:
        int x;
        float y;
        double z;

    public:
        demo();
        void input()
        {
            cout<<endl<<" Enter The Values Of x,y and z";
            cin>>x>>y>>z;
        }
        void out()
        {
            cout<<endl<<"x="<<x<<"\t y="<<y<<"\t z="<<z;
        }
};
demo::demo()
{
    cout<<endl<<" Default Constructer ";
    x=10;
    y=17.21;
    z=19.2400;
}
int main()
{
    demo d1;
    d1.out();

    d1.input();
    d1.out();

    return 0;
}
*/
//======================================================================
///Parameterized Constructor: Constructor which collects an arguments.
/*
#include<iostream>
using namespace std;

class demo
{
    private:
        int x;
        float y;
        double z;

    public:
        demo()
        {
            cout<<endl<<"Defalut Constructer";
            x=10;
            y=12.12;
            z=45.678;
        }
        demo(int t)
        {
            cout<<endl<<"Paramerterized Constructer I";
            x=t;
            y=t;
            z=t;
        }
        demo (int a1,float b1,double c1)
        {
            cout<<endl<<"Parameterized Contructer II";
            x=a1;
            y=b1;
            z=c1;
        }
        void input()
        {
            cout<<endl<<"Enter The values Of x,y and z";
            cin>>x>>y>>z;
        }
        void out()
        {
            cout<<endl<<"X="<<x<<"\t Y="<<y<<"\t Z="<<z;
        }

};

int main()
{
    demo d1;

    d1.out();

    int a=45,b=45.45,c=34.855;

    demo d2(a,b,c);  //inplicit call
    d2.out();

    demo d3=demo(a,b,c);   //Explicit call
    d3.out();

    demo d4(10);
    d4.out();


    return 0;
}
*/
//=============================================================================
///Dynamic Constructor: Used to allocated the memory for class member.
/*

#include<iostream>
#include<iomanip>
using namespace std;

class demo
{
    private:
        int *p;
        int ec;

    public:

        demo()          //default Constructer
        {
            p=new int[5];
            ec=5;
            cout<<endl<<" Enter The 5 Nos ";
            for(int i=0;i<5;i++)
            {
                cin>>*(p+i);
            }
        }

        demo(int cnt)
        {
            p=new int[cnt];
            ec=cnt;

            cout<<endl<<"Enter Your ec Nos";
            for(int i=0;i<ec;i++)
            {
                cin>>*(p+i);
            }
        }

        void out()
        {
            cout<<endl<<" Elements Are: ";
            for(int i=0;i<ec;i++)
            {
                cout<<setw(6)<<*(p+i);
            }

        }
};

int main()
{
    demo d1;
    d1.out();

    demo d2(7);
    d2.out();

    return 0;
}
*/
//===================================================================================
///Copy constructor
/*
#include<iostream>
using namespace std;

class demo
{
    private:
        int x;
        float y;
        double z;

    public:
        demo()
        {
            cout<<endl<<"Defalut Constructer";
            x=10;
            y=12.12;
            z=45.678;
        }
        demo (int a1,float b1,double c1)
        {
            cout<<endl<<"Parameterized Contructer II";
            x=a1;
            y=b1;
            z=c1;
        }
        demo(demo &t)
        {
            x=t.x;
            y=t.y;
            z=t.z;
        }
        void out()
        {
            cout<<endl<<"X="<<x<<"\t Y="<<y<<"\t Z="<<z;
        }

};

int main()
{
    demo d1;

    d1.out();

    int a=45,b=45.45,c=34.855;

    demo d2(a,b,c);  //inplicit call
    d2.out();

    demo d3(11,11.2,11.67);  //inplicit call
    d3.out();

    demo d4(d3);
    d4.out();

    return 0;
}
*/
//===============================================================================
///Passing default arguments to constructor:
/*
#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int mini;
        int sec;
    public:
        Time()
        {
            cout<<endl<<"Default Parameter";
            hour=1;
            mini=45;
            sec=50;
        }
        Time(int t)
        {
            hour=t;
            mini=t;
            sec=t;
        }
        Time(int a,int b,int c=30)
        {
            hour=a;
            mini=b;
            sec=c;
        }
        void out()
        {
            cout<<endl<<hour<<":"<<mini<<":"<<sec;
        }
};

int main()
{
    Time t1;
    t1.out();

    Time t2(3,45,60);
    t2.out();

    Time t3(3,46);
    t3.out();

    Time t4(5);
    t4.out();

    return 0;
}
*/ //here we use same name of functions is called function overloading:
//==== ===============================================================================
///Destructors

/*
#include<iostream>
using namespace std;

class demo
{
    public:
        demo()
        {
           cout<<endl<<"Object is Created";
        }
        ~demo()
        {
            cout<<endl<<"Object is Deleted";
        }

};

int main()
{
    demo d1;

    return 0;
}
*/
//===================================================================================
/*
#include<iostream>
#include<iomanip>
using namespace std;

class demo
{
    private:
        int *p;
        int ec;
    public:
        demo()
        {
             p =new int[5];     //dynamic constructer
             ec=5;
             cout<<endl<<"Enter The Elements";
             for(int i=0;i<ec;i++)
             {
                 cin>>*(p+i);
             }
        }
        void out()
        {
            cout<<endl<<"The Elements Are";
            for(int i=0;i<ec;i++)
            {
                cout<<setw(6)<<*(p+i);
            }
        }
};

int main()
{
    demo d1;
    d1.out();


    return 0;
}
*/
//==================================================================================
/// count the number of objects
/*
#include<iostream>
using namespace std;

class demo
{
    static int cnt;
    public:
        demo()
        {
            cnt++;
            cout<<endl<<" object count "<<cnt<<" created";
        }
        ~demo()
        {
            cout<<endl<<" object cout"<<cnt<<" Deleted";
            cnt--;
        }

};
int demo::cnt;
int main()
{
    demo d1,d2;
    {
        demo d4,d5;
    }
    printf("\n End Of The Program:");
    return 0;
}
*/
//====================================================================================
/*
#include<iostream>
using namespace std;

class sample
{
    private:
        const int x;
    public:
        sample():x(10)
        {

        }
        sample(int a):x(a)
        {

        }
        void show()
        {
            cout<<endl<<" x = "<<x;
        }

};
int main()
{
    sample s1;
    s1.show();

    sample s2(20);
    s2.show();

}
*/
//=====================================================================================
/*
#include<iostream>
using namespace std;
class sample
{
    private:
        const int x;
    public:
        sample():x(10)
        {
            cout<<endl<<" in Default constructer x is"<<x;
        }
        sample (int a):x(a)
        {
            cout<<endl<<" in parameterized COnstructer x is"<<x;
        }
};
int main()
{
    sample s1;
    sample s2(20);

    return 0;
}
*/
//==========================================================================================
///You can use the initilization list to init. multiple members also
/*
#include<iostream>
using namespace std;

class sample
{
    private:
        int x;
        float y;
        double z;
    public:
        sample():x(10),y(20.34),z(45.934)
        {
            cout<<endl<<"Default Constructer";
        }
        sample(int t):x(t),y(t),z(t)
        {
            cout<<endl<<"Paramterized I Constructer";
        }

        sample(int a,int b,int c):x(a),y(b),z(c)
        {
            cout<<endl<<"Parameterized II Constructer";
        }
        void display()
        {
            cout<<endl<<"x="<<x<<"\ty="<<y<<"\tz="<<z;
        }

};


int main()
{
    sample s1;
    s1.display();

    sample s2(20);
    s2.display();

    sample s3(10,20.43,84.342);
    s3.display();

    return 0;
}
*/
//==========================================================================================================
///const object and const function
/*
#include<iostream>
using namespace std;

class sample
{
    private :
        int x;
        float y;
    public:
        sample()
        {
            cout<<endl<<"Default Constructer";
            x=10;
            y=24.96;
        }
        sample (int a,float b)
        {
            cout<<endl<<"Para I constru";
            x=a;
            y=b;
        }
        void modify()
        {
            y=x=11;
        }
        void display() const
        {
            cout<<endl<<"x="<<x<<"\t y="<<y;
        }
};

int main()
{
    const sample s1;
    s1.display();

    const sample s2(25,97.34);
    s2.display();

    //s2.modify(); it will give an error cauase the object is constant:


    return 0;
}
*/
//======================================================================================================
///Dynamic initilization of object
/*
#include<iostream>
#include<iomanip>

using namespace std;
class student
{
    private:
        int **p;
        int *sub;
        int sc;

    public:
        student(){}

        student(int n)
        {
            sc=n;
            p=(int**)malloc(n*sizeof(int*));
            sub=(int*)malloc(n*sizeof(int));

            for(int i=0;i<n;i++)
            {
                cout<<endl<<"Enter The Subject Count For "<<(i+1)<<" Student";
                cin>>*(sub+i);

                *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));

                for(int j=0;j<*(sub+i);j++)
                {
                    *(*(p+i)+j)=0;
                }
            }

        }

        void input()
        {
            cout<<endl<<"Enter The marks of"<<sc<<"Student";
            for(int i=0;i<sc;i++)
            {
                cout<<endl<<"Marks For"<<*(sub+i)<<"Subjet";
                for(int j=0;j<*(sub+i);j++)
                {
                    cin>>*(*(p+i)+j);

                }
            }
        }
        void output()
        {
            cout<<endl<<"The marks of "<<sc<<" Student";
            for(int i=0;i<sc;i++)
            {
                cout<<endl<<"Sudent"<<(i+1);
                for(int j=0;j<*(sub+i);j++)
                {
                    cout<<setw(6)<<*(*(p+i)+j);
                }
            }
        }
        ~student()
        {
            for(int i=0;i<sc;i++)
            {
                free(*(p+i));
                cout<<endl<<" Mem release student"<<(i+1);
            }
            free(p);

        }
};

int main()
{
    int cnt;

    cout<<endl<<"Enter The Student Count";
    cin>>cnt;

    student s1(cnt);
    s1.input();
    s1.output();

    return 0;
}
*/
//======================================================================================================
///Diffrent Memeroy Allocation

/*
#include<iostream>
#include<iomanip>

using namespace std;
class student
{
    private:
        int **p;
        int *sub;
        int sc;

    public:
        student(){}

        student(int n)
        {
            sc=n;

            p=new int*[n];
            sub=new int[n];

            for(int i=0;i<n;i++)
            {
                cout<<endl<<"Enter The Subject Count For "<<(i+1)<<" Student";
                cin>>*(sub+i);

                *(p+i)=new int[*(sub+i)];

                for(int j=0;j<*(sub+i);j++)
                {
                    *(*(p+i)+j)=0;
                }
            }

        }

        void input()
        {
            cout<<endl<<"Enter The marks of"<<sc<<"Student";
            for(int i=0;i<sc;i++)
            {
                cout<<endl<<"Marks For"<<*(sub+i)<<"Subjet";
                for(int j=0;j<*(sub+i);j++)
                {
                    cin>>*(*(p+i)+j);

                }
            }
        }
        void output()
        {
            cout<<endl<<"The marks of "<<sc<<" Student";
            for(int i=0;i<sc;i++)
            {
                cout<<endl<<"Sudent"<<(i+1);
                for(int j=0;j<*(sub+i);j++)
                {
                    cout<<setw(6)<<*(*(p+i)+j);
                }
            }
        }
        ~student()
        {
            for(int i=0;i<sc;i++)
            {
                delete(*p+i);
                cout<<endl<<" Mem release student"<<(i+1);
            }
            delete(p);

        }
};

int main()
{
    int cnt;

    cout<<endl<<"Enter The Student Count";
    cin>>cnt;

    student s1(cnt);
    s1.input();
    s1.output();

    return 0;
}
*/
//===========================================================================================================
/// Operator Overloading
/*
#include<iostream>
using namespace std;

class test
{
    public:
        void operator-()
        {
            cout<<endl<<"In Operator <op> fucntion";
        }
};

int main()
{
    int x=10,y;
    y=-x;

    test t;
    -t;

    return 0;
}
*/
//====================================================================================================
///Unaray Operator
///overloading - operator to get opposite value of an object
/*
#include<iostream>
using namespace std;
class numbers
{
    private:
        int x;
        int y;

    public:
        numbers()
        {
            x=1;
            y=20;
        }
        numbers(int a,int b)
        {
            x=a;
            y=b;
        }
        void in()
        {
            cout<<endl<<"enter The Value Of X and Y";
            cin>>x>>y;
        }
        void out()
        {
            cout<<endl<<"x="<<x<<"\t y="<<y;
        }
        void operator-()
        {
           // cout<<endl<<"In Operator-()function";
            x=-x;
            y=-y;
        }
};
int main()
{
    numbers n1(10,20);

    cout<<endl<<"Before -() N1 is call";  n1.out();

    -n1;
     cout<<endl<<"After -() N1 is call";  n1.out();



     numbers n2;
     n2.in();

    cout<<endl<<"Before -() N1 is call";  n2.out();
     -n2;

    cout<<endl<<"After -() N2 is call";  n2.out();


    return 0;
}
*/
//============================================================================================================
/// overloading - operator to get an object multi by 10
/*
#include<iostream>
using namespace std;
class numbers
{
    private:
        int x;
        int y;

    public:
        numbers()
        {
            x=1;
            y=20;
        }
        numbers(int a,int b)
        {
            x=a;
            y=b;
        }
        void in()
        {
            cout<<endl<<"enter The Value Of X and Y";
            cin>>x>>y;
        }
        void out()
        {
            cout<<endl<<"x="<<x<<"\t y="<<y;
        }
        void operator-();
};
void numbers::operator-()
{
    x=x*10;
    y=y*10;
}
int main()
{
    numbers n1(10,20);

    cout<<endl<<"Before -() N1 is call";  n1.out();

    -n1;
     cout<<endl<<"After -() N1 is call";  n1.out();



     numbers n2;
     n2.in();

    cout<<endl<<"Before -() N1 is call";  n2.out();
     -n2;

    cout<<endl<<"After -() N2 is call";  n2.out();


    return 0;
}
*/
//=======================================================================================================
/// Overloading unary operator as a friend
/*
#include<iostream>
using namespace std;
class numbers
{
    private:
        int x;
        int y;

    public:
        numbers()
        {
            x=1;
            y=20;
        }
        numbers(int a,int b)
        {
            x=a;
            y=b;
        }
        void in()
        {
            cout<<endl<<"enter The Value Of X and Y";
            cin>>x>>y;
        }
        void out()
        {
            cout<<endl<<"x="<<x<<"\t y="<<y;
        }
        friend void operator-(numbers &t);
};
void operator-(numbers &t)
{
    t.x=t.x*10;
    t.y=t.y*10;
}
int main()
{
    numbers n1(10,20);

    cout<<endl<<"Before -() N1 is call";  n1.out();

    -n1;
     cout<<endl<<"After -() N1 is call";  n1.out();



     numbers n2;
     n2.in();

    cout<<endl<<"Before -() N1 is call";  n2.out();
     -n2;

    cout<<endl<<"After -() N2 is call";  n2.out();

    return 0;
}
*/
//============================================================================================================
/// Overloading Binary operator
/// Overloading Binary operator to join two strings
/*
#include<iostream>
#include<string.h>
using namespace std;

class Mystring
{
    private:
        char *s;
    public:
        int len;
        Mystring()
        {
            len=0;
            s=NULL;
        }
        Mystring(char *t)
        {
            len=strlen(t);
            s=new char[len+1];
            strcpy(s,t);
        }
        char *getstring()
        {
            return s;
        }

        Mystring operator+(Mystring t)
        {
            Mystring temp;
            temp.len=strlen(s)+strlen(t.s);

            temp.s=new char[len+1];
            strcpy(temp.s,s);
            strcat(temp.s,t.s);
            return temp;
        }
};

int main()
{
    Mystring str1("Hello Good morning");
    Mystring str2("How Are You");

    cout<<endl<<"Str1";                str1.getstring();
    cout<<endl<<"Str2";                str2.getstring();

    Mystring str3;

    str3=str1+str2;


    cout<<endl<<"Str3";
    str3.getstring();


    cout<<endl<<"Length Str1"<<str1.len;
    cout<<endl<<"Length Str2"<<str3.len;
    cout<<endl<<"Length Str3"<<str3.len;

    return 0;
}
*/
//=======================================================================================================
/// Now lets see when Binary operator overloading using friend is prefered.
///lets add two complex numbers using overloading + operator
/*
#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void getComplexNum()
        {
            cout<<endl<<"Enter The real ";
            cin>>real;
            fflush(stdin);
            cout<<endl<<"Enter The Img ";
            cin>>img;
        }
        void display()
        {
            cout<<real<<" +j "<<img;
        }

        Complex operator+(Complex t)
        {
            Complex temp;
            temp.real=real+t.real;
            temp.img=img+t.img;
            return temp;
        }

};
int main()
{
    Complex c1,c2,c3;


    c1.getComplexNum();
    c2.getComplexNum();

    c3=c1+c2;

    cout<<endl<<"C1=";  c1.display();
    cout<<endl<<"C2=";   c2.display();
    cout<<endl<<"C3=";  c3.display();

    return 0;
}
*/
//=========================================================================================================
///we can use the operator+() function as a external function, and in that case
///we need to use operator+() function as a friend.
/*
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        float img;
    public:
        void getComplexNum()
        {
            cout<<endl<<"Enter The real ";
            cin>>real;
            fflush(stdin);
            cout<<endl<<"Enter The Img ";
            cin>>img;
        }
        void display()
        {
            cout<<real<<" +j "<<img;
        }

        friend Complex operator+(Complex t1,Complex t2);

};
Complex operator+(Complex t1,Complex t2)
{
    Complex temp;
    temp.real=t1.real+t2.real;
    temp.img=t1.img+t2.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3;       //c4;


    c1.getComplexNum();
    c2.getComplexNum();
   // c4.getComplexNum();

    c3=c1+c2;           //+c4;

    cout<<endl<<"C1=";  c1.display();
    cout<<endl<<"C2=";   c2.display();
    //cout<<endl<<"C4=";  c4.display();

    cout<<endl<<"C3=";  c3.display();

    return 0;
}
*/
//=============================================================================================================
/// But what should be the case when we use it as
/// c3=10+c2; and operator<> function is member function.
/*
#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void getComplex()
        {
            cout<<endl<<" Enter The Real ";
            cin>>real;
            cout<<endl<<" Enter The Img ";
            cin>>img;
        }
        void display()
        {
            cout<<real<<" +j "<<img;
        }

        friend Complex operator+(int a,Complex b);
};

Complex operator+(int n,Complex ft)
{
    Complex temp;
    temp.real=n+ft.real;
    temp.img=n+ft.img;
    return temp;
}

int main()
{
    Complex c1,c2,c3;

   // c1.getComplex();
    c2.getComplex();

    c3=10+c2;   //it will add 10 in real and img numbers

   // cout<<endl<<"c1=";  c1.display();
    cout<<endl<<"c2=";  c2.display();
    cout<<endl<<"c3=";  c3.display();

    return 0;
}
*/
//========================================================================================================
///Add two time object using * operator overload in both ways
///(operator<>() as member function and as a friend function)
/*
#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        float img;
    public:
        void input()
        {
            cout<<endl<<"Enter The real";
            cin>>real;
            fflush(stdin);
            cout<<endl<<"Enter The Img";
            cin>>img;
        }
        void dispay()
        {
            cout<<real<<" +j "<<img;
        }

        Complex operator*(Complex t)
        {
            Complex temp;
            temp.real=real+t.real;
            temp.img=img+t.img;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;

    c1.input();
    c2.input();

    c3=c1*c2;

    cout<<endl<<"c1="; c1.dispay();
    cout<<endl<<"c2="; c2.dispay();
    cout<<endl<<"c3="; c3.dispay();

    return 0;
}
*/
//=========================================================================================================
/// Overloading >> and << operators
/*
#include<iostream>
using namespace std;
class demo
{
    public :
        friend void operator>>(istream& is,demo ob);
        friend void operator<<(ostream& os,demo ob);
};

void operator>>(istream& is,demo ob)
{
    cout<<endl<<"Data Input";
}
void operator<<(ostream& os,demo ob)
{
    cout<<endl<<"Data Output";
}
int main()
{
    demo d;

    cin>>d;
    cout<<d;

    return 0;
}
*/
//=======================================================================================
///Type conversion in C++:
/*
#include<iostream>
using namespace std;
class rect;
class Square
{
    private:
        int side;
    public:
        Square()
        {
            side=0;
        }
        Square(int t)
        {
            t=side;
        }
        int area()
        {
            return (side*side);
        }
        friend class rect;
};
class rect
{
    private:
        int l,b;
    public:
        rect()
        {
            l=b=0;
        }
        rect(int a1,int b1)
        {
            l=a1;
            b=b1;
        }
        rect(Square t)
        {
            l=b=t.side;
        }
        int area()
        {
            return (l*b);
        }
};

int main()
{
    Square s1(5);
    int a=s1.area();
    cout<<endl<<"Area of Square = "<<a;

    rect r1(s1);
    a=r1.area();
    cout<<endl<<"Area Of Rect = "<<a;

    return 0;
}
*/
//======================================================================================











