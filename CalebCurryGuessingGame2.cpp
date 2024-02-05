#include <iostream>

using namespace std;

int main()
{
    cout << "Do you want to play a game? (y/n): ";
    char response = tolower(getchar()) ;
    cout << "You entered: " << response << endl;
    if (response == 'y')
{
        cout << "Let's play a game \n";
        cout << "Have you beat the game? \n0: no.\n1: yes.\n";
        bool beatGame;
        cin >> beatGame;
        if (beatGame)
{
    cout << "Because you beat the game, you can play impossible mode.\nUse secret difficulty \"impossible\".\n";
}
        cout << "What difficulty?   (easy/medium/hard): ";
        string difficulty;
        cin >> difficulty;
        
        if (difficulty == "easy" || difficulty == "medium" || difficulty == "hard")
{
        cout << "Reswawning enabled...";    
}
        else if (difficulty == "impossible" && beatGame)
{
        cout << "LOL";
}        
         else if (difficulty == "impossible" && !beatGame)
{
        cout << "You have to beat the game at least once.\n";
}

}
    else if (response == 'n')
{
    cout << "Maybe next time";
}
    else 
{
    cout << "hmm... İ don't understand.";
}
    return 0;
}
