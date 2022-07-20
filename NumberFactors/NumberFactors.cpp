#include <iostream>

int GetPositiveNumber();
void GetFactors(int number);

int main()
{
    int number = GetPositiveNumber();
    GetFactors(number);
}

int GetPositiveNumber()
{
    int number;
    do
    {
        //  Ask for a positive number from the user
        std::cout << "Enter a positive number to get its factors: ";

        //  Gets the input from the user
        std::cin >> number;

        //  Checks if the input is positive
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            system("cls");
            std::cout << "Invalid entry! Try again!" << std::endl;
        }
        else if (number <= 0)
        {
            system("cls");
            std::cout << "That is not a positive number. Try again!" << std::endl;
        }
        else
        {
            break;
        }
    } while (true);
    return number;
}

void GetFactors(int number)
{
    //  Displays the factors
    std::cout << "The factors of " << number << " are: ";
    
    //  Iterates through all possible numbers
    for (int i = 1; i < number; i++)
    {
        if ((number % i) == 0)
        {
            std::cout << i << ", ";
        }
    }

    std::cout << number << std::endl;
}