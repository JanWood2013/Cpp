#include <iostream>
#include <string>

int main()
{
using str = std::string;
using d = double;

d speed;
std::cout << "Speed: " << std::endl;
std::cin >> speed;

std::cout << speed;

int l = 1;
for (;speed < 300; speed){
    std::cout << "Lap " << l << ": " << speed << std::endl;
    speed += 20;
    l += 1;
}
}