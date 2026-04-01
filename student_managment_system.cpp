#include<iostream>
#include<cstring>
using namespace std;

struct student{
    int roll_no;
    char name[30];
    char address[50];
    char course[20];
    float fees;
};

int main(){

    student stud[50];
    int n = 0; // current number of students
    int choice;

    do{
        cout<<"\n\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display All Students\n";
        cout<<"3. Search by Roll Number\n";
        cout<<"4. Update Student\n";
        cout<<"5. Delete Student\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

        // ✅ ADD
        case 1:
            cout<<"\nEnter number of students to add: ";
            int m;
            cin>>m;
            cin.ignore();

            for(int i=0;i<m;i++){
                cout<<"\nEnter Roll No: ";
                cin>>stud[n].roll_no;
                cin.ignore();

                cout<<"Enter Name: ";
                cin.getline(stud[n].name,30);

                cout<<"Enter Address: ";
                cin.getline(stud[n].address,50);

                cout<<"Enter Course: ";
                cin.getline(stud[n].course,20);

                cout<<"Enter Fees: ";
                cin>>stud[n].fees;
                cin.ignore();

                n++;
            }
            break;

        // ✅ DISPLAY
        case 2:
            cout<<"\n--- Student Records ---\n";
            for(int i=0;i<n;i++){
                cout<<"\nRoll No: "<<stud[i].roll_no;
                cout<<"\nName: "<<stud[i].name;
                cout<<"\nAddress: "<<stud[i].address;
                cout<<"\nCourse: "<<stud[i].course;
                cout<<"\nFees: "<<stud[i].fees<<endl;
            }
            break;

        // 🔍 SEARCH
        case 3:
            int searchRoll;
            cout<<"Enter Roll No to search: ";
            cin>>searchRoll;

            for(int i=0;i<n;i++){
                if(stud[i].roll_no == searchRoll){
                    cout<<"\nStudent Found!\n";
                    cout<<"Name: "<<stud[i].name;
                    cout<<"\nAddress: "<<stud[i].address;
                    cout<<"\nCourse: "<<stud[i].course;
                    cout<<"\nFees: "<<stud[i].fees<<endl;
                    break;
                }
                if(i==n-1){
                    cout<<"Student not found!\n";
                }
            }
            break;

        // ✏ UPDATE
        case 4:
            int updateRoll;
            cout<<"Enter Roll No to update: ";
            cin>>updateRoll;
            cin.ignore();

            for(int i=0;i<n;i++){
                if(stud[i].roll_no == updateRoll){
                    cout<<"Enter New Name: ";
                    cin.getline(stud[i].name,30);

                    cout<<"Enter New Address: ";
                    cin.getline(stud[i].address,50);

                    cout<<"Enter New Course: ";
                    cin.getline(stud[i].course,20);

                    cout<<"Enter New Fees: ";
                    cin>>stud[i].fees;

                    cout<<"Updated Successfully!\n";
                    break;
                }
                if(i==n-1){
                    cout<<"Student not found!\n";
                }
            }
            break;

        // ❌ DELETE
        case 5:
            int delRoll;
            cout<<"Enter Roll No to delete: ";
            cin>>delRoll;

            for(int i=0;i<n;i++){
                if(stud[i].roll_no == delRoll){

                    // shift left
                    for(int j=i;j<n-1;j++){
                        stud[j] = stud[j+1];
                    }
                    n--;

                    cout<<"Deleted Successfully!\n";
                    break;
                }
                if(i==n-1){
                    cout<<"Student not found!\n";
                }
            }
            break;

        case 6:
            cout<<"Exiting...\n";
            break;

        default:
            cout<<"Invalid choice!\n";
        }

    }while(choice != 6);

    return 0;
}