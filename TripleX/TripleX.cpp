#include <iostream>

int main(){
    // Explain the situation and the enviroment of the game to the user
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    // Declare 3 number code
    const int CodeA = 4, CodeB = 5, CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "-- There are 3 numbers in the code" << std::endl;
    std::cout << "-- The codes add-up to: " << CodeSum << std::endl;
    std::cout << "-- The codes multiply to give : " << CodeProd << std::endl;

    int PlayerGuess;

    return 0;
}