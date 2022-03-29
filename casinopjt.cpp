#include <iostream>
#include <ctime>
double balance;
void rules()
{
   std::cout << "\t\t\t\tRULES";
   std::cout << "\n1: Choose a number to guess between 1-10";
   std::cout << "\n2: Winning Amount is five times the amount of bet ";
   std::cout << "\n3: Losing amount is twice the amount of bet";
   std::cout << "\n Good Luck";
   std::cout << "\nCurrent Balance: $" << balance;
}

int main()
{
   int choice;
   double bet;
   int guess;
   int random;
   int dice;
   srand(time(NULL));
   std::cout << "\n    W           W EEEEE L      CCCCC OOOOO  M       M  EEEEE  !!";
   std::cout << "\n     W         W  E     L      C     O   O M M     M M E      !!";
   std::cout << "\n      W   W   W   EEE   L      C     O   O M  M   M  M EEE    !!";
   std::cout << "\n       W W W W    E     L      C     O   O M   M M   M E      !!";
   std::cout << "\n        W   W     EEEEE LLLLL  CCCCC OOOOO M    M    M EEEEE  !!";
   std::cout << "\n\n\nEnter Balance: $";
   std::cin >> balance;
   do
   {
      system("cls");
      rules();
      do
      {
         std::cout << "\nEnter amount to bet: $";
         std::cin >> bet;
         if (bet > balance)
         {
            std::cout << "\nInsufficient Balance, Re-Enter Bet amount";
         }

      } while (bet > balance);

      do
      {
         std::cout << "\nGuess a Number between 1 to 10: ";
         std::cin >> guess;
         if (guess <= 0 || guess > 10)
         {
            std::cout << "\nInvalid Number, Enter again";
         }

      } while (guess <= 0 || guess > 10);

      dice = rand() % 10 + 1;
      if (dice == guess)
      {
         std::cout << "\nCongratulations, You Won !!";
         balance += (bet * 5);
         std::cout << "\nNew Balance: $" << balance;
      }
      else
      {
         std::cout << "\nSorry, You Lost :(";
         balance -= bet * 2;
         std::cout << "\nNew Balance: $" << balance;
      }
      std::cout << "\nThe Winning Number: " << dice;

      if (balance == 0)
      {
         std::cout << "\nOut of Money !!";
         break;
      }

      std::cout << "\nDo you want to continue? 0/1  ";
      std::cin >> choice;
   } while (choice != 0);

   std::cout << "\nThank you for Playing !!";
   std::cout << "\nBalance: " << balance;
   return 0;
}
