// #ifndef PERSON_H
// #define PERSON_H
// #include <string>
// #include <string_view>
// #include <iostream>
// using namespace std;

// class Person
// {
//     friend ostream &operator<<(ostream& out, const Person& person);


// public:
//     string_view full_name;
//     Person();
//     Person(const string_view full_name, const int age, string_view address);
//     ~Person();

//     string_view getAddress() const{
//         return address;
//     }
// protected: 
//     int age;
// private: 
//     string_view address;
// };
// #endif