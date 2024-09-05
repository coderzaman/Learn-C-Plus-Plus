// #include "civileng.h"
// CivilenG::CivilenG(){
//     cout<< "Civil Eng Default Constructor Call"<<endl;
// };

// CivilenG:: CivilenG(const string_view fullNameParm, const int ageParam,const string_view addressParam, const int contract_count, const string_view speciality_param)
// : Engineer(fullNameParm, ageParam, addressParam, contract_count), spec{speciality_param}
// {
//     cout<< "Civil Eng Custom Constructor Call"<<endl;
// };

// CivilenG:: CivilenG(const CivilenG &civileng):
// Engineer(civileng), spec{civileng.spec}
// {
//     cout<< "Civil Eng Copy Constructor Call"<<endl;
// }

// CivilenG::~CivilenG(){

// };

// ostream &operator<<(std::ostream &out, const CivilenG &civileng)
// {
//     // we know friend method can access private member but not
//     //  access any private mehtod
//     out << "["
//         << " Name: " << civileng.full_name
//         << ", Age: " << civileng.age
//         << ", Adress: " << civileng.getAddress()
//         << ", Contract Count: " << civileng.getContract() 
//         << ", Speciality: " << civileng.spec
//         << "]";
//     return out;
// }