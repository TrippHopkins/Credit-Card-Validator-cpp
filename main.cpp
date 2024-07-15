#include <iostream>
#include <string>

int validCN(double cardnum[], double validnum);

int main(){

    double cardnum[] = {1234, 4321, 9876, 6789};
    double validNum;


    std::cout << "****************** CREDIT CARD VALIDATOR ******************\n";
    std::cout << "Please enter a valid credit card numbercard number\n";
    std::cin >> validNum;
    if(validCN(cardnum, validNum) == 1){
        std::cout << "that is VALID, Welcome in!\n";
    }
    else{
        std::cout << "This number is INVALID, please exit and try again\n";
    }


    std::cout << "***********************************************************";
    return 0;
}

int validCN(double cardnum[], double Csearch){
    for(int i = 0 ; i < 4 ; i++){
        if (cardnum[i] == Csearch){
            return 1;
        }
        else{
            return -1;
        }
    }


}