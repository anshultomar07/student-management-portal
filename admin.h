#include "student.h"

void _admin_portal(vector<student>& student_list, map<int,string> &password_map){
    cout<<"Welcome to Admin"<<endl;
    int in = 0;
    while(in == 0){    
        cout<<"What do you want to do ? "<<endl;
        cout<<"1) See List of All Students."<<endl;
        cout<<"2) Get Details of a Stduent."<<endl;
        cout<<"3) Add Student."<<endl;
        cout<<"4) Remove Student."<<endl;
        cout<<"5) Exit."<<endl;
        int x;
        cin>>x;

        system("cls");
        if(x == 5) break;

        if(x == 1){
            
            for(int i=0; i<student_list.size(); i++){
                student_list[i].print_data();
                cout<<endl;
            }
        }
        while(x == 2){
            int _roll_no;

            cout<<"To get the details of a particular student enter the Roll No. of Student: ";
            cin>>_roll_no;

            student temp("",0,"","",0,"","",0);
            bool found = 0;
            for(int i=0; i<student_list.size(); i++){
                if(student_list[i].roll_no == _roll_no){
                    temp = student_list[i];
                    found = 1;
                }
            }

            if(found){
                temp.print_data();
            }
            else{
                cout<<"Please Enter Valid Roll No."<<endl;
            }

            cout<<"Do you want search for another student ? (0/1) : ";
            int check;
            cin>>check;
            if(!check)
                break;
            system("cls");
        }
        while(x == 3){
            cout<<"To add a new Student-"<<endl;
            string _name;
            cout<<"Enter name : ";
            cin>>_name;
            int _roll_no;
            cout<<"Enter Roll No. : ";
            cin>>_roll_no;
            string _department;
            cout<<"Enter Department : ";
            cin>>_department;
            string _branch;
            cout<<"Enter Branch : ";
            cin>>_branch;
            int _batch;
            cout<<"Enter Batch : ";
            cin>>_batch;
            string _father_name;
            cout<<"Enter Father's Name : ";
            cin>>_father_name;
            string _mother_name;
            cout<<"Enter Mother's Name : ";
            cin>>_mother_name;
            int _age;
            cout<<"Enter age: ";
            cin>>_age;

            student new_student(_name,_roll_no,_department,_branch,_batch, _father_name, _mother_name, _age);
            student_list.push_back(new_student);
            cout<<"Enter password for the student : ";
            string _pass;
            cin>>_pass;
            password_map[new_student.roll_no] = _pass;

            cout<<"Want to add more students ? (0/1) : ";
            int check;
            cin >> check;
            if(!check)
                break;
            system("cls");
        }
        while(x == 4){
            int _roll_no;
            cout<<"Enter Roll No. of Student whose details you want to delete. : ";
            cin>>_roll_no;

            bool found = 0;
            int index = -1;

            for(int i=0; i<student_list.size(); i++){
                if(student_list[i].roll_no == _roll_no){
                    index = i;
                    found = 1;
                }
            }

            if(found) {
                cout<<"Student Found!!"<<endl;
                cout<<"Student Name : "<<student_list[index].name<<endl;
                cout<<"Do you really want to delete the details of this Student ? (0/1) : ";
                int confirm;
                cin>>confirm;
                cout<<endl<<endl;
                if(confirm){
                    student_list.erase(student_list.begin()+index);
                    cout<<"Deleted Successfully!!!!"<<endl;
                }
                else{
                    cout<<"Student data deletion cancelled!!!"<<endl;
                    break;
                }
            }
            else cout<<"Student Not Found!!!"<<endl;

            cout<<"Want to delete more ? (0/1) : ";
            int check;
            cin>>check;
            if(!check) break;
            system("cls");
        }
        cout<<"Want to exit admin portal ? (0/1) : ";
        cin>>in;
        system("cls");
    }
}