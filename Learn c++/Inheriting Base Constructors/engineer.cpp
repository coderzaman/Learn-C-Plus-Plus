// #include "engineer.h"
// // Engineer::Engineer()
// // {
    
// // };

// Engineer:: Engineer(const Engineer& engineer)
// : Person(engineer), contract_count{engineer.contract_count}
// {
//     cout << "Person Copy Constructor Called" << endl;
// };   
// Engineer:: Engineer(string_view name, int age_param, string_view address, int contract) : 
//     Person(name, age_param, address), contract_count{contract}
//     {
//     }
// Engineer::~Engineer(){

// };
// ostream &operator<<(ostream& out, const Engineer& engineer)
// {
//     out << "["
//         << "Name: " << engineer.full_name
//         << ", Age: " << engineer.age
//         << ", Adress: " << engineer.getAddress()
//         << ", Cotract count: " << engineer.contract_count
//         << "]" << endl;
//     return out;
// }