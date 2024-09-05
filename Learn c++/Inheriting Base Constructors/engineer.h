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
//     using Person:: Person;

// public:
    
//     // Engineer();
//     Engineer(string_view name, int age_param, string_view address, int contract);

//     Engineer(const Engineer& engineer);
//     // int getContract() const{
//     //     return contract_count;
//     //  }

//     ~Engineer();
// private:
//     int contract_count{};
// };

// #endif