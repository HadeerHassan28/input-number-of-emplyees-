#include <iostream>
#include<string>

#define EMP 2
using namespace std;
//struct many users:
struct Address{
    string city;
    int st_no,b_no;
};

struct Employee {
    int code,age;
    string name;
    float gross,bouns,tax;
    Address emp_add;
};
int main()
{
    float netSal[EMP]={0.0};
    Employee emp[EMP];
    //input:
    for (int i=0; i<EMP; i++){
    cout << "Enter the emplyoee data" << endl;
    cout << "\n please enter the code" << endl;
    cin >>emp[i].code;

    cout << "\n please enter the name" << endl;
    cin >>emp[i].name;

    cout << "\n please enter the age" << endl;
    cin >>emp[i].age;

    cout << "\n please enter street number" << endl;
    cin >> emp[i].emp_add.st_no;

    cout << "\n please enter building number" << endl;
    cin >>emp[i].emp_add.b_no;

    cout << "\n please enter the city" << endl;
    cin >>emp[i].emp_add.city;

    cout << "\n please enter the gross" << endl;
    cin >>emp[i].gross;

    cout << "\n please enter the bouns" << endl;
    cin >>emp[i].bouns;

    cout << "\n please enter the tax" << endl;
    cin >>emp[i].tax;
    }

    for(int i=0;i<EMP;i++){
        netSal[i]= emp[i].gross + emp[i].bouns  - emp[i].tax;
        cout << "\n the code is" << emp[i].code << endl;
        cout << "\n the name is" << emp[i].name << endl;
        cout << "\n the age is" << emp[i].age << endl;
        cout << "\n the street number is" << emp[i].emp_add.st_no << endl;
        cout << "\n the building number is" << emp[i].emp_add.b_no<< endl;
        cout << "\n the the city is" << emp[i].emp_add.city << endl;
        cout << "\n the gross is" << emp[i].gross << endl;
        cout << "\n the bouns is" << emp[i].gross << endl;
        cout << "\n the tax is" << emp[i].tax << endl;
        cout <<"\n the salary is" << netSal[i] << endl;
    }
    return 0;
}
