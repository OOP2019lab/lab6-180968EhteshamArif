#include"Header.h"
using namespace std;
int main()
{
	student s1;//default constructor will be invoked as the protype suggests
	s1.addQuizScore(10);
	s1.addQuizScore(4);
	s1.addQuizScore(7);
	s1.addQuizScore(1);
	s1.print();//function to print the information
	cout<<endl;
	student s2(4,2);//overloaded constructor will be invoked
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);
	s2.print();
	cout<<endl;
	student s3=s1;//copy constructor will be invoked
	s3.print();
	cout<<endl;
	s3.updateScore(1,3);//score will be updated for quiz 1 and set to 3
	s3.print();
	cout<<endl;
	s1.compare(s2);//compare function to print those objects having gpa greater than 2.0
	cout<<endl;
	s3.setGPA(3.0);//function that set the gpa to 3.0
	s3.print();
	cout<<endl;
	s1.print();
	cout<<endl;
	return 0;
}
//destructors wiwll be invoked for id 3,2,1 respectively
