// #ifndef ENGINEER_H
// #define ENGINEER_H
// #include <string>
// #include <string_view>
// #include <iostream>
// #include "person.h"
// using namespace std;

// class Engineer : public Person
// {
//     friend ostream &operator<<(ostream& out, const Engineer& engineer);


// public:
//     Engineer();
//     Engineer(const string_view full_name, const int age, const string_view address, const int contract_count);
//     ~Engineer();
//     Engineer(const Engineer &engineer);
//     int getContract() const{
//         return contract_count;
//      }
// private:
//     int contract_count{};
// };

// #endif