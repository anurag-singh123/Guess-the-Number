
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int guessNumber,secretNumber;

    //Initilize
    srand((unsigned) time(NULL));

    secretNumber = rand()%10+1;
//    cout<<"secret_number: "<<secretNumber<<endl;

    cout<<"Guess the number between 1 to 10"<<endl;

    do{
        cin>>guessNumber;
        if(secretNumber<guessNumber)
        {
            cout<<"The number is lower than that"<<endl;
        }
        if(secretNumber>guessNumber)
        {
            cout<<"The number is greater than that"<<endl;
        }
    }while(guessNumber != secretNumber);

    cout<<"Congratulations, the number is :"<<guessNumber<<endl;
    return 0;
}
