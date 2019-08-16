#include <iostream>

int GetInput()
{
    int value{0};
    std::cout << "Enter an integer between 0 and 255: ";
    std::cin >> value;

    return value;
}

int IsBitTrue(int number, int bitValue)
{
    if(number >= bitValue)
    {
        std::cout << "1";
        return number - bitValue;
    }
    else
    {
        std::cout << "0";
        return number;
    }
}

int main()
{
    int number{GetInput()};

    if((number < 0) || (number > 255))
        std::cout << "Out of range number entered!\n";
    else
    {
        number = IsBitTrue(number, 128);
        number = IsBitTrue(number, 64);
        number = IsBitTrue(number, 32);
        number = IsBitTrue(number, 16);

        std::cout << " ";

        number = IsBitTrue(number, 8);
        number = IsBitTrue(number, 4);
        number = IsBitTrue(number, 2);
        number = IsBitTrue(number, 1);

        std::cout << '\n';
    }
    return 0;
}
