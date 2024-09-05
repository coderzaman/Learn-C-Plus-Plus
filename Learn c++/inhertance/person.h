// #ifndef PERSON_H
// #define PERSON_H
// #include <string>
// #include <iostream>
// using namespace std;

// class Person
// {
//     friend ostream &operator<<(ostream &out, Person &person);

// public:
//     Person();
//     Person(string &firstName_param, string &lastName_param);
//     ~Person();

//     string getFirsName()
//     {
//         return firstName;
//     };
//     string getLastName()
//     {
//         return lastName;
//     };

//     void setFirstName(string& fn)
//     {
//         firstName = fn;
//     }

//     void setLastName(string& ln)
//     {
//         lastName = ln;
//     }

// private:
//     string firstName = "Abu";
//     string lastName = "Huraira";
// };
// #endif