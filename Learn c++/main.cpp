
// ////////////////////////////////////////////////////////
// /////////////////////SIZE OF ARRAY//////////////////////
// ////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     double x[] = {22.2,10,30,34,31,33,32,32,98,32};
// //     int len = sizeof(x) / sizeof(x[0]);
// //     cout << "Length of array is " << len << endl;
// // }

// ////////////////////////////////////////////////////////
// /////////////////////CHARACTER OF ARRAY/////////////////
// ////////////////////////////////////////////////////////

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     //Way One
// //     char str1[] = {'H','e','l','l','o','\0'};
// //     cout << sizeof(str1) << endl;
// //     for (size_t i = 0; i < sizeof(str1); i++)
// //     {
// //         cout << str1[i];
// //     }

// //     cout << endl;
// //     cout << str1 << endl;

// //     char str2[] = {"Hello"};
// //     cout << sizeof(str2) << endl;
// // }

// ////////////////////////////////////////////////////////
// /////////////////////POINTER////////////////////////////
// ////////////////////////////////////////////////////////
// // #include<iostream>
// // #include <cctype>
// // using namespace std;

// // int main(){
// //     int *int_pointer = 0;
// //     cout << sizeof(int_pointer) << endl;
// //     double *double_ptr = 0;
// //     cout << sizeof(double_ptr) << endl;

// //     double *d_ptr, d_n;
// // Line 50 *d_ptr decalere as as pointer Variable
// // d_n is double variable
// //     cout << sizeof(d_ptr) << endl;
// //     cout << sizeof(d_n) << endl;

// //     int x = 10;
// //     int *x_m_addresses = &x;

// //     cout << (x_m_addresses) << endl;

// // Derefferencing a pointer
// //     double number1 = 10.2;
// //     double *dm_ad = &number1;
// //     cout << (*dm_ad) << endl;
// // }

// //////////////////////////////////////////////////////
// ///////////////////POINTER TO CHAR////////////////////
// //////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;

// // int main(){
// //     //Don't Allow Modify the string
// //     const char *ch1 = "Hello, world!";
// //     //cout << ch1 << endl;
// //     //cout << *ch1 << endl;

// //     while (*ch1 != '\0')
// //     {
// //         cout << *ch1;
// //         *ch1++;
// //     }

// // }

// ////////////////////////////////////////////////////////
// /////////////////////PROGRAM MEMORY MAP/////////////////
// ////////////////////////////////////////////////////////

// // #include<iostream>
// // #include <cstddef>
// // using namespace std;
// // int main(){
// // Using pointer so far
// // int number = 10;
// // int *p_number = &number;

// // cout << endl;
// // cout << "Decalreing pointer and assigning address:" << endl;
// // cout << "number: " << number << endl;
// // cout << "p_number: " << p_number << endl;
// // cout << "&number: " << &number << endl;
// // cout << "*p_number: " << *p_number << endl;

// // //Intializers contains a junk value
// // int *number1_p;
// // int number1 = 10;
// // number1_p = &number1;

// // cout << *number1_p << endl;

// // DYNAMIC HEAP MEMORY
// //  int *pointer = new int();
// //  *pointer = 10;
// //  cout << *pointer << endl;
// //  delete pointer;
// //  *pointer = 0;
// //  cout << *pointer << endl;

// // Warning//////
// //  realeas the memory after use dynamic memory

// //     int *p_number4 = new int();
// //     int *p_number5 = new int(10);
// //     int *p_number6 = new int(20);

// //     //Initialize with valid memory address as declaration
// //     cout << "*p_number4 = " << p_number4 << endl;
// //     cout << "*p_number4 = " << *p_number4 << endl;

// //     cout << "p_number5 = " << p_number5<< endl;
// //     cout << "*p_number5 = " << *p_number5 << endl;

// //     cout << "p_number6 = " << p_number6<< endl;
// //     cout << "*p_number6 = " << *p_number6 << endl;

// //     //Remember the realeas the memory
// //     delete p_number4;
// //     delete p_number5;
// //     delete p_number6;

// //     p_number4 = NULL;
// //     p_number5 = NULL;
// //     p_number6 = NULL;

// //     cout << endl << endl;
// //     //resuse pointer
// //     p_number4 = new int(2);
// //     p_number5 = new int(10);
// //     p_number6 = new int(20);
// //     cout << "*p_number4 = " << p_number4 << endl;
// //     cout << "*p_number4 = " << *p_number4 << endl;

// //     cout << "p_number5 = " << p_number5<< endl;
// //     cout << "*p_number5 = " << *p_number5 << endl;

// //     cout << "p_number6 = " << p_number6<< endl;
// //     cout << "*p_number6 = " << *p_number6 << endl;
// //     //Remember delete again and set as null
// //     delete p_number4;
// //     delete p_number5;
// //     delete p_number6;

// //     p_number4 = NULL;
// //     p_number5 = NULL;
// //     p_number6 = NULL;

// //     cout << "Program finished well!" << endl;
// //     //Note: Don't delete twice pointer

// // }

// ////////////////////////////////////////////////////////
// /////////////////CHARACTER MANIPUTALTION////////////////
// ////////////////////////////////////////////////////////

// // #include<iostream>
// // using namespace std;

// // int main(){
// // Check the character alphanumeric or not
// // Alphanumeric should be
// // digits (0123456789)
// // uppercase letters (ABCDEFGHIJKLMNOPQRSTUVWXYZ)
// // lowercase letters (abcdefghijklmnopqrstuvwxyz)

// //   cout << "Is alphanumeric: " << isalnum('x') << endl;
// //   cout << "Is alphanumeric: " << isalnum('^') << endl;

// //   //Chaek a charater alphanumeric or not
// //   char chekCharacter;
// //   cout << "Input a charater: ";
// //   cin >> chekCharacter;

// //   if(isalnum(chekCharacter)){
// //     cout << chekCharacter << " is an alphanumeric character." << endl;
// //   }else{
// //     cout << chekCharacter << " is not an alphanumeric character." << endl;
// //   }

// // Check the character alphabetic or not
// // alphabetic character should be
// // uppercase letters (ABCDEFGHIJKLMNOPQRSTUVWXYZ)
// // lowercase letters (abcdefghijklmnopqrstuvwxyz)

// // Check a  character alphabetic or not
// //    char chekCharacter;
// //    cout << "Input a charater: ";
// //    cin >> chekCharacter;

// //   if(isalpha(chekCharacter)){
// //     cout << chekCharacter << " is an alphabetic character." << endl;
// //   }else{
// //     cout << chekCharacter << " is not an alphabetic character." << endl;
// //   }

// // Check the character lowercase or not
// // alphabetic character should be
// // lowercase charater should be (abcdefghijklmnopqrstuvwxyz)

// // check all blank charter in a String
// //  char str[] = "Hi, Im Abu Huraira. I want to learan c++ or any other language beginning to advance.";
// //  cout << str << endl;

// // //isblank should be work in c++ 11 or after version
// // cout << sizeof(str) << endl;
// // size_t blank_count = 0;
// // for (size_t i = 0; i < sizeof(str); i++)
// // {
// //    if(isblank(str[i])){
// //      blank_count++;
// //    }
// // }

// // cout <<"Total Blank Charater fountd in this sentecne is: "<< blank_count << endl;

// // islower and isupper
// // count all uppercase and lowercase characters from and sentecne
// //  char str[] = "Hi, Im Abu Huraira. I want to learan c++ or any other language beginning to advance.";
// //  size_t countUppercase = 0;
// //  size_t countLowercase = 0;
// //  size_t countspaceandohterCharater = 0;

// // for (size_t i = 0; i < sizeof(str); i++){
// //         if(islower(str[i])){
// //            countUppercase++;
// //         }else if(isupper(str[i])){
// //             countLowercase++;
// //         }else{
// //              countspaceandohterCharater++;
// //         }

// //    }

// //   cout << "Number of Upper Case characters is: " << countUppercase << endl;
// //   cout << "Number of Lower Case characters is: " << countLowercase << endl;
// //   cout << "Number of Space and other Charater is: " << countspaceandohterCharater << endl;

// // Check character digit or not
// // isdigit(ch);
// // digit should be digits: 0123456789

// // char str[] = "Hi, I am 123. Who are you? I am 456";
// // size_t digitCount = 0;
// // for (int i = 0; i < sizeof(str); i++){
// //    if (isdigit(str[i])){
// //       digitCount++;
// //    }
// // }

// // if(digitCount >0){
// //     cout << "Digit Found." << endl;
// //     cout << "Number of digits is: " << digitCount << endl;
// // }

// // Convert uppercase to lowercase and lower case to upper case or case convert
// //  char str[] = "You convert me! It's very tramendous. I am rely upest. Thank you!";
// //  char convertCh [sizeof(str)];

// // for (size_t i = 0; i < sizeof(str); i++)
// // {
// //     convertCh[i] = toupper(str[i]);
// // }

// // cout << "Converted Uppacase string is: \n" << convertCh << endl;

// // for (size_t i = 0; i < sizeof(str); i++)
// // {
// //     convertCh[i] = tolower(str[i]);
// // }
// // cout << "Converted lowercase string is: \n" << convertCh << endl;

// // Check charter has punctuation characters
// // ispunct
// /*punctuation should be  !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~ */

// // char str[] = "Hi #! What's up? I am :). What about you? I really (: today.";
// // size_t totalPunctuationCount = 0;
// // for (size_t i = 0; i < sizeof(str); i++)
// // {
// //     if(ispunct(str[i])){
// //         cout << str[i] << endl;
// //         totalPunctuationCount++;
// //     }
// // }

// // cout << "Total number of punctuation characters: " << totalPunctuationCount << endl;

// //}

// ////////////////////////////////////////////////////////
// /////////////////STRING MANIPUTALTION///////////////////
// ////////////////////////////////////////////////////////

// // #include<iostream>
// // #include<Cstring>
// // using namespace std;
// // int main(){
// // const char message1[] = "The sky is cloudy";
// // const char *message2 = "The sky is cloudy";

// // //strlen ignore null '\0' character
// // cout << "String length with strlen(): " << strlen(message1) << endl;
// // cout << "String length with strlen(): " << strlen(message2) << endl;

// // //sizeof count also null '\0' character
// // cout << "String length with sizeof(): " << sizeof(message1) << endl;

// // //Size of pointer not string length
// // cout << "String length with sizeof(): " << sizeof(message2) << endl;

// // String comparison with strcomp() function
// //  char str1[] ="Hello";
// //  char str2[] ="HEllo";

// // //It's nessery to declare const if it's an array
// // const char *str3 = "HEllo";
// // const char *str4 = "Hello";

// // You can not reassign string array. It's will through you an error message
// // str1 ="Hello";
// // str2 ="HEllo";

// // You can change pointer array string where you want

// // cout << "Compare with str1 and str2: " << strcmp(str1, str2) << endl;
// // cout << "Compare with str3 and str4: " << strcmp(str3, str4) << endl;

// // How many charater  you compare from string with strncmp() use
// // strncmp(string 1, string 3, numberof charter you comare)

// // const char *str1 = "Hello";
// // const char *str2 = "HellO";
// // const size_t n = 4;

// // cout << "Compareing within 4 charater in two string: " << strncmp(str1, str2, n) << endl;
// // cout << "Compare with str1 and str2: " << strcmp(str1, str2) << endl;

// // const char str1[] = "Try not. Do, or do not. There is no try";
// // //const char *result = str1;
// // size_t i = 0;
// // size_t totalcCount = 0;
// // const char search = 'T';

// // int x = strchr(str1[i], search);
// // cout << x << endl;

// // // while (result[i] != '\0')
// // // {
// // //    if (strchr(result[i], search))
// // //    {
// // //     cout << result[i] <<endl;
// // //     totalcCount++;
// // //    }

// // //    i++;
// // // }

// // cout << "Total cCount: " << totalcCount << endl;

// //   const char *str = "Try not. Do, or do not. There is no try.";
// //   char target = 'T';
// //   const char *result = str;
// //   cout << result << endl;
// //   cout << str << endl;
// //   result = strchr(result, target);
// //   cout << result++ << endl;
// //   result = std::strchr(result, target);
// //   cout << result++ << endl;
// //   while ((result = std::strchr(result, target)) != NULL) {
// //     std::cout << "Found '" << target
// //               << "' starting at '" << result << "'\n";

// //     // Increment result, otherwise we'll find target at the same location
// //     ++result;
// //  }

// // const char *str= "Hi, What's up? How are you?, How old are you?";
// // sizeof(str);
// // const char *result = str;
// // int count = 0;

// // while ( (result = strchr(result,'H')) != NULL)
// // {

// //     cout << result << endl;
// //     result++;
// //     count++;
// // }

// // cout << count << endl;

// // Finds the last occurrence of ch
// //  char str[] = "What's up?";
// //  const char *last_occurrences = strrchr(str,'s');
// //  cout << last_occurrences+1 << endl;

// // const char x[] = "what";
// // const char *z = x;
// // cout << z << endl;

// //  }

// // #include<iostream>
// // #include <cstring>
// // using namespace std;
// // int main(){
// // char str[50] = "Hello, ";
// // char str2[50] = "What's up?";
// // strcat(str, str2);
// // //cout << str << endl;

// // strcat(str, "\nI am Fine.");
// // cout << str << endl;

// // char str[50] = "Hello, ";
// // char str2[50] = "What's up?";
// // strcat(str, str2);
// // //cout << str << endl;

// // strcat(str, "\nI am Fine.");
// // cout << str << endl;

// //    char* str1 = new char[5]{'H','i','\0'};
// //    char* str2 = new char[5]{' ','W','h','o','\0'};
// //    size_t len = strlen(str1) + 1;
// //    cout << len << endl;
// //
// //    strcat(str1,str2);
// //
// //
// //    len = strlen(str1) + 1;
// //    cout << str1;
// //    cout << len << endl;
// /////////
// // strncat
// /////////

// //      char str1[30] = "Hi, what's up!";
// //      char str2[12] = " Fine.,You?";
// //
// //      strncat(str1,str2,5);
// //      cout << str1;

// //        const char* src = "Take the test.";
// //        auto dest = make_unique<char[]>(strlen(src)+1);
// //        strcpy(dest.get(), src);
// //        dest[0] = 'H';
// //        dest[0] = 'M';
// //        cout << dest.get();

// //         const char* src = "hi";
// //         char dest[6] = {};
// //         std::strncpy(dest, src, 3);
// //         cout << src;

// //    const char* src = "hiHel";
// //    char dest[10] = {'a', 'b', 'c', 'd', 'e', 'f','g','h','i','j'};
// //    strncpy(dest, src, 5);
// //
// //    cout << "The contents of dest are: ";
// //    for (char c : dest) {
// //        if (c) {
// //            cout << c << ' ';
// //        } else {
// //            cout << "\\0" << ' ';
// //        }
// //    }
// //    cout << '\n';
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     // int* x = new int[100]{10,30,40};
// //     // x[101] = 101;
// //     // string x = "";
// //     // string y = "Hello";
// //     // string z = y;
// //     // cout << z;

// //     // string str1 {"Hello, there.",5};
// //     //  string str1 {"Hello, there.",5};
// //     // cout << str1 << endl;

// //     // string str2(4,'A');
// //     // cout << str2 << endl;

// //     // string greeting  {"Hello world!",6,6};
// //     // cout << greeting;

// // }

// ////////////////////////////////////////////////////////
// ////////////////////////FUNCTION////////////////////////
// ////////////////////////////////////////////////////////

// // #include<iostream>
// // using namespace std;
// // //Function taking a parameter and doesnot
// // //give result explecitly
// // void enter_bar(unsigned age){
// //     if(age > 18){
// //         cout << "Plese your age is out of " << age << ".Plese Processed.";
// //     }else{
// //         cout << "You can not enter The Bhar.";
// //     }
// //     return;
// // }

// // int main(){
// //     enter_bar(10);
// //     return 0;
// // }

// ////////////////Five///////////////
// // Calculte number with recursive function

// // #include<iostream>
// // using namespace std;
// // int calculte(int x, int y, int z){
// //     if(x == 1){
// //         return y + z;
// //     }else if(x == 2){
// //         return y - z;
// //     }else if(x == 3){
// //         return y * z;
// //     }else if(x == 4){
// //         return y / z;
// //     }else{
// //         cout << "Please Select Correct Option" << endl;
// //         cout << "Enter 1 for(+): ";
// //         cout << "\nEnter 2 for(-): ";
// //         cout << "\nEnter 3 for(x): ";
// //         cout << "\nEnter 4 for(/): ";
// //         cin >> x;
// //         cout << "\n";
// //         cin >> y >> z;
// //         return calculte(x,y,z);
// //     }
// // }

// // int main(){
// //     int x,y,z;
// //     cout << "Enter 1 for(+): ";
// //     cout << "\nEnter 2 for(-): ";
// //     cout << "\nEnter 3 for(x): ";
// //     cout << "\nEnter 4 for(/): ";

// //     cin >> x;
// //     cout << "\n";
// //     cin >> y >> z;

// //     int result = calculte(x, y, z);
// //     cout << result << "\n";

// // }

// //////////////////Six////////////////////
// // Calculte number with recursive function

// // #include<iostream>
// // using namespace std;

// // int multiply(int x, int y){
// //     cout << "Beffore Increment in Funtion x is:" << x << ", y is:" << y << endl;
// //     int result = ++x * ++y;
// //     cout << "After Increment in Funtion x is:" << x << ", y is:" << y << endl;
// //     return result;
// // }

// // int main(){
// //     int x = 10;
// //     int y = 5;
// //     cout << "Beffore Increment in function Outside of Funtion x is:" << x << ", y is:" << y << endl;
// //     int result = multiply(x, y);
// //     cout << "After Increment in function Outside of Funtion x is:" << x << ", y is:" << y << endl;

// // }

// ////////////////////////////////////////////////////////
// /////////FUNCTION DECLARATION AND DEFINATION////////////
// ////////////////////////////////////////////////////////
// ////////////SEVEN/////////////
// // #include<iostream>
// // using namespace std;
// // Function declaration
// // int max(int x, int y);
// // int min(int x, int y);
// // You can do this here also
// // int add(int , int );

// // int main(){
// // int x, y;
// // cout << "Pelase Enter Two Number: ";
// // cin >> x >> y;

// // cout << "Maximum Number: " << max(x, y) << endl;
// // cout << "Minimum Number: " << min(x, y) << endl;
// // cout << "Summation of Number: " << add(x, y);
// // }
// // Funtion Definition
// // Find Maximum
// // int max(int x, int y){
// //     if(x < y){
// //         return y;
// //     }else{
// //         return x;
// //         }
// // };
// // int min(int x, int y){
// //      if(x > y){
// //         return y;
// //     }else{
// //         return x;
// //         }
// // };
// // int add(int x, int y){
// //     return x + y;
// // };

// // #include<iostream>
// // using namespace std;
// // int main(){

// // }

// ////////////////////////////////////////////////////////
// ////////////////////PASS BY VALUE///////////////////////
// ////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // void func(int x){
// //     ++x; //Not any change outside of function
// //     cout << "In Function Body:\nMemory Adress: " << &x << " Value:" << x << endl;
// // }
// // int main(){
// //     int x = 10;
// //     cout << "Before Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// //     func(x);
// //     cout << "After Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// // }

// ////////////////////////////////////////////////////////
// ////////////////////PASS BY POINTER/////////////////////
// ////////////////////////////////////////////////////////
// // How it works:
// // x pointer variable Has also a memory address
// // int* x = *x main function memoryAdress;
// //  using namespace std;
// //  #include<iostream>
// //  void func(int* x){
// //      cout << "In Function Body:\nMemory Adress: " << &x << " Value:" << *x << endl;
// //      ++(*x);
// //      cout << "In Function Body: After Incremant,\nMemory Adress: " << &x << " Value:" << *x << endl;
// //  }
// //  int main(){
// //       int x = 10;
// //       cout << "Before Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// //       func(&x);
// //       cout << "After Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// //  }

// ////////////////////////////////////////////////////////
// ///////////////////PASS BY REFERENCE////////////////////
// ////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // int func(int& x){
// //     cout << "In Function Body:\nMemory Adress: " << &x << " Value:" << x << endl;
// //     ++(x);
// //     cout << "In Function Body: After Incremant,\nMemory Adress: " << &x << " Value:" << x << endl;

// // }

// // int main(){
// //     int x = 10;
// //     cout << "Before Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// //     func(x);
// //     cout << "After Calling Function:\nMemory Adress: " << &x << " Value:" << x << endl;
// // }

// //// Getting Things Out Of Functions
// ////////////////////////////////////////////////////////
// ///////////Input And Output Parameters//////////////////
// ////////////////////////////////////////////////////////
// // With reference
// // using namespace std;
// //  #include<iostream>
// //  void max(const int x,  const int y, int& z){
// //      if(x < y){
// //          z = y;
// //      }else{
// //          z = x;
// //      }
// //  }

// // int main(){
// //     int x = 10;
// //     int y = 50;
// //     int z;

// //     max(x, y, z);
// //     std:: cout << "Maximum Result: " << z << std:: endl;
// // }

// // With pointer
// //  using namespace std;
// //  #include<iostream>
// //  void max(const int x,  const int y, int* z){
// //      if(x < y){
// //          *z = y;
// //      }else{
// //          *z = x;
// //      }
// //  }

// // int main(){
// //     int x = 10;
// //     int y = 50;
// //     int z = 0;

// //     max(x, y, &z);
// //     cout << "Maximum Result: " << z << endl;
// //     // int x = 10;
// //     // int* y = &x;
// //     // cout << "Maximum Result: " <<y << endl;
// // }

// // String showing difference behaviour

// // #include <iostream>
// // using namespace std;
// // string Add(string x, string y){
// //     cout << "x memory: " << &x << endl;
// //      cout << "y memory: " << &y << endl;
// //     string result = x + y;
// //     cout << "Memory: " << &result << endl;
// //     return result;
// // }

// // int main(){
// //     string x = "Hello, ";
// //     string y = "World";
// //      cout << "x memory: " << &x << endl;
// //      cout << "y memory: " << &y << endl;
// //     string res = Add(x,y);
// //     cout << "Memory: " << &res << endl;
// // }

// ////////////////////////////////////////////////////////
// ////////////////////METHOD OVERLOAD/////////////////////
// ////////////////////////////////////////////////////////
// // #include <iostream>
// // using namespace std;

// // int max(int a, int b)
// // {
// //     if (a < b)
// //     {
// //         return b;
// //     }
// //     else
// //     {
// //         return a;
// //     }
// // };
// // // You cann't do this here also
// // //  auto max(int a, double b){
// // //      if(a < b){
// // //          return b;
// // //      }else{
// // //          //Wrong
// // //          //Can not return
// // //          //difference return data type
// // //          return a;
// // //      }
// // //  };
// // // You can not do this here. Method signature is not
// // //  Return type it's depends on parameter type, parameter number
// // //  or parameter order
// // //  double max(int a, double b){

// // // }

// // // int max(int a)
// // // {
// // //     return -1 * a;
// // // };

// // // double max(double a, double b)
// // // {
// // //     if (a < b)
// // //     {
// // //         return b;
// // //     }
// // //     else
// // //     {
// // //         return a;
// // //     }
// // // };

// // // void max(int a, int b, int c)
// // // {
// // //     if (a < b)
// // //     {
// // //         c = b;
// // //         cout << "Max: " << c << endl;
// // //     }
// // //     else
// // //     {
// // //         c = a;
// // //         cout << "Max: " << c << endl;
// // //     }
// // // }

// // // int main()
// // // {
// // //     cout << "Max: " << max(10, 20) << endl;
// // //     cout << "Postive: " << max(-10) << endl;
// // //     cout << "Max: " << max(10.10, 10.20) << endl;
// // //     max(10, 20, 0);
// // // }
// ////////////////////////////////////////////////////////
// /////////////////////LAMDA FUNCTION/////////////////////
// ////////////////////////////////////////////////////////

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// // Lamda Fucntion Signature:
// //[capture list](parameter) -> return type{
// //   fuction body
// // }
// // Calling lamda function and calling it through a name
// //  auto x =  []()
// //  {
// //      cout << "Lamda function" << endl;
// //  };
// //  x();
// //  x();

// // Declare and called it direcly
// //  []()
// //  {
// //      cout << "Lamda function" << endl;
// //  }();
// //'In this time you have only one chnace to calling lamda funciton'
// // Lamda funtion taking parameter
// //  [](double x, double y)
// //  {
// //      cout << "Result: " << x+y;
// //  }(10.9,9.1);

// // Lamda funtion taking parameter with assign lamda fuction to a variable
// //  auto x = [](double x, double y)
// //  {
// //      cout << "Result: " << x+y << endl;
// //  };

// // x(19.1,0.9);
// // x(99.9, 0.1);

// // Lamda funtion that return something without assign a variable
// //  cout << [](double x, double y)
// //  {
// //      return x + y;
// //  }(9.1,0.9) << endl;
// // Lamda funtion that return something without assign a variable
// //  auto x = [](double x, double y)
// //  {
// //      return x + y;
// //  };

// // cout << x(19.2,11.8) << endl;

// // auto x = [](double x, double y)
// // {
// //     return x + y;
// // }(19.2,11.8);

// // cout << x << endl;

// // Explicitly specipy the return type
// // Note: You can not convert double, int, float to string
// //  You can convert no to no convertion like float int or
// //  double to int
// //  auto x = [](double x, double y) ->int
// //  {
// //      return x + y;
// //  }(19.2,11.8);

// //  cout << x << endl;

// // auto x = [](double x, double y) ->int
// // {
// //     return x + y;
// // }(19.2,11.7);

// // cout << x << endl;
// // auto func1 = [](double x, double y) ->int
// // {
// //     return x + y;
// // };

// // cout <<func1(19.2,11.7) << endl;

// //   auto func1 = [](double x, double y) ->int
// // {
// //     return x + y;
// // };

// // auto func2 = [](double x, double y)
// // {
// //     return x + y;
// // };

// // int x = func1(11.22, 11.32);
// // cout << x  << endl;

// // double y = func2(11.22, 11.32);
// // cout << y;

// //////CAPTURED LIST///////**/
// // //Captured by value
// // int x = 10;
// // int y = 30;
// // cout << "Outside Function Memory Adress: " <<"x: " << &x << "y: " << &y << endl;

// // auto func = [x,y](/*int n, int a*/){
// //      cout << "Outside Function Memory Adress: " <<"x: " << &x << "y: " << &y << endl;
// //     cout << "Output: "<< x + y << endl/*+ n + a*/;
// // };

// // func();

// // x++;
// // y++;
// // //You do not pass increment value in func(x,y)
// // //Just use x,y as captured
// // func();

// // Captured by reffernce
// //  int x = 10;
// //  int y = 30;
// //  cout << "Outside Function Memory Adress: " <<"x: " << &x << "y: " << &y << endl;

// // auto func = [&x,&y](/*int n, int a*/){
// //      cout << "Inside Function Memory Adress: " <<" x: " << &x << " y: " << &y << endl;
// //     cout << "Output: "<< x + y << endl/*+ n + a*/;
// // };

// // func();

// // x++;
// // y++;
// // //we using refference and implicitly increment
// // //x and y value
// // //That's idcate same memory and funtion body and
// // //outside of function body
// // func();

// // Captured All by value
// //  int x = 2, y = 3;
// //  cout << "Outside Function Memory Adress: " <<"x: " << &x << " y: " << &y << endl;
// //  auto func = [=](/*int n, int a*/){
// //       cout << "Inside Function Memory Adress: " <<"x: " << &x << " y: " << &y << endl;
// //      cout << "Output: "<< x + y << endl/*+ n + a*/;
// //  };

// // func();
// // return 0;

// // Captured All by Reference
// //  int x = 2, y = 3;
// //  cout << "Outside Function Memory Adress: " <<"x: " << &x << " y: " << &y << endl;
// //  auto func = [&](/*int n, int a*/){
// //       cout << "Inside Function Memory Adress: " <<"x: " << &x << " y: " << &y << endl;
// //      cout << "Output: "<< x + y << endl/*+ n + a*/;
// //  };

// // func();
// // ++x;
// // ++y;
// // func();
// // return 0;
// // }

// /////////////////////////////////////////////////////////
// ///////////////////FUNCTION TEMPLATE////////////////////
// ////////////////////////////////////////////////////////

// // #include <cstring>
// // #include <iostream>
// // using namespace std;
// // template<typename T> T maximum(T x, T y);
// // template<typename T> T maximum(T x, T y, T z);
// // template<typename T> T& maximum(T& x, T& y);

// // template<typename X>
// // X maximum(X a, X b) {
// //     return a > b ? a : b;
// // }

// // template<typename T>
// // T multi(T a, T b) {
// //     float c = a * b;
// //     return c;
// // }
// // Template specialization
// // template<typename T> T maximum(T a, T b);
// // template <>
// // const char * maximum<const char *>(const char* a, const char* b){
// //     return strcmp(a,b) > 0 ? a:b;
// // };

// // int main(){
// //      int x = 50;
// //      int y = 60;
// //      float z = 2.21;
// //      float r = 1.21;
// //      string a = "Hello";
// //      string b = "ABcde";
// //      cout << maximum(x, y) << endl;
// //      cout << maximum(a, b) << endl;

// //     cout << multi(r, z) << endl;
// //     //get a compiler error string are not multiplying
// //     //cout << multi(a, b) << endl;

// //     //Two parameter is must be same data type
// //     //otherwise get a compiler error
// //     //cout << maximum(a, z) << endl;
// //     int* p_x = &x;
// //     int* p_y = &y;
// //     cout << maximum(*p_x, *p_y) << endl;

// //     //when you pass the memory address and receive without pointer
// //     // variable it's not work
// //     cout << *maximum(p_x, p_y) << endl;

// ///////
// ////////  Template type deduction and explicit arguments
// //////
// // int x = 50;
// // int y = 60;
// // float z = 2.21;
// // float r = 1.21;

// // Explicit template arguments
// // cout << maximum<double>(x,y) << endl;

// // //Template function pass by value
// // int x = 50;
// // int y = 60;
// // cout << "Outside: &x = " << &x << endl;
// // cout << maximum(x,y) << endl;
// // cout << "Outside: After calling Template function: &x = " << &x << endl;

// // Template function reference by value
// //  int x = 50;
// //  int y = 60;
// //  int z = 0;
// // cout << "Outside: &x = " << &x << endl;
// // cout << maximum(x,y) << endl;
// // Template function overload working when number of parameters are
// //  differences but not working order and parameter type
// // cout << maximum(x,y,z) << endl;
// // cout << "Outside: After calling Template function: &x = " << &x << endl;
// // Template specialization
// //    const char* x = {"Hello"};
// //    const char* y = {"What's"};
// //    cout << maximum(x,y) << endl;

// //}
// // //pass by value
// // template<typename T> T maximum(T x, T y, T z){
// //     cout << "Inside: &x = " << &x << endl;
// //     return x > y ? x : y;
// // }
// // pass by reference
// // template<typename T> T& maximum(T& x, T& y){
// //      //cout << "Inside: &x = " << &x << endl;
// //      return x > y ? x : y;
// // }

// // Overload template function
// //  template<typename T> T maximum(T x, T y, T z){
// //      z =  x > y ? x : y;
// //      return z;
// //  }

// // Template specialization
// //  template<typename T> T maximum(T a, T b){
// //      return a > b ? a : b;
// //  }

// /////////////////////////////////////////////////////////
// /////////////////////////CONCEPT/////////////////////////
// ////////////////////////////////////////////////////////

// // A mechanism to place constraints on your template type parameter
// //আপনার টেমপ্লেট টাইপ প্যারামিটারে সীমাবদ্ধতা স্থাপন করার একটি প্রক্রিয়া
// //  #include<iostream>
// //  #include<concepts>
// //  using namespace std;
// // Concepts syntax one
// //  template<typename T>
// //  requires integral<T>
// //  T Add(T a, T b){
// //      return a + b;
// //  };

// // //Concepts syntax two
// // template<integral T> T Add(T a, T b){
// //     return a + b;
// // };
// // Concepts syntax three
// // auto Add(integral auto  a, integral auto b){
// //     return a + b;
// // }

// // Concepts syntax Four
// //  template<typename T> T Add(T a, T b) requires integral<T>{
// //       return a + b;
// //  };

// // int main(){
// //     char x = 10;
// //     char y  = 50;
// //     auto result = Add(x, y);

// //     int  a = static_cast<int>(result) + 20;
// //     int b = 30;

// //     float c = 92.33;
// //     float d = 21.22;
// //     cout << static_cast <int> (result) << endl;
// //     cout << Add(a, b) << endl;
// //     //////////Get a error message Because c and d are not Integral type////////
// //     //cout << Add(c, d) << endl;
// // }

// /////CUSTOM CONCEPTS/////
// // BUILDING OWN CONCEPT
// //  #include<iostream>
// //  #include<concepts>
// //  using namespace std;

// // template<typename T>
// // concept my_Concept = is_integral_v<T>;
// // //sytax one
// // // template<typename T>
// // // requires my_Concept<T>
// // // T add(T a, T b){
// // //     return a + b;
// // // }

// // //syntax two
// // // template<my_Concept T>
// // // T add(T a, T b) {
// // //     return a + b;
// // //     }

// // //syntax three
// // // template <typename T>
// // // T add(T a, T b) requires my_Concept<T> { return a + b; }

// // //Syntax four
// // //auto add(my_Concept auto a, my_Concept auto b) {return a + b; }

// // //Making another concepts
// // template<typename T>
// // concept mulipliable = requires(T a, T b) {
// //     a*b;
// // };

// // template<typename T>
// // concept inrementable = requires(T a){
// //     a+=1;
// //     ++a;
// //     a++;
// // };

// // template<typename T>
// // //requires mulipliable<T>
// // requires inrementable<T>
// // T add(T a, T b) {
// //     return a + b;
// //      };

// // int main(){
// //     int a = 10;
// //     int b = 20;
// //     float c = 3.2;
// //     float d = 2.8;
// //     string e = "hello";
// //     string  f = "world";
// //     //cout << add(a , b) << endl;
// //     //Get an error because the template method accepts only
// //     //Integral type value

// //     cout << add(c, d) << endl;

// //     //Get an error because the template method accepts additoion type
// //     //value string are doing additoion but not possible to two
// //     //string multiply
// //     //We also get error also when you requires inrementable because
// //     //string are not possible to increment
// //     //cout << add(e,f);

// // }
// // /////////////////////////////////////////////////////////
// // ////////Zooming in on the requires clause////////////////
// // ////////////////////////////////////////////////////////
// // #include<iostream>
// // #include<concepts>
// // using namespace std;

// // template<typename T>
// //  concept TinyType = requires(T t){
// //      //Nested Requrement
// //      /// It's don't  works because it's a c++ valid
// //      // statement when you need like this requiresment you use nested requiresment
// //      //sizeof(T) <= 4;
// //      requires sizeof(T) <= 4;
// //  };

// // Compound Requiresement
// //  template<typename T>
// //  concept compound = requires(T a , T b){
// //      //Here check two requiresment 1. a + b is possible and it's convertable int or not
// //      {a + b} -> convertible_to<int>;
// //  };

// // template<typename T>
// // //requires TinyType<T>
// // requires compound<T>
// // T add(T a, T b){
// //     return a + b;
// // };

// // int main(){
// //     int a = 10;
// //     int b = 20;
// //     float c = 12.21;
// //     float d = 7.5;
// //     char e = 10;
// //     char f = 2;
// //     string g = "hello";
// //     string h = "world";

// //     cout << add(a, b) << endl;

// //     ///Through an error because size of double is bigger than 4
// //     ///cout << add(c, d) << endl;

// //     //it's working with compound requires because float is
// //     //also addable and covertable
// //     cout << add(c, d) << endl;
// //     //it's also work with compound requiresment because
// //     //char is addable and covertable
// //     cout << static_cast<int>(add(e, f)) << endl;

// //     //Now when we call for compound requiresment here add for two string
// //     //it's going to be be wrong because it's addable but not covertable
// //     //cout << add(g, h) << endl;

// // }

// ///////////////////////////////////////////////////////////
// /////////////////// COMBINE CONCEPT //////////////////////
// //////////////////////////////////////////////////////////

// // Concepts can use with && and || operators

// // #include <iostream>
// // #include <concepts>
// // using namespace std;

// // template <typename T>
// // concept TinyType = requires(T t)
// // {
// //     requires sizeof(T) <= 4;
// // };

// // // Using combine requires with || operator
// // //  template <typename T>
// // //  requires integral<T> || floating_point<T>
// // //  T add(T a, T b){
// // //      return a + b;
// // //  }
// // // Using combine requires with && operator
// // template <typename T>
// // requires integral<T> && TinyType<T>
// //     T multiply(T a, T b)
// // {
// //     return a * b;
// // }

// // int main()
// // {
// //     int x = 10;
// //     int y = 5;

// //     float a = 2.22;
// //     float b = 2.78;
// //     // Add work function work here because we add
// //     //  requires add this  template function
// //     //  integral and floating point
// //     // cout << add(x, y) << endl;
// //     // cout << add(a, b) << endl;

// //     // But add template function not work with
// //     // String. when you pass string you have
// //     //  an error
// //     /////cout << add("Hi", "Hello") << endl;

// //     // When we call multiply templete function for int
// //     // it's working but when we pass other data type
// //     // which more than 4 byte or are not integral
// //     // it's not working
// //     // cout << multiply(01.22,332.2);
// //     ///It's working
// //     // cout << multiply(x, y) << endl;

// //     // Not working now because we can not pass other data type
// //     //  or more than 4 byte data
// //     // cout << multiply(01.22,332.2);
// // }

// ///////////////////////////////////////////////////////////
// /////////////////// COMBINE & AUTO ////////////////////////
// //////////////////////////////////////////////////////////
// // auto add(auto x, auto y){
// //     return x + y;
// // }

// // #include<iostream>
// // #include<concepts>
// // using namespace std;
// // int main(){
// //     float x = 10.22;
// //     float y = 33.11;
// //     //get an error message return value is not an integral
// //     //integral auto  c = add(x,y);
// //     //cout << c << endl;
// //     //getting an error because xz work with only flaoting point value
// //     //floating_point auto xz = 10;
// // }

// ///////////////////////////////////////////////////////////
// /////////////////////////CLASS/////////////////////////////
// //////////////////////////////////////////////////////////

// // variable are called in class is "member variable"

// // #include<iostream>
// // using namespace std;
// // const double PI{3.1415926535897932384626433832795};
// // class Cylender{
// //     public:
// //         void meth(){
// //             height = 10;
// //             radius = 20;
// //         }

// //         double volume(){
// //             return PI * height * radius * radius;
// //         }
// //         double height{0}, radius{0};
// // };

// // int main(){
// //     // Cylender cyl;
// //     // cout << cyl.volume() << endl;

// //     // cyl.radius = 10.1;
// //     // cyl.height = 2.21;

// //     // cout << cyl.volume() << endl;
// //     Cylender cyl;
// //     cyl.meth();
// //     cout << cyl.volume() << endl;
// //     Cylender cyl2;
// //     cout << cyl2.volume() << endl;
// // }

// ///////////////////////////////////////////////////////////
// /////////////////////CONSTRUCTOR///////////////////////////
// //////////////////////////////////////////////////////////

// // using namespace std;
// // #include<iostream>
// // const double PI{3.1415926535897932384626433832795};

// // class Cylender{
// //     private:
// //       double radius{};
// //       double height{};

// //     public:
// //         Cylender(){
// //             radius = 2;
// //             height = 2;
// //             cout << "Volume: " << PI * radius * radius * height << endl;
// //         }

// //         Cylender(double x, double y){
// //             radius = x;
// //             height = y;
// //             cout << "Volume: " << PI * radius * radius * height << endl;
// //         }
// // };

// // int main(){
// //     Cylender cyl, cyl1(2,4);
// // }

// ///////////////////////////////////////////////////////////
// //////////////////DEFAULTED CONSTRUCTORS///////////////////
// //////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class Circle{
// //     public:
// //     float a = 10;
// //     float b = 30;
// //     // Circle(){

// //     // }

// //     void display(){
// //         cout << a + b;
// //     }

// //     //Default construct will create following rules
// //     Circle() = default;
// //     Circle(double x, double y){
// //         a = x;
// //         b = y;
// //     };

// // };

// // int main(){
// //     //You can not create any non argument object
// //     //when you have created constructor a parametrize
// //     //constructor in class
// //     Circle obj1(2.2,33.2);
// //     obj1.display();
// //     Circle obj;
// //     obj.display();
// // }

// ///////////////////////////////////////////////////////////
// /////////////////////SETTER AND GETTER/////////////////////
// //////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // const double PI {3.1416};

// // class Cylender
// // {
// //     private:
// //         double radius{};
// //         double height{};

// //     public:
// //         void setRadius(float x){
// //             radius = x;
// //         }
// //         void setHeight(float x){
// //             height = x;
// //         }
// //         double getRadius(){
// //             return radius;
// //         }
// //         double getHeight(){
// //             return height;
// //         }
// //         Cylender(double rad, double hei){
// //             radius = rad;
// //             height = hei;
// //         }
// //         Cylender() = default;
// //         double volume(){
// //             double area = PI * radius * radius * height;
// //             return area;
// //         }
// // };

// // int main()
// // {
// //     Cylender cylender(39,22);
// //     cout << cylender.volume() << endl;

// //     cylender.setRadius(1);
// //     cylender.setHeight(1);
// //     cout << cylender.volume() << endl;
// // }

// ///////////////////////////////////////////////////////////
// ////////////CLASS ACCROSS MULTIPLE FILES///////////////////
// //////////////////////////////////////////////////////////
// // :: ==  scope resolution operator
// // #include<iostream>
// // #include "cylender.h"
// // using namespace std;
// // int main()
// // {
// //     Cylender cylender(4,3);
// //     cout << cylender.volume() << endl;

// //     cylender.setRadius(1);
// //     cylender.setHeight(1);
// //     cout << cylender.volume() << endl;
// // }

// ///////////////////////////////////////////////////////////
// ////////MEANING CLASS OBJECT THROUGH POINTER///////////////
// //////////////////////////////////////////////////////////
// // #include<iostream>
// // #include "cylender.h"
// // using namespace std;
// // int main()
// // {
// //     Cylender cylender(4,3);
// //     cout << "Volume: " << cylender.volume() << endl;

// //     //Managing a stack object through pointers
// //     Cylender* cylender1 = &cylender;
// //     Cylender cylender2 = cylender;

// //     //cout << "Volume: " << cylender2.volume() << endl;

// //     //cout << "Volume: " << (*cylender1).volume() << endl;
// //     // calling method with stack object another way

// //     cout << "Volume: " << cylender1->volume() << endl;
// //     //Creat a cylender heap object through the new operator
// //     Cylender* cylender3 = new Cylender(5,3);
// //     cout << "Volume: " << cylender3->volume() << endl;
// //     cout << "Volumea: " << cylender3 -> getRadius() << endl;
// //     delete cylender3;
// // }

// ///////////////////////////////////////////////////////////
// /////////////////////////DESTRUCTOR////////////////////////
// //////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class Dog{
// //     public:
// //         Dog(string re_name, string re_breed, int re_age);
// //         Dog() = default;
// //         ~Dog();

// //     private:
// //         string name;
// //         string breed;
// //         int * age{nullptr};

// // };

// // Dog:: Dog(string re_name, string re_breed, int re_age){
// // name = re_name;
// // breed = re_breed;
// //             age = new int();
// //             *age = re_age;
// //             cout << "Dog Constructor are Calling: " << *age << endl;
// //         }

// // Dog:: ~Dog(){
// //    delete  age;
// //    cout << "Destructor call: " << *age << endl;

// // }

// // // void someFunc(){
// // //     Dog dog("Muri", "guri" , 2);
// // // }

// // void someFunc(){
// //     Dog* dog = new Dog("Muri", "guri" , 2);
// //     delete dog;
// // }

// // int main(){
// //     someFunc();
// //     //Dog dog("Muri", "guri" , 2);
// //     //cout << "Done\n";
// //     cout << "Done";
// // }

// ///////////////////////////////////////////////////////////
// //////////Order of Constructor Destructor Calls////////////
// //////////////////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class Dog{
// //     public:
// //         Dog(string re_name, string re_breed, int re_age);
// //         Dog() = default;
// //         ~Dog();

// //     private:
// //         string name;
// //         string breed;
// //         int * age{nullptr};

// // };

// // Dog:: Dog(string re_name, string re_breed, int re_age){
// //             name = re_name;
// //             breed = re_breed;
// //             age = new int();
// //             *age = re_age;
// //             cout << "Dog Constructor are Calling: " << name << endl;
// //         }

// // Dog:: ~Dog(){
// //    delete  age;
// //    cout << "Destructor call: " << name << endl;
// // }

// // int main(){
// //    //Constructor call First Object First
// //    //But Distructor Call Last object First and Last Object First

// //     Dog dog1("Dog1", "Shepard", 2);
// //     Dog dog2("Dog2", "Shepard", 1);
// //     Dog dog3("Dog3", "Shepard", 3);
// //     Dog dog4("Dog4", "Shepard", 1);
// //     Dog dog5("Dog5", "Shepard", 4);

// // }

// //////////////////////////////////////////////
// //////////////THE THIS POINTER///////////////
// ////////////////////////////////////////////

// // // Online C++ compiler to run C++ program online
// // #include <iostream>
// // using namespace std;
// // class Dog{
// //     private:
// //         string name, breed;
// //         int age;
// //     public:
// //         Dog() = default;
// //         Dog(string name, string breed, int age);
// //         void Show();
// //         ~Dog();
// // Dog* setName(string name){
// //     this -> name = name;
// //     return this;
// // }
// // Dog* setBreed(string breed){
// //     this -> breed = breed;
// //     return this;
// // }
// // Dog* setAge(int age){
// //     this -> age = age;
// //     return this;
// // }
// // with refference
// // Dog& setName(string name){
// //     this -> name = name;
// //     return *this;
// // }
// // Dog& setBreed(string breed){
// //     this -> breed = breed;
// //     return *this;
// // }
// // Dog& setAge(int age){
// //     this -> age = age;
// //     return *this;
// // }
// // };

// // Dog:: Dog(string name, string breed, int age){
// //     this -> name = name;
// //     this -> breed = breed;
// //     this -> age = age;
// //     cout << "Memory Adress of Object: " << this << endl;
// // }
// // void Dog:: Show(){
// //     cout << "Dog Name:  " << name << endl;
// //     cout << "Dog Breed:  " << breed << endl;
// //     cout << "Dog Age:  " << age << endl;
// //     cout << "Memory Adress of Object: " << this << endl;
// // }
// // Dog:: ~Dog(){

// // }

// // int main() {
// //     // Write C++ code here
// //     Dog dog1("Fluppy", "Shepard", 2);
// //     dog1.Show();
// //     //using pointer
// //     //dog1.setName("Dogi1")->setAge(12)->setBreed("Hello");

// //     //using references
// //     dog1.setName("Dogi1").setAge(12).setBreed("Hello");
// //     dog1.Show();
// //     return 0;
// // }

// //////////////////////////////////////////////
// ///////////////////STRUCT////////////////////
// ////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // struct cat{
// //     //Different Between point and class is
// //     //Point member defaultly create as public
// //     // but class are private
// //     string name;
// //     int age;
// //     cat(string name, int age);
// //     void display(const cat& cats);
// // };

// // cat:: cat(string name, int age){
// //         this -> name = name;
// //         this -> age = age;
// //     };
// // void cat:: display(const cat& cats){
// //     cout << cats.name << "  " << cats.age << endl;
// // }

// // int main(){
// //   cat cat1("Meow",2);
// //   cat1.display(cat1);
// //   cat1.name = "Bellow";
// //   cat1.age = 1;
// //   cat1.display(cat1);
// // }
// //////////////////////////////////////////////
// ////////////SIZE OF CLASS OBJECT/////////////
// ////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class Name{
// //     public:
// //         int x;
// //         string y;
// //     //Only data member variable can takes storage
// //     //function or constructo not takes any memory storage
// //     Name(){

// //     }
// //     void method(int x, string y){
// //         this -> x;
// //         this -> y;
// //     }
// // };
// // int main(){
// //         Name name;
// //         name.method(10, "Hello");
// //         cout << "Size of double is: " << sizeof(double) << endl;
// //         cout << "Size of int is: " << sizeof(int) << endl;
// //         cout << "Size of Object is: " << sizeof(Name);
// // }

// //////////////////////////////////////////////
// ////////////////FRINEND FUNCTION/////////////
// ////////////////////////////////////////////
// // #include<iostream>
// // using namespace std;
// // class ClassB;
// // class ClassA {

// //     public:
// //         // constructor to initialize numA to 12
// //         ClassA() : numA(12){}
// //     private:
// //         int numA,numC;
// //          // friend function declaration
// //         friend int add(ClassA, ClassB);
// // };
// // class ClassB {

// //     public:
// //         // constructor to initialize numB to 1
// //         ClassB(): numB(1){}

// //     private:
// //         int numB;

// //         // friend function declaration
// //         friend int add(ClassA, ClassB);
// // };

// // // access members of both classes
// // int add(ClassA objectA, ClassB objectB) {
// //     return (objectA.numA + objectB.numB);
// // }

// // int main(){
// //     ClassA objectA;
// //     ClassB objectB;
// //     cout << "Sum: " << add(objectA, objectB);
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class A{
// //     private:
// //         int x;
// //     friend int assign(A& a);
// //     public:
// //     A(): x(20){};
// //     int y = 60;
// // };

// // int assign(A& a){
// //     a.x = 10;
// //     a.y = 100;
// //     return a.x;
// // }

// // int main(){
// //     A obj;

// //     cout <<  assign(obj) << endl;
// //     cout << obj.y;

// // }

// //////////////////////////////////////////////
// ////////////////INHERITANCE//////////////////
// ////////////////////////////////////////////
// // #include <iostream>
// // #include "person.h"
// // #include "player.h"
// // using namespace std;
// // int main()
// // {
// //     string fName = "Abdullah";
// //     string lName = "Abdur Rahman";
// //     Person p1(fName, lName);

// //     cout << p1 << endl;
// //     fName = "Omar";
// //     lName = "Ibn Kattab";
// //     Player p2("Badminton");
// //     p2.setFirstName(fName);
// //     p2.setLastName(lName);
// //     cout << p2 << endl;
// // }

// //////////////////////////////////////////////
// ////////////PROTECTED MEMBER/////////////////
// ////////////////////////////////////////////

// // #include <iostream>
// // #include "person.h"
// // #include "player.h"
// // using namespace std;
// // int main()
// // {
// //     Player p("FootBall", "Abdur", "Rahman");
// //     cout << p << endl;
// // }

// //////////////////////////////////////////////
// //////PUBLIC PRIVATE PROTECTED IN CLASS//////
// ////////////////////////////////////////////

// // #include <iostream>
// // using namespace std;

// // class one
// // {
// // public:
// //     int x = 10;
// //     int y = 30;
// // };

// // class two : protected one
// // {
// // };

// // class three : private two
// // {
// // public:
// //     void setNum(int x, int y)
// //     {
// //         this->x = x;
// //         this->y = y;
// //         cout << this->x << endl;
// //         cout << this->y;
// //     }
// // };

// // class four : protected three
// // {
// //     void setNum(int x, int y)
// //     {
// //         this->x = x;
// //         this->y = y;
// //         cout << this->x << endl;
// //         cout << this->y;
// //     }
// // };

// // int main()
// // {
// //     three ob;
// //     ob.setNum(1, 2);
// // }

// //////////////////////////////////////////////
// // Base class access specifiers : Zooming in//
// /////////////////////////////////////////////
// // #include <iostream>
// // #include "person.h"
// // #include "player.h"
// // #include "nurse.h"
// // #include "engineer.h"
// // using namespace std;

// // int main()
// // {
// //     Person p1("Abu Huraira", 21, "Mekkha, Saudi Arabia");
// //     cout << p1 << endl;

// //     Player pl1;
// //     pl1.pFullName = "Abdul Hamid";
// //     cout << pl1 << endl;

// //     pl1.play();
// //     cout << pl1 << endl;

// //     Nurse n1;
// //     n1.play();
// //     n1.threat_ill_person();
// //     cout << n1 << endl;

// //     Engineer en;
// //     // You can not access anything base class beacause
// //     //  now base class is inherit as private and base class
// //     //  all Member in private in derive class
// //     // e1.pFullName = "Abdul Hamid";
// //     en.buildSomething();
// // }

// //////////////////////////////////////////////
// ///////CLOSING IN PRIVATE INHERITENCE/////////
// /////////////////////////////////////////////

// // #include "person.h"
// // #include "engineer.h"
// // #include "civileng.h"
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     CivilenG cv;
// //     cout << cv << endl;
// // }

// //////////////////////////////////////////////
// ////Resurrecting Members Back in Context/////
// /////////////////////////////////////////////
// // #include "person.h"
// // #include "engineer.h"
// // #include "civileng.h"
// // #include <iostream>
// // int main()
// // {
// //     CivilenG cv;
// //     Engineer en;
// //     en.pAge = 10;
// //     cout << cv << endl;

// //     cout << en.pAge << endl;

// //     cv.build_road();
// // }

// //////////////////////////////////////////////
// ////Default Constructors with Inheritance/////
// /////////////////////////////////////////////

// // #include "person.h"
// // #include "engineer.h"
// // #include "civileng.h"
// // #include <iostream>
// // int main()
// // {
// //     CivilenG cve1;
// // }

// //////////////////////////////////////////////
// ////Custom Constructors With Inheritance/////
// /////////////////////////////////////////////
// // #include "person.h"
// // #include "engineer.h"
// // #include "civileng.h"
// // #include <iostream>
// // int main()
// // {
// //     //Call Person
// //     cout << endl << endl;
// //     Person person("Abu Huraira",20, "Mekka, Saudi Arabia");
// //     cout << person << endl << endl;

   
// //     //Call For Engineer(First Derived class)
// //     Engineer engineer("Abu Huraira",20, "Mekka, Saudi Arabia", 1022122);       
// //     cout << engineer << endl << endl;

// //     //Call for CivilenG(Second Derived class)
// //     CivilenG civileng("Abu Huraira",20, "Mekka, Saudi Arabia", 1022122, "Making Rodd");
// //     cout << civileng << endl << endl << endl;

// // }


// //////////////////////////////////////////////
// //////Copy Constructors With Inheritance//////
// /////////////////////////////////////////////

// //  #include "person.h"
// //  #include "engineer.h"
// //  #include "civileng.h"
// //  #include <iostream>
// //  int main(){
// //     // Person person("Hello", 20, "Mekka, Arabia");
// //     //Engineer engineer("Abu Huraira",20, "Mekka, Arabia", 1022122);
// //     CivilenG civileng("Abu Huraira",20, "Mekka, Saudi Arabia", 1022122, "Road Making");
// //     cout << "-------------------------\n-------------------------\n\n\n";


// //     //Person person2(person);
// //     //cout <<  person2;
// //     // Engineer engineer2(engineer);
// //     // cout << engineer2;

// //     CivilenG civilengCpy(civileng);
// //     cout << civilengCpy;
// //  }

// //////////////////////////////////////////////
// /////////INHERITING BASE Constructors////////
// /////////////////////////////////////////////

// //  #include "person.h"
// //  #include "engineer.h"
// //  #include <iostream>
// //  int main(){
// //       Engineer engineer;
// //       cout << engineer;

// //       Engineer engineer2("Abu Huraira", 20, "Mekka");
// //       cout << engineer2;

// //       Engineer engineer3("Abu Huraira", 20, "Mekka", 2211234);
// //       cout << engineer3;

// //       Engineer engineer4(engineer3);
// //       cout << engineer4;
// //  }


// //////////////////////////////////////////////
// /////////INHERITING  |||| desstructors////////
// /////////////////////////////////////////////
// //  #include "person.h"
// //  #include "engineer.h"
// //  #include "civileng.h"
// //  #include <iostream>
// //  int main(){
// //     CivilenG civileng("Abu Huraira",20, "Mekka, Saudi Arabia", 1022122, "Road Making");
// //     cout << civileng << endl;
// //  }


// //////////////////////////////////////////////
// /////////Reused Symbols in Inheritance////////
// /////////////////////////////////////////////
// // #include "child.h"
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     child ob(20);
// //     ob.printSomething();
// //     ob.parent::printSomething();

// //     cout << "---------------" << endl;
    
// //     ob.some();
// // }


// //////////////////////////////////////////////
// /////////Static Binding with Inheritance//////
// /////////////////////////////////////////////

// #include "iostream"
// #include "shape.h"
// #include "circle.h"
// #include "oval.h"
// using namespace std;

// // void cr(Circle circle){
// //     circle.draw();
// // }

// int main(){
//     Shape shape("Square");
//     Circle circle(10, "Circle");
//     Oval oval(10, 10, "Oval");
//     Shape &shape1 = circle;
//     Shape &shape2 = oval;
//     //cr(circle);
//     // shape.draw();
//     // shape1.draw();
//     // shape2.draw();

// }


// //////////////////////////////////////////////
// ////////Dynamic Binding with Inheritance//////
// /////////////////////////////////////////////
// #include "iostream"
// #include "shape.h"
// #include "circle.h"
// #include "oval.h"
// using namespace std;


// int main(){
//     Shape* shape;
//     Shape shpae1("Shape");
//     Circle circle(10, "Circle");
//     Oval oval(10,24,"Oval");
//     shape = &circle;
//     shape->draw();
//     shape = &oval;
//     shape->draw();

//     // Shape& shape1 = circle;
//     // shape1.draw();

//     // Shape& shape2 = oval;
//     // shape2.draw();

    

// }


