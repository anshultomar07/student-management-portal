#include <iostream>
#include <vector>
#include <unistd.h>
#include<windows.h>   
#include<map>   
using namespace std;

class student{
  string department;
  string branch;
  int batch;
  string father_name;
  string mother_name;
  int age;
public:
  
  int roll_no;
  string name;
  student(string name, int roll_no, string department, string branch, int batch, string father_name, string mother_name, int age){
      this->name = name;
      this->roll_no = roll_no;
      this->department = department;
      this->branch = branch;
      this->batch = batch;
      this->father_name = father_name;
      this->mother_name = mother_name;
      this->age = age;

  }
  
  void print_data(){
      cout<<"Name : "<<this->name<<endl;
      cout<<"Roll No. : "<<this->roll_no<<endl;
      cout<<"Department : "<<this->department<<endl;
      cout<<"Branch : "<<this->branch<<endl;
      cout<<"Batch : "<<this->batch<<endl;
      cout<<"Father's Name : "<<this->father_name<<endl;
      cout<<"Mother's Name : "<<this->mother_name<<endl;
      cout<<"Age : "<<this->age<<endl;
  }
};
