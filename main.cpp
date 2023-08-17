#include "initial_data.h"

int main()
{

    vector<student> student_list;

    map<int,string> password_map;

    enter_data(student_list,password_map);


    system("cls");
    cout<<"----------------------------------------------University Portal----------------------------------------------"<<endl;
    int _exit = 0;
    while(_exit == 0){
        
        cout<<"Enter 1 to continue as Admin."<<endl;
        cout<<"Enter 2 to continue as Student"<<endl;
        cout<<"Enter 3 to Exit."<<endl;
        
        int x;
        cin>>x;

        system("cls");
        
        while(x == 1){

            const string password = "admin";
            
            cout<<"Enter password to Login as Admin : "<<endl;
            string pass;
            cin>>pass;
            
            if(pass != password){
                cout<<"Wrong password"<<endl;
                cout<<"Do you want to attempt again ? (1/0) : ";
                int try_again;
                cin>>try_again;
                if(try_again)
                    continue;
                else{
                    _exit = 1;
                    break;
                }
            }
            else{
                cout<<"Logging you in."<<endl;
                sleep(1);
                cout<<"Successfully Logged in...."<<endl;
                sleep(1);
                system("cls");
                _admin_portal(student_list,password_map);
                break;
            }
            
        }
        while(x == 2){
            system("cls");
            cout<<"To Enter as a Student-"<<endl;
            cout<<"Enter Roll No. : ";
            int _roll_no;
            cin>>_roll_no;
            bool found = 0;

            student curr_student("",0,"","",0,"","",0);
            for(int i=0; i<student_list.size(); i++){
                if(student_list[i].roll_no == _roll_no){ 
                    found = 1;
                    curr_student = student_list[i];
                }
            }

            if(!found) {
                cout<<"Student not Found !!!"<<endl;
                cout<<"Do you want to try again ? (0/1) : ";
                int check;
                cin>>check;
                if(!check) break;
            }
            else{
                cout<<"Enter Password : ";
                string pass;
                cin>>pass;
                if(pass != password_map[curr_student.roll_no]){
                    cout<<pass<<" "<<curr_student.roll_no<<endl;
                    cout<<"Wrond Password!!!!"<<endl;
                    
                }
                else{
                    cout<<"Here's your data : "<<endl<<endl;
                    system("cls");
                    curr_student.print_data();
                }
                cout<<endl;
                cout<<"Do you want to search again ? (0/1) : ";
                int check;
                cin>>check;
                if(!check) break;
            }
        }
        system("cls");
        cout<<"Do you want to leave the portal ? (0/1) : ";
        int check;
        cin>>check;
        if(check) _exit = 1;
    }

    // system("cls");
    cout<<"Thankyou for using University Portal.....";
    sleep(1);
    system("cls");
    


    return 0;
}
