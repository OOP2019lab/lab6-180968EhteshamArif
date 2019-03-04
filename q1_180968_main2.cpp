#include"Header.h"
using namespace std;
//function to print student array
void printStudentArray(student arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i].print();
	}
	cout<<endl;
}
//swap to sort students
//it is not perfect because the variables aren't accessible as we are not to change the class variables 
//we can copy quizsccore array member by member but the variables are not accessible
void swap(student *x,student *y)
{
	student temp=*x;
	*x=*y;
	*y=temp;
}
//function to get GPA in another array and returning that array
student* aboveGPA(student *arr,int size,int &count)
{
	count=0;
	student*newarry=new student[size];
	for(int i=0;i<size;i++)
	{
		if(arr[i].getGPA()>2.0)
		{
			newarry[count]=arr[i];
			count++;
		}
	}
	return newarry;
}
//sort function to sort the objects
void sort(student*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i].getGPA()<arr[j].getGPA())
			{			
			    swap(arr[i],arr[j]);
			}
		}
	}

}
//main 2
int main()
{
	

	/*student std[3]= {student(3,2.0),student(3,3.0),student(4,2.33)};  //overloaded constructor will be invoked as the prototype suggests
	std[0].addQuizScore(1);
	std[0].addQuizScore(4);
	std[0].addQuizScore(10);
	std[1].addQuizScore(10);
	std[1].addQuizScore(4);
	std[1].addQuizScore(9);
	std[2].addQuizScore(9);
	std[2].addQuizScore(8);
	std[2].addQuizScore(7);
	printStudentArray(std,3);   //function to print the array
	cout<<endl;*/
	        ////////////
	/*student std1(3,2.0);  //overloaded constructors will be invoked
	student std2(3,1.0);
	student std3(4,2.33);
	student std4(2,3);
	student *std;          //default constructors will be invoked as the prototype suggests
	std=new student[4];     //defuat constructors will be invoked
	std[0]=std1;            //copy constructors as th data of object std1 is being copied in std[0]
	std[0].addQuizScore(1);
	std[0].addQuizScore(4);
	std[0].addQuizScore(10);
	std[1]=std2;
	std[1].addQuizScore(10);
	std[1].addQuizScore(4);
	std[1].addQuizScore(9);
	std[2]=std3;
	std[2].addQuizScore(9);
	std[2].addQuizScore(8);
	std[2].addQuizScore(7);
	std[3]=std4;
	std[3].addQuizScore(2);
	std[3].addQuizScore(3);
	printStudentArray(std,4);
	cout<<endl;
	int count;
	std=aboveGPA(std,4,count);      //function that return objects with gpa greater than 2.0
	for(int i=0;i<count;i++)
	{
		cout<<"The Gpa of student"<<i+1<<" is :"<<std[i].getGPA()<<endl;  //after aboveGpa function the gpa will be sorted
	}*/	
	//sort(std,4);
	//cout<<endl;
	//printsimple(std,4);	//to print array 
	return 0;
}
//distructors will be invoked