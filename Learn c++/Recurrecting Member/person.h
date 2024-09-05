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
//     Person(string_view fullNameParm, int ageParam, string_view addressParam);
//     ~Person();

//     // Getter
//     string getName()
//     {
//         return pFullName;
//     }

//     string getAderess()
//     {
//         return pAddress;
//     }

//     int getAge()
//     {
//         return pAge;
//     }

// public:
//     string pFullName{"Null"};

// private:
//     string pAddress{"Null"};

// protected:
//     int sum(int x, int y)
//     {
//         return x + y;
//     }
//     int sum(int x, int y, int z)
//     {
//         return x + y + z;
//     }
//     int pAge{};
// };
// #endif