/*Addition Program
#include <iostream>
using namespace std;
int main()
{
    int a,b,add;
    cout<<"\nEnter The Numbers:"<<endl;
    cin>>a;
    cin>>b;
    cout<<endl<<" a = "<<a<<" and b = "<<b;

    add=a+b;
    cout<<"\n The Addition = "<<add;
    return 0;
}
*/

/*--------------------------------------------------------------------------------------
diplay the Information On output screen
#include<iostream>
using namespace std;
int main()
{
    cout<<" Name : Pooja Patil "<<endl;
    cout<<" Address: A/P Tulshi "<<endl;
    cout<<" Number :9309444742 "<<endl<<endl;

    cout<<"----ACADEMIC DTAILS------"<<endl;
    cout<<"Collge : SVERI'S"<<endl;
    cout<<"major : CSE"<<endl;

    return 0;
}
*/

/*------------------------------------------------------------------------------------
used sequence characters

#include<iostream>
using namespace std;
int main()
{
    cout<<"Cricketers "<<endl<<" 1.Rohit sharma \n 2.Virat Kohli\n 3.Ms.dhoni\n "<<endl;

    cout<<"Rohit Gurunath Sharma\0 (born 30 April 1987) is an Indian international "<<endl;
    cout<<"cricketer who currently\v captains the India\nnn national cricket team across all formats"<<endl;
    cout<<"He is a right-handed batsman"<<endl;
    return 0;
}
*/
//-------------------------------------------------------------------------------------

/*
------manipulators in CPP:

#include<iostream>
//#include<iomanip>
int main()
{

   // std::cout<<"hiiii"<<std::setw(20)<<"hello World"<<std::endl;//setw()

   //setprecision()
   double pi=3.1494860923;
   //std::cout<<std::setprecision(3)<<pi<<std::endl; //setprecision(NOP WE have To print)

   //fixed
   std::cout<<"pi = "<<std::fixed<<pi<<std::endl;//it print fixed values of pi

   //Scientific
   std::cout<<"Scientific Pi = "<<pi<<std::endl; //scientific

   //Right And Left
   //std::cout<<std::right<<std::setw(50)<<"Hello "<<std::endl; //Right And Left

   //Boolalpha
   bool A=0;
   std::cout<<std::boolalpha<<"A ="<<A<<std::endl;

   int value = 45;
   std::cout<<"the hex ="<<std::hex<<value<<std::endl;
   std::cout<<"the oct ="<<std::oct<<value<<std::endl;
   std::cout<<"the dec ="<<std::dec<<value<<std::endl;

   return 0;
}
*/
//-------------------------------------------------------------------------------------
/*-------literals and Constant-----
#include<iostream>
int main()
{

   // literals
    int x=20;
    x=30;
    std::cout<<"The value of X = "<<x<<std::endl;

    //Constant
    const int a=4;
    std::cout<<a;

    //a =9;
    //std::cout<<a; //cannot be modified


    //for floating values
    const float maxvalue = 100.0;
    const float minvalue = 0.0;


    //for character constant
    const char ch='A';

    std::cout<<"The Value Of Char And Minvalue ,Maxvalue = "<<maxvalue<<std::endl;
    //Constant using in expression

    float range=maxvalue-minvalue;
    std::cout<<"\nThe range = "<<range<<std::endl;

    return 0;
}

//Try anothers progranmas
#include<iostream>
int main()
{
    int x=10;

    //const int x =100;
    const int y=1;
    std::cout<<x<<" "<<y<<std::endl;

    x=100;
    //y=100;
    std::cout<<x<<" "<<y<<std::endl;
}
*/
//-------------------------------------------------------------------------------------

/*
taking Input from user and display the Output cin and cout

#include<iostream>
int main()
{
    int intvalue;
    float floatvalue;
    char charvalue;
    double doubvalue;

    std::cout<<"\nEnter The values : "<<std::endl;
    std::cin>>intvalue;

    std::cout<<"\nEnter The float values :"<<std::endl;
    std::cin>>floatvalue;

    std::cout<<"\nEnter the charvalues :"<<std::endl;
    std::cin>>charvalue;

    std::cout<<"\nEnter the double values :"<<std::endl;
    std::cin>>doubvalue;


    std::cout<<"\nThe Values Are : "<<intvalue<<" "<<floatvalue<<" "<<charvalue<<" "<<doubvalue<<" "<<std::endl;
    return 0;
}
*/
//------------------------------------------------------------------------------------

/*
---Boolean Types
#include<iostream>
int main()
{
    int x=10;
    bool b=(x>=10);
    std::cout<<b<<std::endl;//1

    bool ans=(x%5==0);
    std::cout<<ans<<std::endl; //1

    //boolean values
    bool istrue=1;
    bool isfalse=0;

    std::cout<<istrue<<std::endl;//1
    std::cout<<isfalse<<std::endl;//0


    //Boolalpha
    std::cout<<std::boolalpha<<std::endl; //we used here boolalpha manipulater
    std::cout<<istrue<<std::endl; //true
    std::cout<<isfalse<<std::endl; //false

    return 0;
}
*/

//------------------------------------------------------------------------------------

/*
------for characters
#include<iostream>
using namespace std;
int main()
{
    //characterss
    char ch;
    cout<<"\n Enter the character" <<endl;
    cin>>ch;
    cout<<"\nDisplaying That Charcter :"<<ch <<endl;


    //wchar_t
    wchar_t wch;
    wcout<< "\nEnter your character :"<<endl;
    wcin>>wch;
    wcout<< "\n The Character = "<<wch<<endl;

    /*char8_t

   // char16_t ch16;
    //wcout<< "\nEnter your character :"<<endl;
    //wcin>>ch16;
    //wcout<< "\n The Character = "<<ch16<<endl;

    /*char32_t
    wcout<<"\nEnter the charater :"<<endl;
    char32_t ch32;
    wcin>>ch32;
    wcout<<"\n The character of char32_t = "<<ch32<<endl;

    return 0;
}
*/

//character arrays
/*
#include<iostream>
int main()
{

    const int Max_Size=100;
    char charArray[Max_Size];

    std::cout<<"\n Enter The String With Spaces "<<std::endl;
    std::cin.getline(charArray,Max_Size);

    std::cout<<"diplay The Entered String :"<<std::endl<<charArray<<std::endl;


    char ch[]="Rohit Gurunath Sharma (born 30 April 1987) is an Indian international cricketer who currently captains the India national cricket team across all formats He is a right-handed batsman" ;
    int char_count=sizeof(ch);
    std::cout<<char_count<<std::endl;
    std::cout<<ch<<std::endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int x=1000;
int main()
{
    int x=100;
    cout<<"in main Scope x = "<<x<<" Golabal x = "<<::x<<endl;

    {
        int a=x;
        cout<<"Inner scope x = "<<x<<" a = "<<a<<" Global x = "<<::x<<endl;
        int x=123;
        cout<< " In the InnerScope x = "<<x<<endl;
    }

    cout<< " The outer a = "<<a<<endl;
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------
/*
1.CPP Program to Check Whether a Number is Triangular or Not
Triangular Numbers are those numbers which are obtained by continued summation of the natural numbers 1, 2, 3, 4, 5, etc.

Example: 15 is Triangular Number because it can be obtained by 1+2+3+4+5+6 i.e. 1+2+3+4+5+6=15

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"\n Enter the number "<<endl;
    cin>>num;
    int i=1,temp;
    while(1)
    {
        temp=temp+i;
        i++;
        if(temp==num)
        {
            cout<<"\n The Number "<<num<<" is Triangular"<<endl;
            break;
        }
    }
    if(temp!=num)
    {
        cout<<"\n The Number " <<num <<" Is Not Triangular "<<endl;
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------
/*
2.CPP Program to check Natural Number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"\nEnter A number "<<endl;
    cin>>num;
    if(num>0)
    {
        cout<<"\nEntered Number is Natural number "<<num<<endl;
    }
    else
    {
        cout<<"\nEntered Number is Not Natrual "<<num<<endl;
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------
/*
3.CPP Program to find HCF
#include<iostream>
using namespace std;
int main()
{
    int x,y,i,max=0,hcf;

    cout<<"\nEnter Your Numbers:"<<endl;
    cin>>x>>y;
    if(x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    for(i=1;i<=max/2;i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    cout<<" HCF = "<<hcf;
}
*/
//-------------------------------------------------------------------------------------------------
/*
9.CPP Program to find HCF

#include<iostream>
using namespace std;
int main()
{
    int x,y,i,Max=0,hcf,LCM;
    cout<<" Enter the Numbers :";
    cin>>x>>y;
    if(x>y)
    {
        Max=x;
    }
    else
    {
        Max=y;
    }
    for(i=1;i<=Max/2;i++)
    {
        if(x%2==0 && y%2==0)
        {
            hcf=i;
        }
    }
    cout<<" HCF = "<<hcf<<endl;

    LCM=(x*y)/hcf;
    cout<<"LCM = "<<LCM<<endl;
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
/*4.CPP Program to Check Abundant Number

Ex:- Abundant number  12 having a proper divisor is 1, 2, 3, 4, 6

The sum of these factors is 16 it is greater than 12
So it is an Abundant number

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,i;
    cout<<"\n Enter the Number "<<endl;
    cin>>num;

    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }
    }
    cout<<"\nThe sum = "<< sum <<endl;
    if(sum>num)
    {
        cout<<"\nEntered Number " << num <<" is Abundant";
    }
    else
    {
        cout<<"\nEntered Number " << num <<" not is  Abundant";
    }
}
*/
//----------------------------------------------------------------------------------------------------
/*
5.CPP Program to Check Amicable Number
Amicable numbers exhibit a unique relationship where the sum of the proper divisors of each number is equal to the other number.
For example, the pair (220, 284) is amicable because the sum of divisors of 220 is 284, and the sum of divisors of 284 is 220.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum1=0,sum2=0,i;
    cout<<"\nEnter two numbers "<<endl;
    cin>> num1 >> num2;

    cout<<"\n Number 1nd Divisers "<<endl;
    for(i=1;i<=num1/2;i++)
    {
        if(num1%i==0)
        {
            cout<<i<<endl;
            sum1=sum1+i;
        }
    }
    cout<<"\n The Sum is 1st Number "<<sum1<<endl;
    cout<<"\n Number 2nd Divisers "<<endl;
    for(i=1;i<=num2/2;i++)
    {
        if(num2%i==0)
        {
            cout<<i<<endl;
            sum2=sum2+i;
        }
    }
    cout<<"\n The Sum is 2st Number "<<sum2<<endl;
    if(num1==sum2 && num2==sum1)
    {
        cout<<"\nEntered Numbers are Amicable ";
    }
    else
    {
        cout<<"\n Entered Number are Not Amicable ";
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------
/*
6.CPP Program to Check Automorphic Number
For example, 25 is an automorphic number because its square is 625,
and the last two digits (25) match the original number.

#include<iostream>
using namespace std;
int main()
{
    int num,sq;
    cout<<"\nEnter the Number "<<endl;
    cin>>num;

    sq=num*num;
    cout<<"\nThe square is = "<<sq<<endl;

    if(sq%100==num)
    {
        cout<<"\n The Number is Automorphic "<<num<<endl;
    }
    else
    {
        cout<<"\n The Number is Not Automorphic "<<num<<endl;
    }

}
*/
//--------------------------------------------------------------------------------------------------
/*
7.CPP Program to Condense a Number
For example, consider the number 9875. The program would calculate 9 + 8 + 7 + 5 = 29,
then 2 + 9 = 11, and finally 1 + 1 = 2. The condensed form is 2.

#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"\nEnter the Number :"<<endl;
    cin>>num;

    while(1)
    {
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        cout<<" "<<sum<<endl;
        num=sum;

        if(num<=9 && num>=0)
         {
             cout<<"\n The Number is Condensed "<<num<<endl;
             break;
         }
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------
/*
8.CPP Program to Check Disarium Number

For example, the number 89 is a Disarium number because 8^1 + 9^2 equals 89.

#include<iostream>
using namespace std;
int main()
{
    int cnt=0,i,num,rem,j,power,sum=0,NN;
    cout<<"\nEnter The Number : "<<endl;
    cin>>num;
    NN=num;
    while(num!=0)
    {
        cnt++;
        num=num/10;
    }
    num=NN;
    while(num!=0)
    {
        rem=num%10;
        j=1,power=1;
        while(j<=cnt)
        {
            power=power*rem;
            j++;
        }
        sum=sum+power;
        num=num/10;
        cnt--;
    }
    cout<<"\n The sum of numbers are "<<sum<<endl;

    num=NN;
    if(sum==num)
    {
        cout<<"\n The Number "<<num<<" is Disarium number "<<endl;
    }
    else
    {
        cout<<"\n The Number "<< num <<" not Disarium number "<<endl;
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
#include<stdio.h>

int main()
{
    enum value{VAL1=0, VAL2, VAL3, VAL4, VAL5} var;
    printf("%d\n", sizeof(var));
    return 0;
}


