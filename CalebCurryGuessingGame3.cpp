

#include <iostream>
#include <string>
using namespace std;

bool playGame (int guesses)
{
    cout << "playing game...\n";
    int correct = 42;
    
     cout << "you get " << guesses << " guesses.\n:";
     
     
    for (int guessCount = 0; guessCount < guesses; guessCount++)
    {
            cout << "Guess a number\n";
            int guess;
            cin >> guess;
            if ( guess == correct)
        {
            return true;
        }  
            cout << "you have guessed " << guessCount+1 << " times.\n"; 
    }
    return false;
}

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
        
        bool won;
        if (beatGame)
{
    cout << "Because you beat the game, you can play impossible mode.\n"; 
    won = playGame (1) ;
    
}
       else 
{
        cout << "What difficulty?\n0:easy\n1:medium\n2:hard\n ";
        int difficulty;
        cin >> difficulty;
        
       switch (difficulty)
{
         case 0:
         won = playGame(10);
         break;
         case 1:
         won = playGame (5);
         break;
         case 2:
         won = playGame(3);
         break;
         default:
         cout << "bro what?\n";
         break;

}
}

        if (won)
{
    cout << "congrats\n";
}
    else 
{
    cout <<"maybe next time\n";
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
