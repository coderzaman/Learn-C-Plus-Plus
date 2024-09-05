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
//     };

//     // But you can not doing base class private member/method Resurrecting as
//     //  as public or protected

//     // But you can base protected member Resurrecting as public

// public:
//     using Person::pAge;
//     using Person::sum;

// protected:
//     using Person::getAderess;
//     using Person::getAge;
//     using Person::getName;
//     using Person::pFullName;

// private:
//     int contract_count{};
// };

// #endif