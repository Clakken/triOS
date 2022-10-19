// triOSprojectInventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char askBuy('b');
char askSell('s');
char askWalk('w');

int silverCoins;

int main()
{
    
    vector<string> merchWares;
    merchWares.push_back("Rain Cloak");           //15 silver pieces, quantity: 1
    merchWares.push_back("Arrows");              //2 silver pieces each, quantity: 20
    merchWares.push_back("Rations");            // 5 silver pieces, restore health item, quantity: 3
    merchWares.push_back("Brios Totem");       // 5 silver pieces, attack bonus consumeable, quantity: 1
    merchWares.push_back("Nul Totem");        // 5 silver pieces, defense bonus consumeable, quantity: 1
     
    merchWares[0] = "Rain Cloak";
    merchWares[1] = "Arrows";
    merchWares[2] = "Rations";
    merchWares[3] = "Brios Totem";
    merchWares[4] = "Nul Totem";

  

    vector<string> myStuff;
    myStuff.push_back("Kitchen Knife");
    myStuff.push_back("Ratty Cloak");             // 5 silver pieces
    myStuff.push_back("Trusty Bow");             // 10 silver pieces
    myStuff.push_back("Rations");
    myStuff.push_back("Cloudy Gem");           // 50 silver pieces, nothing special

    myStuff[0] = "Kitchen Knife";
    myStuff[1] = "Ratty Cloak";
    myStuff[2] = "Trusty Bow";
    myStuff[3] = "Rations";
    myStuff[4] = "Cloudy Gem";
     
    
    
    cout << "\n\tAhoy there, need ye somethin' for the journy?\n";

    cout << "\nb = buy\n";
    cout << "\ns = sell\n";
    cout << "\nw = walk away\n\n";

    int choice;
    cout << "\n\n\tWhat will it be?\n";
    cin >> choice;

    switch (choice) {
        
    case 1:
        cout << "Have a look.";
        break;
    case 2:
        cout << "What have ye got?";
        break;
    case 3:
        cout << "Safe travels!";
        break;
    default:
        cout << "*small talk*";
    }


    

    int merchWallet = 100;

    cout << "\n\tMerchant Items:\n";
    for (unsigned int i = 0; i < merchWares.size(); ++i) {
        cout << merchWares[i] << endl;
    }



    cout << "\n\tMy Stuff: \n";

    int myWallet = 25;
    cout << "\n\tSilver pieces: " << myWallet << endl;

    for (unsigned int i = 0; i < myStuff.size(); ++i) {
        cout << myStuff[i] << endl;
    }

    return 0;

    

    /*char askBuy('b'); {
        char responseBuy;
        do {
            cout << "\n\n\tBe needin' somethin'? (y/n): ";
            cin >> responseBuy;
        } while (responseBuy != 'y' && responseBuy != 'n');
        return responseBuy;
    }

    char askSell('s'); {
        char responseSell;
        do {
            cout << "\n\n\tSomething ye'd like to be rid of? (y/n): ";
            cin >> responseSell;
        } while (responseSell != 'y' && responseSell != 'n');
        return responseSell;
    }

    char askWalk('w'); {
        char responseWalk;
        do {
            cout << "\n\n\t\tcontinue your journey? (y/n): ";
            cin >> responseWalk;
        } while (responseWalk != 'y');
        return responseWalk;
    }*/
        
}
