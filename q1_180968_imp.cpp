#include"Header.h"
using namespace std;
//Default Constructor
student::student()
{
	index=0;
	++counter;
	ID=counter;
	quizCapacity=3;
	quizTaken=0;
	GPA=0;
	quizScore=new float[quizCapacity];
	cout<<"Default constructor invoked for ID :"<<ID<<endl;
}
//overloaded Constructor
student::student(int quizcap,float gpa)
{
	index=0;
	++counter;
	ID=counter;
	quizCapacity=quizcap;
	quizTaken=0;
	GPA=gpa;
	quizScore=new float[quizCapacity];
	cout<<"Overloaded constructor invoked for ID :"<<ID<<endl;
}
//copy constructor
student::student(const student & a)
{
	++counter;
	ID=counter;
	quizTaken=a.quizTaken;
	GPA=a.GPA;
	quizCapacity=a.quizCapacity;
	if(a.quizScore!=nullptr)
	{
		quizScore=new float[a.quizCapacity]; 
		for(int i=0;i<a.quizTaken;i++)
		{
			quizScore[i]=a.quizScore[i];
		}
	}
	cout<<"Copy Constructor invoked for ID :"<<ID<<endl;
}
//destructor
student::~student()
{
	ID=counter;
	counter--;
	delete [] quizScore;
	cout<<"Destructor invoked for ID :"<<ID<<endl;
}
//fucntion to add quiz score in quizscore array
void student::addQuizScore(float x)
{
	if(quizTaken>=quizCapacity)
	{
		cout<<"There is no capacity for new Quiz"<<endl;
	}
	else
	{
		quizScore[index]=x;
		index++;
		quizTaken++;
	}
}
//set function for gpa
void student::setGPA(float a)
{
	GPA=a;
}
//get function for gpa
float student::getGPA()const
{
	return GPA;
}
//function to print information
void student::print() const
{
	cout<<"The student ID is :"<<ID<<endl;
	cout<<"The student GPA is :"<<GPA<<endl;
	if(quizTaken!=0)
	{
	  cout<<"The number of quizes taken by the student are :"<<quizTaken<<endl;
	}
	for(int i=0;i<quizTaken;i++)
	{
		cout<<"The score for quiz "<<i+1<<" is :"<<quizScore[i]<<endl;
	}
}
//function to compare objects student according to gpa
bool student::compare(student a)
{
	if(GPA>a.GPA)
	{
		cout<<"True"<<endl;
		return true;
		
	}
	else
	{
		cout<<"False"<<endl;
		return false;
	
	}
}
//function to update score
void student::updateScore(int quiznumber,int newscore)
{
	if(quizTaken<quiznumber)
	{
		cout<<"The quiz wasn't taken"<<endl;
	}
	else
	{
		quizScore[quiznumber]=newscore;
	}
}
//initializing static variable counter
int student::counter=0;
//i have included couts to see when the constructors are invoked.
