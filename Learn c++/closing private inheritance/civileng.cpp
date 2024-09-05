// #include "civileng.h"

// CivilenG::CivilenG(){

// };
// CivilenG::~CivilenG(){

// };

// ostream &operator<<(std::ostream &out, CivilenG &civileng)
// {
//     // we know friend method can access frivate member but not
//     //  access any private mehtod
//     //   out << "["
//     //      << "Name: " << civileng.getName()
//     //      << ", Age: " << civileng.getAge()
//     //      << ", Adress: " << civileng.getAderess()
//     //      << "]";

//     // But when you access private memeber from derrive private class with
//     // Friend function it will be work
//     // also it work when you inherit base class as private you can access 
//     // protected member of base class 
//     out << civileng.possible;
//     return out;
// }