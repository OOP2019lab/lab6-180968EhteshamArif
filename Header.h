#include<iostream>
using namespace std;
//class student with respective functions and variables
class student
{
	static int counter;
	int ID;
	float *quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;
public:
	student();
	student(int,float);
	student(const student &);
	~student();
	void addQuizScore(float);
	float getGPA() const;
	void setGPA(float);
	void print() const;
	bool compare(student);
	void updateScore(int,int);
	int index;
	void swap(student*x,student*y);
};