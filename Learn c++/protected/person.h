// #ifndef PERSON_H
// #define PERSON_H
// #include <string>
// #include <string_view>
// #include <iostream>
// using namespace std;

// class Person
// {
//     friend ostream &operator<<(ostream &out, Person &person);

// public:
//     Person();
//     Person(string &firstName_param, string &lastName_param);
//     ~Person();

//     string_view getFirsName()
//     {
//         return firstName;
//     };
//     string_view getLastName()
//     {
//         return lastName;
//     };

//     void setFirstName(string &fn)
//     {
//         firstName = fn;
//     }

//     void setLastName(string &ln)
//     {
//         lastName = ln;
//     }

// protected:
//     string_view firstName = "Abu";
//     string_view lastName = "Huraira";
// };
// #endif