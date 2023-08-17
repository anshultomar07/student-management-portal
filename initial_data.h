#include "admin.h"
#include<map>
#include<vector>

void enter_data(vector<student> &student_list, map<int,string> &password_map){
    student s1("Anshul Tomar",1,"UIET","IT",2024,"CFT", "YHN", 21);
    student s2("Abhay Kaushal",4,"UIET","IT",2024,"XYZ", "ABC", 21);
    student s3("Abhinav Singh",6,"UIET","IT",2024,"DEF", "QWE", 21);
    student s4("Aman Kharbanda",15,"UIET","IT",2024,"ASD", "CVB", 21);
    student s5("Anchal",18,"UIET","IT",2024,"IKM", "LKO", 21);
    student s6("Indrajeet Balotiya",44,"UIET","IT",2024,"EDF", "OKJ", 21);
    student s7("Jatin Jain",47,"UIET","IT",2024,"QSC", "VBH", 21);

    student_list.push_back(s1);
    student_list.push_back(s2);
    student_list.push_back(s3);
    student_list.push_back(s4);
    student_list.push_back(s5);
    student_list.push_back(s6);
    student_list.push_back(s7);

    password_map[s1.roll_no] = "07042002";
    password_map[s2.roll_no] = "02042002";
    password_map[s3.roll_no] = "14052002";
    password_map[s4.roll_no] = "13042001";
    password_map[s5.roll_no] = "19112002";
    password_map[s6.roll_no] = "14032001";
    password_map[s7.roll_no] = "23102002";
}