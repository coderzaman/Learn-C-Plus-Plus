// #ifndef PLAYER_H
// #define PLAYER_H
// #include <iostream>
// #include <string>
// #include <string_view>
// #include "person.h"
// using namespace std;

// class Player : public Person
// {
//     friend ostream &operator<<(ostream &out, Player &player);

// public:
//     Player();
//     ~Player();
//     void play()
//     {
//         // When you inherit a class Publicly we can
//         // only access public and protected members in othre
//         // class
//         pFullName = "Abdullah";
//         pAge = 19;
//         // Getting a compiler error because we can not access
//         // private memeber
//         // pAddress = "Syria";
//     };

// private:
//     int carrear_start_year{};
//     double current_salary{};
//     int health_factor{};
// };
// #endif