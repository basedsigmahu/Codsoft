#include <iostream>
#include <ctime>
using namespace std;

int game(int guess) {

    int correct;

    srand(static_cast<unsigned>(time(nullptr)));
    correct = 1 + (rand() % 100);

    while (correct != guess) {
        if (correct > guess) {
           
            cout << "Your number is lower than the number I thought of." << endl;
        } 
        else if(correct <guess){
          
            cout << "Your number is higher than the number I thought of." << endl;
        }

        cout << "Guess again: ";
        
        cin >> guess;
    }

    
    cout << "******************* W E L L  D O N E *******************" << endl;
    
    cout << "The correct number was: " << correct << endl;
    
    return 0;
}

int main() {
    
    int guess, option , choice ;
    
    cout << "WANT TO PLAY A GAME? Press 1 to play or 2 to exit: ";
    
    cin >> option;

    if (option == 1) {
      
        cout << "Guess the number I thought of between 1 and 100: ";
      
        cin >> guess;
      
        game(guess);

         
    } else if (option == 2) {
      
        cout << "******************* G O O D B Y E*******************" << endl;
    }

    main();
   
}
