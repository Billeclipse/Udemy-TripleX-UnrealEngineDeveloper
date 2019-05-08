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

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if(GuessSum == CodeSum && GuessProd == CodeProd){
        std::cout << "You Win!" << std::endl;
    } else {
        std::cout << "You Lose!" << std::endl;
    }
    
    return 0;
}