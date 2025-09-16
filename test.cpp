#include <iostream>
#include <memory>
#include <cstring>

using namespace std;

namespace student_info
{
    typedef struct student
    {
        string student_name;
        int id;
        double gpa;
    }info;

    info    *collect_info(string name, int id, double gpa)
    {
        info *data;
        data = new info;
        data->student_name = name;
        data->id = id;
        data->gpa = gpa;
        return data;
    }
}

int main()
{
    string name;
    int id;
    double gpa;

    cout << "Enter student's name:";
    cin >> name;
    cin.ignore();
    cout << "Enter student's ID:";
    cin >> id;
    cin.ignore();
    cout << "Enter student's GPA:";
    cin >> gpa;
    cin.ignore();
    student_info::info *studnet_ptr = student_info::collect_info(name, id, gpa);

    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << studnet_ptr->student_name << endl;
    cout << "Id: " << studnet_ptr->id << endl;
    cout << "Gpa: " << studnet_ptr->gpa << endl;

    delete studnet_ptr;
}