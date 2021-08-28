#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int N = 10;

int main()
{
    int number , guess , attempt = 1;
    char choice;
    srand(time(0));
    number = rand()%100 + 1; //to generate random numbers between 1 and 100
    cout<<"************************************ WELCOME TO 'Guess The Number' GAME ************************************\n";
    cout<<"In this game, you will have to guess the auto generated random number. You have 10 chances to do so.\n\n\nLET'S PLAY!\n\n\n";
    do
    {
        cout<<"Attempt : "<<attempt<<"\nYour Guess : ";
        cin>>guess;
        if(guess==number)
            cout<<"\n\nCONGRATULATIONS!! You have guessed the number correctly and have won this game!";
        else if(number>guess)
            cout<<"Try a greater number!\n";
        else
            cout<<"Try a lesser number!\n";
        ++attempt;
    } while(attempt<=N && guess!=number);
    cout<<"\n\nPress enter to exit..";
    cin.ignore();
    char c;
    c = getchar();
    return 0;
}