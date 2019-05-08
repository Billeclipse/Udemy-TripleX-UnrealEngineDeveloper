#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty){
    // Explain the situation and the enviroment of the game to the user
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
    std::cout << "Enter the correct code to continue...\n";
}

bool PlayGame(int Difficulty){

    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    std:: cout << "Code: " << CodeA << CodeB << CodeC;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << "-- There are 3 numbers in the code\n";
    std::cout << "-- The codes add-up to: " << CodeSum << "\n";
    std::cout << "-- The codes multiply to give : " << CodeProd << "\n";

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if(GuessSum == CodeSum && GuessProd == CodeProd){
        std::cout << "Good job! You Won this level! Keep Going!\n";
        return true;
    } else {
        std::cout << "Not the correct code... Try again!\n";
        return false;
    }
}

int main(){    
    srand(time(NULL)); // Creates new Random sequence base on the time of day
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty){
        bool bLevelComplete = PlayGame(LevelDifficulty);        
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Disards the buffer

        if(bLevelComplete){
            // increase the level difficulty
            LevelDifficulty++;
        }
    }

    std::cout << "Congratulatation you won the game!\n";

    return 0;    
}