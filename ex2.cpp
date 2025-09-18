#include <iostream>

//object oriented programmming !!

// class Book{
//     public:
//         std::string name;
//         std::string author;
//         int price;
//         int pages;
//     void print();
// };

// void Book::print()
// {
//     std::cout << name << std::endl;
//     std::cout << author << std::endl;
//     std::cout << price << std::endl;
//     std::cout << pages << std::endl;
// }

// Constructors !!
/*
    Constructors in C++ are special member functions of a class that are automatically
    called when an object of that class is created.
    Their primary role is to initialize the data members of an object.
    constructor lets you create an object and set its initial values in a single line.
*/
// class expl{
//     public:
//         int age;
//         std::string name;
//     // expl()
//     // {
//     //     age = 0;
//     //     name = "\0";
//     // }
//     expl(int initialAge, std::string initialname)
//     {
//         age = initialAge;
//         name = initialname;
//     }
//     void    print();
// };
// void    expl::print()
// {
//     std::cout << name << std::endl;
//     std::cout << age << std::endl;
// }

// Constructor Overloading !!

// class exp{
//     public:
//         int age;
//         std::string name;
//         std::string city;
//     exp(){
//         name = "\0";
//         age = 0;
//         city = "\0";
//     }
//     exp(std::string init_name, int init_age){
//         name = init_name;
//         age = init_age;
//     }
//     exp(std::string init_name, int init_age, std::string init_city){
//         name = init_name;
//         age = init_age;
//         city = init_city;
//     }
// };

// Using Access Specifiers !!!
/*
in C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/

// Access Private Members !!

// class MyClass {
//   public:    // Public access specifier
//     int x;   // Public attribute
//     void    set_value(int value);
//     int     get_value();
//   private:   // Private access specifier
//     int y;   // Private attribute
// };

// void    MyClass::set_value(int value){
//     y = value;
// }
// int     MyClass::get_value(){
//     return (y);
// }

int main(){

    std::string line = "ahlan";
    std::sting obj = line;
    
}