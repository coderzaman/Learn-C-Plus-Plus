// #include "person.h"

// Person:: Person(){

// };
// Person:: Person(const string_view full_name_param, const int age_param, const string_view address_param):
// full_name{full_name_param}, age{age_param}, address{address_param}
// {
//     cout << "Person Custom Constructor Call" << endl;
// };

// Person:: Person(const Person& source)
// :full_name{source.full_name}, age{source.age}, address{source.address}
//     {
//         cout << "Person Copy Constructor Called" << endl;
//     }

// Person:: ~Person(){
//     cout<< "Person Destructor Call"<<endl;
// };

// ostream &operator<<(ostream& out, const Person& person){
//      out << "["
//         << "Name: "  << person.full_name
//         << ", Age: " << person.age
//         << ", Adress: " << person.address
//         << "]" << endl;
//     return out;
// }