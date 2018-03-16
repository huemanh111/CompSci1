/*
Rock, Paper, Scissors Game
Write a program that lets the user play the game of Rock, Paper, Scissors against the computer.
The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated.
If the number is 1, then the computer has chosen rock. If the number is 2, then the computer has
chosen paper. If the number is 3, then the computer has chosen scissors.
Set a boolean flag showResult to true. If showResult is true, display the computer choice (for
debugging purpose). If false, don't display it.
2. The user enters his or her choice of “1- rock”, “2- paper”, or “3-scissors” at the keyboard.
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:
• If one player chooses rock and the other player chooses scissors, then rock wins. (The rock
  smashes the scissors.)
• If one player chooses scissors and the other player chooses paper, then scissors wins.
  (Scissors cuts paper.)
• If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps
  rock.)
• If both players make the same choice, it is a draw.
*/

//NOTE FROM PROGRAMMER: I realize I can easily leave out the showResult variable but I left it
//in the program only because of the instructions for this assignment

// Hue Anh Huynh
// 2/8/17

#import<iostream>
#import<cstdlib>
#import<ctime>

using namespace std;

int main()
{
    const int R = 1; //rock
    const int P = 2; //paper
    const int S = 3; //scissors
    int cNum;
    string cChoice; //what the computer generates
    int uNum; //user's play
    string uChoice;
    bool showResult = false;

    srand((unsigned)time(0));

    cNum = 1 + rand() % 3;

    cout << "ROCK - PAPER - SCISSORS GAME" << endl;
    cout << "Hello! Please enter:" << endl;
    cout << "                      1 for rock\n";
    cout << "                      2 for paper\n";
    cout << "                      3 for scissors\n";
    cout << "Your choice: ";
    cin >> uNum;

    if(uNum == 1 || uNum == 2 || uNum == 3)
    {
        showResult = true;

        if(showResult)
        {
//THIS IS WHERE WE LABEL THE COMPUTER'S CHOICE--------------------------------
            if(cNum == 1)
            {
                cChoice = "rock";
            }
            else if(cNum == 2)
            {
                cChoice = "paper";
            }
            else if(cNum == 3)
            {
                cChoice = "scissor";
            }
            cout << "Computer pulled " << cChoice << endl;
//THIS IS WHERE WE LABEL THE USERS CHOICE-------------------------------------
            if(uNum == 1)
            {
                uChoice = "rock";
            }
            else if(uNum == 2)
            {
                uChoice = "paper";
            }
            else if(uNum == 3)
            {
                uChoice = "scissor";
            }
//THIS IS WHERE THE VICTOR IS DECIDED-----------------------------------------
            if((cNum == 1 && uNum == 1) || (cNum == 2 && uNum == 2) || (cNum == 3 && uNum == 3))
            {
                cout << "It's a draw! Both of you pulled " << cChoice << endl;
            }
            else if((cNum == 1 && uNum == 3) || (cNum == 2 && uNum == 1) || (cNum == 3 && uNum == 2))
            {
                cout << "You lose! " << cChoice << " beats " << uChoice << endl;
            }
            else if((cNum == 3 && uNum == 1) || (cNum == 1 && uNum == 2) || (cNum == 2 && uNum == 3))
            {
                cout << "You WIN! " << uChoice << " beats " << cChoice << endl;
            }

        }
    }
    else
    {
        cout << "You did not enter a valid choice." << endl;

    }


    return 0;
}
