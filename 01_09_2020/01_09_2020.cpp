
#include <iostream>

/*         _   
       .__(.)< (MEOW)
        \___)
*/

int main()
{
    int age;
    std::cout << "What is your age?\n";
    std::cin >> age;
    if (age > 19)
        std::cout << "you are an adult\n";
    else
        std::cout << "You are a teenager\n";

}
