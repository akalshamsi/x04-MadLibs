//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
string name;
char grade;
double gpa;
int time; 

std::cout<<"Enter a name: ";
std::cin>>name;
std::cout<<"Enter a grade: ";
std::cin>>grade;
std::cout<<"Enter a gpa: ";
std::cin>>gpa;
std::cout<<"Enter a time: ";
std::cin>>time;
std::cout<<"on monday at "<<time<<":00 AM,  "<<name<<" went to the class to see his math grade , his grade was " << grade << ". Then he went on his laptop to check his gpa. It was " << gpa << " He was happy and he went on and celebrated" <<std::endl;
  return 0;
}
