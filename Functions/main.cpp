/*
#include <iostream>
using namespace std;

//int sum(int,int); initialization of function

void sum(int x,int y)
{
    int sum=x+y;
    cout<<"The Additon is"<<sum;
}
int main()
{
    int a,b,ans;
    cout<<endl<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    sum(a,b);
    //cout<<endl<<"The additon Is "<<ans;
    return 0;
}
*/
//----------------------------------------------------------------------------------
/*Square Function
#include<iostream>
using namespace std;
int squre(int x)
{
    return x*x;
}
int main()
{
    int no,ans;
    cout<<endl<<"Enter The Number"<<endl;
    cin>>no;
    ans=squre(no);
    cout<<endl<<"The Square is "<<ans<<endl;
    return 0;
}
*/
//=-----------------------------------------------------------------------------
/*
Using void

#include<iostream>
using namespace std;
void sqaure(float a)
{
    float ans =a*a;
    cout<<endl<<"the Ans = "<<ans<<endl;
}
int main()
{
    int num;
    cout<<endl<<"Enter The Number"<<endl;
    cin>>num;
    sqaure(num);
    return 0;

}
*/
//------------------------------------------------------------------------------
/*
Find Max

#include<iostream>
using namespace std;

int findmax(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int maximum,a,b;
    cout<<endl<<"Enter The Two Numbers"<<endl;
    cin>>a>>b;
    maximum=findmax(a,b);
    cout<<endl<<"The max = "<<maximum;
    return 0;
}
*/
//===========================================================================

/* Write a program to add two Time Objects

#include<iostream>
using namespace std;

class Time
{
    private:
        int sec;
        int min;
        int hour;

    public:
        void settime()
        {
            cout<<endl<<"Enter the Time In (HH:MM:SS)";
            cin>>hour>>min>>sec;
        }
        void settime(int h,int m,int s)
        {
            hour=h;
            min=m;
            sec=s;
        }
        void showtime()
        {
            cout<<endl<<":"<<hour<<":"<<min<<":"<<sec<<":";
        }

        void addtime(Time x,Time y)
        {
            sec=x.sec+y.sec;
            min=x.min+y.min+(sec/60);
            sec=sec%60;


            hour=x.hour+y.hour+(min/60);
            min=min%60;
        }

};

int main()
{
    Time t1,t2,t3;
    t1.settime();

    int a,b,c;
    cout<<endl<<"ENter A B and C";
    cin>>a>>b>>c;

    t2.settime(a,b,c);

    cout<<endl<<"T1";   t1.showtime();
    cout<<endl<<"T2";   t2.showtime();

    t3.addtime(t1,t2);
    cout<<endl<<"T3";    t3.showtime();

    return 0;
}
*/
//=====================================================================================
/*
 Write a program to add two Time Objects(with returning the Time object)

#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int min;
        int sec;

    public:
        void getTime()
        {
            cout<<endl<<"Enter Your Time In (HH:MM:SS)";
            cin>>hour>>min>>sec;
        }

        void getTime(int x,int y,int z)
        {
           hour=x;
           min=y;
           sec=z;
        }

        void showtime()
        {
            cout<<hour<<":"<<min<<":"<<sec<<":";
        }

        Time addtime(Time x)
        {
            Time temp;
            temp.sec=sec+x.sec;
            temp.min=min+x.min+(temp.sec/60);
            temp.sec=temp.sec%60;

            temp.hour=hour+x.hour+(temp.min/60);
            temp.min=temp.min%60;

            return temp;

        }
};

int main()
{
    Time t1,t2,t3;

    t1.getTime();

    int a,b,c;
    cout<<endl<<"Enter Your a b And c";
    cin>>a>>b>>c;

    t2.getTime(a,b,c);



    cout<<endl<<"T1:"; t1.showtime();
    cout<<endl<<"T2:"; t2.showtime();

    t3=t1.addtime(t2);

    cout<<endl<<"T3:"; t3.showtime();

    return 0;
}
*/
//==============================================================================================
/*
 WAP to add two complex Numbers

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
            cout<<endl<<"Enter The Values Of real";
            cin>>real;
            cout<<endl<<"Enter The value Of Img:";
            cin>>img;
        }

        void showComplex()
        {
            cout<<real<<" +j "<<img;
        }

        void AddComplex(Complex p,Complex q);

};

void Complex::AddComplex(Complex p,Complex q)
{
        real=p.real+q.real;
        img=p.img+q.img;
}


int main()
{
    Complex C1,C2,C3;

    C1.getComplex();

    C2.getComplex();


    cout<<endl<<"C1 ";   C1.showComplex();
    cout<<endl<<"C2 ";   C2.showComplex();

    C3.AddComplex(C1,C2);

    cout<<endl<<"C3 ";   C3.showComplex();

    return 0;
}
*/
//=========================================================================================
/*

 WAP to add two complex Numbers With Return

#include<iostream>
using namespace std;
class complex
{
    private:
        int real;
        float img;

    public:
    void GetComplex()
    {
        cout<<endl<<"Enter The Real Value";
        cin>>real;
        cout<<endl<<"Enter The img Value";
        cin>>img;
    }

    void showComplex()
    {
        cout<<real<<" +j "<<img;
    }

    complex addComplex(complex x);
};
complex complex::addComplex(complex x)
{
    complex temp;

    temp.real=real+x.real;
    temp.img=img+x.img;

    return temp;
}
int main()
{
    complex c1,c2,c3;

    c1.GetComplex();
    c2.GetComplex();

    cout<<endl<<" C1 "; c1.showComplex();
    cout<<endl<<" C2 "; c2.showComplex();

    c3=c1.addComplex(c2);

    cout<<endl<<" C3 "; c3.showComplex();

    return 0;
}
*/
//==========================================================================================

/// Friend Function:
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
            cout<<endl<<"Enter The Name Of Person :";
            cin.getline(nm,50);
            cout<<endl<<"Enter the Age Of Person :";
            cin>>age;
        }
        friend void display(Person);

};
void display(Person p)
{
    cout<<endl<<" Name is "<<p.nm<<" And Age Is "<<p.age;
}
int main()
{
    Person p1;

    p1.input();

    display(p1);

    return 0;
}
*/
//==========================================================================================

/// Outside function as a friend of two or more classes
/*

#include<iostream>
using namespace std;
class Student;
class Person
{
    private:
        char name[50];
        int age;
    public:
        void input()
        {
            cout<<endl<<"Enter The Person name ";
            cin.getline(name,50);

            cout<<endl<<"Enter The age Of Person ";
            cin>>age;
        }
        void display()
        {
            cout<<endl<<" Person Name : "<<name<<" Person age: "<<age;
        }
        friend void FindElder(Person,Student);
};

class Student
{
    private:
        char nm[50];
        int ageS;
    public:
        void input()
        {
            fflush(stdin);
            cout<<endl<<" Enter The STudent Name ";
            cin.getline(nm,50);

            cout<<endl<<" Enter The student age ";
            cin>>ageS;
        }
        void display()
        {
            cout<<endl<<"Student Name : "<<nm<<" Student age : "<<ageS;
        }

        friend  void FindElder(Person,Student);
};

void FindElder(Person p,Student s)
{
    if(p.age>s.ageS)
    {
        cout<<endl<<" Elder is : ";
        cout<<endl<<" Person Name : "<<p.name<<" Person age: "<<p.age;
    }
    else
    {
        cout<<endl<<" Elder is : ";
        cout<<endl<<"Student Name : "<<s.nm<<" Student age : "<<s.ageS;
    }

}


int main()
{
    Person p1;
    Student s1;

    p1.input();
    p1.display();

    s1.input();
    s1.display();


    FindElder(p1,s1);


    return 0;
}
*/
//=====================================================================================

/// Member Functions of one class- can be friend of another classs

/*
#include<iostream>
using namespace std;
class Student;
class Person
{
    private:
        char nm[50];
        int age;

    public:
        void in()
        {
            fflush(stdin);
            cout<<endl<<"Enter The Person name ";
            cin.getline(nm,50);

            cout<<endl<<"Enter The age Of Person ";
            cin>>age;
        }
        void display(Student s);
};

class Student
{
    private:
        char nm[50];
        int age;

    public:
        void in()
        {
            cout<<endl<<"Enter The Student name ";
            cin.getline(nm,50);

            cout<<endl<<"Enter The age Of Student ";
            cin>>age;
        }
        void out()
        {
            cout<<endl<<" Student Name : "<<nm<<" Student Age : "<<age;
        }

        friend void Person::display(Student s);
};

void Person::display(Student s)
{
    cout<<endl<<" Person Name : "<<nm<<" Person Age : "<<age;
    if(age>s.age)
    {
        cout<<endl<<" Person is Elder ";
    }
    else
    {
        cout<<endl<<" Student is Elder ";
    }
}

int main()
{
    Person p1;
    Student s1;

    s1.in();
    s1.out();

    p1.in();
    p1.display(s1);

    return 0;
}
*/
//=========================================================================================
/// All member functions of one class as a friend of another - (Friend class)
/*
#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:

        friend class B;


};
class B
{
    private:
        int b;
    public:
        void input(A& ob)
        {
            cout<<endl<<" Enter The Value Of A ";
            cin>>ob.a;
            cout<<endl<<" Enter The Value Of B ";
            cin>>b;
        }
        void display(A& ob)
        {
            cout<<endl<<" The Value Of a "<<ob.a;
            cout<<endl<<" The Value Of b "<<b;
        }
};

int main()
{
    A ob1;
    B ob2;

    ob2.input(ob1);

    ob2.display(ob1);

    return 0;
}
*/
//============================================================================================
/// Swaping the private data using friend class
/*
#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:

        void input()
        {
            cout<<endl<<" Enter The Value Of a : ";
            cin>>a;
        }
        void display()
        {
            cout<<endl<<" a : "<<a;
        }

        friend void Swap(A&,B&);
};
class B
{
    private:
        int b;
    public:

        void input()
        {
            cout<<endl<<" Enter The Value Of b : ";
            cin>>b;
        }

        void display()
        {
            cout<<endl<<" b : "<<b;
        }

        friend void Swap(A&,B&);

};

void Swap(A& x ,B& y)
{
    int temp=x.a;
    x.a=y.b;
    y.b=temp;

}
int main()
{
    A a1;
    B b1;

    a1.input();
    b1.input();

    cout<<endl<<" Before Swap ";
    a1.display();
    b1.display();

    Swap(a1,b1);

    cout<<endl<<" After Swap ";
    a1.display();
    b1.display();

    return 0;
}
*/
//===========================================================================================












