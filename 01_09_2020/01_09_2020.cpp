#include <iostream>

int main()
{
    int age;
    std::cout << "What is your age?\n";
    std::cin >> age;
    if (age > 19)
        std::cout << "you are an adult\n";
    else if (age > 10)
        std::cout << "You are a teenager\n";
    else
        std::cout << "you are a child\n";
}
/*    _
  .__(.)< (MEOW)
   \___)
*/