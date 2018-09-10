#include <iostream>


using namespace std;

int main()
{
 
 unsigned int exam_score;
 cout<<"Enter exam score"<<endl;
 cin>>exam_score;
 
 
 if(exam_score<=44)
	{
		cout<<"Your grade is: F";
		
	}
	
else if (exam_score<=49&&exam_score>=45)
	{
		cout<<"Your grade is: E";
	
	 } 

else if (exam_score<=54&&exam_score>=50)
	{
		cout<<"Your grade is: D";
	
	}
	
else if (exam_score<=59&&exam_score>=55)	
	{
		cout<<"Your grade is: D+";
	
	}
	
else if (exam_score<=64&&exam_score>=60)	
	{
		cout<<"Your grade is: C";
	
	}
	
else if (exam_score<=69&&exam_score>=65)	
	{
		cout<<"Your grade is: C+";
	
	}
	
else if (exam_score<=74&&exam_score>=70)	
	{
		cout<<"Your grade is: B";
	
	}
	
else if (exam_score<=79&&exam_score>=75)	
	{
		cout<<"Your grade is: B+";
	
	}
	
else if (exam_score<=100&&exam_score>=80)	
	{
		cout<<"Your grade is: A";
	
	}
	
	
	
	return 0;
	
	}
