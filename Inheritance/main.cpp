///Single Inheritance:
/*
#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        void in()
        {
            cout<<endl<<"Enter The Value Of X";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value Of X = "<<x;
        }
};
class B
{
    private:
        float y;
    public:
        void set()
        {
            cout<<endl<<"Enter The Value Of y";
            cin>>y;
        }
        void get()
        {
            cout<<endl<<"The Value Of Y = "<<y;
        }
};
int main()
{
    A a;
    a.in();
    a.out();

    B b;
    b.set();
    b.get();

    return 0;
}
*/
//===================================================================================================
///Single Inheritance:  public Visibility - calling inherited functions in a nested manner
/*
#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        void in()
        {
            cout<<endl<<"Enter The Value Of X";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value Of X = "<<x;
        }
};
class B:public A
{
    private:
        float y;
    public:
        void set()
        {
            in();
            cout<<endl<<"Enter The Value Of y";
            cin>>y;
        }
        void get()
        {
            out();
            cout<<endl<<"The Value Of Y = "<<y;
        }
};
int main()
{

    B b;
    b.set();
    b.get();

    return 0;
}
*/
//==============================================================================================
///Single Inheritance:  public Visibility - calling inherited functions directly using child class object
/*
#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        void in()
        {
            cout<<endl<<"Enter The Value Of X";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value Of X = "<<x;
        }
};
class B:public A
{
    private:
        float y;
    public:
        void set()
        {
            //in();
            cout<<endl<<"Enter The Value Of y";
            cin>>y;
        }
        void get()
        {
            //out();
            cout<<endl<<"The Value Of Y = "<<y;
        }
};
int main()
{

    B b;
    b.in();
    b.set();

    b.out();
    b.get();


    return 0;
}
*/
//=================================================================================================
///Single Inheritance: Private
/*
#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        void in()
        {
            cout<<endl<<"Enter The Value Of X";
            cin>>x;
        }
        void out()
        {
            cout<<endl<<"Value Of X = "<<x;
        }
};
class B:private A
{
    private:
        float y;
    public:
        void set()
        {
            in();
            cout<<endl<<"Enter The Value Of y";
            cin>>y;
        }
        void get()
        {
            out();
            cout<<endl<<"The Value Of Y = "<<y;
        }
};
int main()
{

    B b;
    //b.in(); //It will show an error msg because  The class is private
    b.set();

   // b.out(); //It will show an error msg because  The class is private
    b.get();


    return 0;
}
*/
//==================================================================================================
/// Another Example
/*
#include<iostream>
using namespace std;
class Person
{
    private:
        char nm[50];
        int age;
    public:
        void input()
        {
            cout<<endl<<"Enter The name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter The age:";
            cin>>age;
        }
        void Output()
        {
            cout<<endl<<" Name : "<<nm<<"\tAge :"<<age;
        }
};
class Student:private Person
{
    private:
        float sscper;
        float hscper;
    public:
        void get()
        {
            input();
            cout<<endl<<"Enter Hsc Per:";
            cin>>hscper;
            cout<<endl<<" Enter SSC Per:";
            cin>>sscper;
        }
        void  set()
        {
            Output();
            cout<<endl<<"\tHSC = "<<hscper<<"\tSSC = "<<sscper;
        }
};
int main()
{
    Student p;
    p.get();
    p.set();

    return 0;
}
*/
//============================================================================================================
/// Using method overloading in inheritancy
/*
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char nm[50];
        int age;
    public:
        void input()
        {
            cout<<endl<<"Enter The name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter The age:";
            cin>>age;
        }
        void input(char ch[],int a)
        {
            strcpy(nm,ch);
            age=a;
        }
        void Output()
        {
            cout<<endl<<" Name : "<<nm<<"\tAge :"<<age;
        }
};
class Student:private Person
{
    private:
        float sscper;
        float hscper;
    public:
        void get()
        {
            input();
            cout<<endl<<"Enter Hsc Per:";
            cin>>hscper;
            cout<<endl<<" Enter SSC Per:";
            cin>>sscper;
        }
        void get(char s[],int ageP,float a1,float a2)
        {
            input(s,ageP);
            sscper=a1;
            hscper=a2;
        }
        void  set()
        {
            Output();
            cout<<endl<<"\tHSC = "<<hscper<<"\tSSC = "<<sscper;
        }
};
int main()
{
    Student p;
    p.get();
    p.set();

    Student Ob2;
    Ob2.get("rohit",38,264,200);
    Ob2.set();

    return 0;
}

*/
//====================================================================================================================
///Using constructors in inheritency
/*
#include<iostream>
using namespace std;

class A
{
    private :
        int x;
    public:
        A()
        {
            cout<<endl<<"DeFault Constr Of Class A";
        }
        A(int t)
        {
            x=t;
            cout<<endl<<"Pare Contru Of Class A";
        }
};
class B:public A
{
    private:
        float y;
    public:
        B()
        {
            cout<<endl<<"Default constru Of Class B";
        }
        B(int a1,int a2):A(a1)
        {
            y=a2;
            cout<<endl<<"Default Constr of Class B";
        }
};
int main()
{
    B b;
    cout<<endl<<"---------------------------------------"<<endl;

    B b1(10,20);
    return 0;
}

*/
//=============================================================================================================
/// Another example
/*
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char nm[40];
        int age;
    public:
        Person()
        {
           strcpy(nm,"NA");
           age=0;
        }
        Person(char ch[],int a)
        {
            strcpy(nm,ch);
            age=a;
        }
        void input()
        {
            cout<<endl<<"Enter The Name";
            cin>>nm;
            cout<<endl<<"Enter The Age";
            cin>>age;
        }
        void input(char cha[],int a1)
        {
            strcpy(nm,cha);
            age=a1;
        }
        void Display()
        {
            cout<<endl<<"Name ="<<nm<<"\tAge="<<age;
        }
};
class Student:private Person
{
    private:
        int sscper;
        int hscper;
    public:
        Student()
        {
            sscper=0;
            hscper=0;
        }
        Student(char ch[],int ag,int a,int b):Person(ch,ag)
        {
            sscper=a;
            hscper=b;
        }
        void InData()
        {
            input();
            cout<<endl<<"Enter The SSC Per:";
            cin>>sscper;
            cout<<endl<<"Enter The HSC Per:";
            cin>>hscper;
        }
        void InData(char s[],int agee,int a1,int b1)
        {
            input(s,agee);
            sscper=a1;
            hscper=b1;
        }
        void Show()
        {
            Display();
            cout<<"\t SSC per ="<<sscper<<"\t HSC Per="<<hscper;
        }
};
int main()
{
    Student s1;
    s1.InData();
    s1.Show();

    Student s2;
    s2.InData("Rohit",39,264,208);
    s2.Show();

    Student s3("virat",36,150,45);
    s3.Show();

    return 0;
}
*/
//===========================================================================================================
///Method Overriding
/*
#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A()
        {
            x=20;
        }
        void show()
        {
            cout<<endl<<"x="<<x;
        }
};
class B:public A
{
    int y;
    public:
        B()
        {
            y=10;
        }
        void show()
        {
            cout<<endl<<"y="<<y;
        }
};
int main()
{
    B b;
    b.show();
    return 0;
}
*/
//============================================================================================================
/*
#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A()
        {
            x=20;
        }
        void show()
        {
            cout<<endl<<"x="<<x;
        }
};
class B:public A
{
    int y;
    public:
        B()
        {
            y=10;
        }
        void show()
        {
            A::show(); //Option 1
            cout<<endl<<"y="<<y;
        }
};
int main()
{
    B b;
    b.show();

    //b.A::show(); //option 2

    return 0;
}
*/
//==========================================================================================================
///CPP Test QUE
/*
QUE 1:
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.


#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char nm[40];
        int RollNo;
    public:
        Student(char name[],int Rn)
        {
            strcpy(nm,name);
            RollNo=Rn;
        }

        void Display()
        {
            cout<<endl<<"Name = "<<nm<<"\tRoll Number = "<<RollNo;
        }

};
int main()
{
    Student S("John",2);
    S.Display();
    return 0;
}
*/
//================================================================================================================
/*
QUE 2:
Assign and print the roll number, phone number and address of two students having names
"Sam" and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char nm[40];
        int RollNo;
        char PhonNum[40];
    public:
        Student(char name[],int Rn,char PhNo[])
        {
            strcpy(nm,name);
            RollNo=Rn;
            strcpy(PhonNum,PhNo);
        }

        void Display()
        {
            cout<<endl<<"Name = "<<nm<<"\tRoll Number = "<<RollNo<<" \tPhone No = "<<PhonNum;
        }

};
int main()
{
    Student S("John",1,"8806845298");
    Student S1("Sam",2,"9604642670");
    S.Display();
    S1.Display();
    return 0;
}
*/
//===============================================================================================================
/*
QUE 3:
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.

#include<iostream>
using namespace std;

class Triangel
{
    public:
        int AreaTr(int base,int height)
        {
            return ((float)1/2)*(base*height);

        }
        int perimeter (int a1,int b1,int c1)
        {
            return (a1+b1+c1);
        }
};

int main()
{
    Triangel T1,T2;
    int Area = T1.AreaTr(4,5);
    cout<<endl<<"Area Of Triangle = "<<Area;

    int Perimeter=T2.perimeter(3,4,5);
    cout<<endl<<"PeriMeter Of Triangle = "<<Perimeter;

    return 0;
}
*/
//=================================================================================================================
/*
QUE4:
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.

#include<iostream>
using namespace std;

class Triangel
{
    private:
        int area;
        int peri;

    public:
        Triangel(int a1,int b1,int c1)
        {
             area = ((float)1/2)*(b1*c1);
             peri=(a1+b1+c1);
        }
        void Display()
        {
            cout<<endl<<"Area Of Triagle = "<<area;
            cout<<endl<<"Perimeter Of Triangel = "<<peri;
        }
};
int main()
{
    Triangel T2(3,4,5);
    T2.Display();

    return 0;
}
*/
//===============================================================================================================
/*
QUE 5:
Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
Length and breadth are passed as parameters to its constructor.

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int area,x,y;

    public:

        Rectangle()
        {}
        Rectangle(int l,int b)
        {
            area=l*b;
        }
        int Are(int x,int y)
        {
            return x*y;
        }

        void display()
        {
            cout<<endl<<"The Area Of Recyangle Using Constructer = "<<area;
        }
};

int main()
{
    Rectangle r(5,8);
    r.display();

    Rectangle r1;
    int a=r1.Are(4,3);
    cout<<endl<<"The Area Of Rectangle Using Method = "<<a;

    return 0;
}
*/
//======================================================================================================================
/*
QUE 6
Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
 First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the
 second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle
 are entered through keyboard.

#include<iostream>
using namespace std;

class rectangle
{
    private:
        int l,b;

    public:
        void setDim(int x,int y)
        {
            l=x;
            b=y;
        }
        void input()
        {
            cout<<endl<<"Enter The Values Of L and B :";
            cin>>l>>b;
        }
        int  Getarea()
        {
           return l*b;
        }
};
int main()
{
    rectangle r;
    r.input();
    int area=r.Getarea();
    cout<<endl<<"The area Of rectangle is taking input = "<<area;

    rectangle R;
    R.setDim(2,4);
    int area1=R.Getarea();
    cout<<endl<<"The area Of rectangle Passing The para is = "<<area1;

    return 0;
}
*/
//================================================================================================================
/*
QUE 7:
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.


#include<iostream>
using namespace std;

class Area
{
    private:
        int l,b;
    public:
        Area()
        {
            l=4;
            b=5;
        }
        Area(int x,int y)
        {
            l=x;
            b=y;
        }
        void input()
        {
            cout<<endl<<"Enter The L and B";
            cin>>l>>b;
        }
        int ReturnArea()
        {
            return l*b;
        }
};

int main()
{
    Area a1(3,8);
    int areaC=a1.ReturnArea();
    cout<<endl<<"Display Are Using COnstructer:"<<areaC;

    Area a2;
    a2.input();
    int areaM=a2.ReturnArea();
    cout<<endl<<"Display Area Using Method:"<<areaM;


    return 0;
}
*/
//===================================================================================================================
/*
QUE 8
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.

#include<iostream>
using namespace std;

class Average
{
    private:
        int a,b,c,avg;
    public:
        static void input()
        {
            int a,b,c;
            cout<<endl<<"Enter The Three Sub Marks:";
            cin>>a>>b>>c;
        }
        static void display()
        {
            int a,b,c;
            int avg=(a+b+c)/3;
            cout<<endl<<"The avg = "<<avg;
        }
};

int main()
{
    Average::input();
    Average::display();
    return 0;
}
*/
//=============================================================================================================
/*Que 9:
Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with
separate functions for each operation whose real and imaginary parts are entered by the user.


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
            cout<<endl<<"Enter Your Real:";
            cin>>real;
            cout<<endl<<"Enter The Img:";
            cin>>img;
        }

        void getAdd(int x,float y)
        {
            real=x+y;
            img =x+y;
        }

        void getAdd(int x,float y);

        void ShowComplexAdd()
        {
            cout<<real<<" +j "<<img;
        }
        void getDiff(int x,float y)
        {

            real=x-y;
            img=x-y;
        }
        void ShowComplexDiff()
        {
            cout<<real<<" -j "<<img;
        }
        void getProduct(int x,float y)
        {
            real=x*y;
            img =x*y;
        }
        void ShowComplexProduct()
        {
            cout<<real<<" *j "<<img;
        }
};
void Complex::getAdd(int x,float y)
{
    int temp;
    temp.real=x.real+y.real;
    temp.real=x.img+y.img;
    return temp;
}
int main()
{
    Complex c1,c2;

    c1.input();
    c2.input();

    Complex c3;
    c3=getAdd(c1,c2);

    return 0;
}
*/
//=================================================================================================================
/*
que 11.
Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994       		 64C- WallsStreat
Sam           2000       		 68D- WallsStreat
John           1999       		 26B- WallsStreat


#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    char nm[40];
    int YOJ;
    int salari;
    char add[40];

    public:

        Employee()
        {

        }
        Employee(char ch[],int Year,int sal,char address[])
        {
            strcpy(nm,ch);
            YOJ=Year;
            salari=sal;
            strcpy(add,address);
        }
        void Display1()
        {
            cout<<endl<<"Name"<<"\tYear"<<"\tSalary"<<"\t Address";
        }
        void Display()
        {
            cout<<endl<<nm<<"\t"<<YOJ<<"\t"<<salari<<"\t"<<add;
        }
};


int main()
{
    Employee E1("Robert",1994,50000, "Pune");
    Employee E2("sam",2000,20000, "Mumbai");
    Employee E3("Robert",1999,60000, "Solapur");
    E1.Display1();
    E1.Display();
    E2.Display();
    E3.Display();
    return 0;
}
*/
//==================================================================================================================
/*
#include<iostream>
using namespace std;


class Marks
{
    protected:
        int phy;
        int chem;
        int math;
        int phy1(){return phy;}
        int chem2(){return chem;}
        int math3(){return math;}
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"\tMarks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports
{
    protected:
        int points;
    public:
        void in()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Student:public Marks,public Sports
{
    public:

        void GetResult()
        {
            input();
            in();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                cout<<endl<<"pass!!!";
            }
            else
            {
                cout<<endl<<"fail!!!";
            }
        }
        void DisplayAll()
        {
            display();
            out();
        }
};
int main()
{
    Student s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}
*/
//======================================================================================================
/*
#include<iostream>
using namespace std;
class Marks
{
    private:

    protected:
        int phy;
        int chem;
        int math;
        int phy1(){return phy;}
        int chem2(){return chem;}
        int math3(){return math;}
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"\tMarks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports
{
    protected:
        int points;
    public:
        void input()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Student:public Marks,public Sports
{
    public:

        void GetResult()
        {
            //input(); //it will show an error: reference to 'input' is ambiguous|


            Marks::input();
            Sports::input();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                cout<<endl<<"pass!!!";
            }
            else
            {
                cout<<endl<<"fail!!!";
            }
        }
        void DisplayAll()
        {
            display();
            out();
        }
};
int main()
{
    Student s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}
*/
//===========================================================================================================================
///using Flag For Grade:
/*
#include<iostream>
using namespace std;
class Marks
{
    protected:
        int phy;
        int chem;
        int math;
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"\tMarks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports
{
    protected:
        int points;
    public:
        void input()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Student:public Marks,public Sports
{
    char passflag;
    public:

        void GetResult()
        {
            //input(); //it will show an error: reference to 'input' is ambiguous|
            Marks::input();
            Sports::input();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                passflag='y';
            }
            else
            {
                 passflag='n';
            }
        }
        void DisplayAll()
        {
            display();
            out();
            if(passflag=='y')
            {
                cout<<endl<<"PASS";
            }
            else
            {
                cout<<endl<<"FAIL";
            }
        }
};
int main()
{
    Student s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}

*/
//===========================================================================================================================
///Hybrid Inheritance.
/*
#include<iostream>
using namespace std;
class Student
{
    private:
        int id;
        char nm[40];
    public:
        void SetStudentDetail()
        {
            cout<<endl<<"Enter The student Name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter Student ID:";
            cin>>id;
        }
        void GetStudentDetail()
        {
            cout<<endl<<"Name:"<<nm<<"\tID:"<<id;
        }
};
class Marks:public Student
{
    protected:
        int phy;
        int chem;
        int math;
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"\tMarks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports:public Student
{
    protected:
        int points;
    public:
        void in()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Result:public Marks,public Sports
{
    char passflag;
    public:

        void GetResult()
        {

            SetStudentDetail(); // It will show an error: reference to 'SetStudentDetail' is ambiguous|
            input();
            in();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                passflag='y';
            }
            else
            {
                 passflag='n';
            }
        }
        void DisplayAll()
        {
            GetStudentDetail();  // It will show an error: reference to 'SetStudentDetail' is ambiguous|
            display();
            out();
            if(passflag=='y')
            {
                cout<<endl<<"PASS";
            }
            else
            {
                cout<<endl<<"FAIL";
            }
        }
};
int main()
{
    Result s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}

coz there are two copies of both functions, you can avoid ambiguous error
using call, Exam::getstudentdetails() and Exam::setstudentdetails or you can use
sport class i.e. Sport::getstudentdetails() and Sport::setstudentdetails

*/
//============================================================================================================================
///Using Exam
/*
#include<iostream>
using namespace std;
class Student
{
    private:
        int id;
        char nm[40];
    public:
        void SetStudentDetail()
        {
            cout<<endl<<"Enter The student Name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter Student ID:";
            cin>>id;
        }
        void GetStudentDetail()
        {
            cout<<endl<<"Name:"<<nm<<"\tID:"<<id;
        }
};
class Marks:public Student
{
    protected:
        int phy;
        int chem;
        int math;
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"Marks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports:public Student
{
    protected:
        int points;
    public:
        void in()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Result:public Marks,public Sports
{
    char passflag;
    public:

        void GetResult()
        {
            Marks::SetStudentDetail();
            input();
            in();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                passflag='y';
            }
            else
            {
                 passflag='n';
            }
        }
        void DisplayAll()
        {
            Marks::GetStudentDetail();
            display();
            out();
            if(passflag=='y')
            {
                cout<<endl<<"PASS";
            }
            else
            {
                cout<<endl<<"FAIL";
            }
        }
};
int main()
{
    Result s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}
*/
//================================================================================================================
///using Sports:
/*
#include<iostream>
using namespace std;
class Student
{
    private:
        int id;
        char nm[40];
    public:
        void SetStudentDetail()
        {
            cout<<endl<<"Enter The student Name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter Student ID:";
            cin>>id;
        }
        void GetStudentDetail()
        {
            cout<<endl<<"Name:"<<nm<<"\tID:"<<id;
        }
};
class Marks:public Student
{
    protected:
        int phy;
        int chem;
        int math;
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"Marks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports:public Student
{
    protected:
        int points;
    public:
        void in()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Result:public Marks,public Sports
{
    char passflag;
    public:

        void GetResult()
        {
            Sports::SetStudentDetail();
            input();
            in();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                passflag='y';
            }
            else
            {
                 passflag='n';
            }
        }
        void DisplayAll()
        {
            Sports::GetStudentDetail();
            display();
            out();
            if(passflag=='y')
            {
                cout<<endl<<"PASS";
            }
            else
            {
                cout<<endl<<"FAIL";
            }
        }
};
int main()
{
    Result s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}
*/
//=================================================================================================================
/*
#include<iostream>
using namespace std;
class Student
{
    private:
        int id;
        char nm[40];
    public:
        void SetStudentDetail()
        {
            cout<<endl<<"Enter The student Name:";
            cin.getline(nm,40);
            cout<<endl<<"Enter Student ID:";
            cin>>id;
        }
        void GetStudentDetail()
        {
            cout<<endl<<"Name:"<<nm<<"\tID:"<<id;
        }
};
class Marks:public virtual Student
{
    protected:
        int phy;
        int chem;
        int math;
    public:
        void input()
        {
            cout<<endl<<"Enter Physics Marks:";
            cin>>phy;

            cout<<endl<<"Enter Chemi Marks:";
            cin>>chem;

            cout<<endl<<"Enter Maths Marks:";
            cin>>math;
        }
        void display()
        {
            cout<<endl<<"Marks:"<<"\tPhysics="<<phy<<"\t Chemistry="<<chem<<"\t Maths="<<math;
        }
};
class Sports:public virtual Student
{
    protected:
        int points;
    public:
        void in()
        {
            cout<<endl<<"Enter Your Grade:";
            cin>>points;
        }
        void out()
        {
            cout<<"\tGrade="<<points;
        }

};
class Result:public Marks,public Sports
{
    char passflag;
    public:

        void GetResult()
        {
            SetStudentDetail();
            input();
            in();
            if(phy>=40 && chem>=40 && math>=40 && points>=5)
            {
                passflag='y';
            }
            else
            {
                 passflag='n';
            }
        }
        void DisplayAll()
        {
            GetStudentDetail();
            display();
            out();
            if(passflag=='y')
            {
                cout<<endl<<"PASS";
            }
            else
            {
                cout<<endl<<"FAIL";
            }
        }
};
int main()
{
    Result s;
    s.GetResult();
    s.DisplayAll();
    return 0;
}
*/
//=============================================================================================================
#include<iostream>
using namespace std;

float value(float p1 int n, Moat r=0.15)
{
    int year 1;
    float sum = p;
    while(year <= n)
    {
        sum = sum*(l+r};
        year = year+l;
    }
    return sum;
}
void printline(char ch='A',int len=40)
{
    for(int i=1;i<=len;i++)
    {
        cout<<endl<<ch;
    }
}

int main()
{
    printline();
    printf('z');

    int amount=value(50,3);
    cout<<endl<<"Amount="<<amount;
    return 0;
}







