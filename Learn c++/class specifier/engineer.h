// #ifndef ENGINEER_H
// #define ENGINEER_H
// #include <string>
// #include <string_view>
// #include <iostream>
// #include "person.h"
// using namespace std;

// class Engineer : private Person
// {
//     friend iostream &operator<<(iostream &out, Engineer engineer);

// public:
//     Engineer();
//     ~Engineer();
//     void buildSomething()
//     {
//         pAge = 24;
//         pFullName = "Sadio Mane";
//         contract_count = 100;
//         // But you can not access any private
//         // Member other classes
//         // pAddress = "Cox's Bazar"; //inccesseble
//         cout << "["
//         << "Name: " << getName()
//         << ", Age: " << getAge()
//         << ", Adress: " << getAderess()
//         << ", Cotract count: " << contract_count
//         << "]";
//     };

// private:
//     int contract_count{};
// };

// #endif