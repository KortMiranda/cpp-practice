
#include <iostream>

int main() {

  std::cout << "There was once a boy name Artemis Fowl. He is a millionaire, a genius, and above all, a criminal mastermind. He is a mission to  provide for his family after his father mysteriously disappears.  \n";
  std::cout << "*       *       *\n";
  std::cout << "How will this young mastermind get the fortune he needs to continue to support his family?\n\n";

  char userinput;

  for (int i = 0; i < 3 && userinput != 'A' && userinput != 'B' && userinput != 'C'; i++) {
    std::cout << "Enter (A) if Artemis is a complete evil mastermind and gets the fortune the fortune he wants and more! \n";
  std::cout << "Enter (B) if Artemis has a happy ending with his family and remains a criminal mastermind \n";
  std::cout << "Enter (C) if Artemis learns from his transgressions and makes a lot of friends in the process and creates peace between two worlds \n";
  std::cin >> userinput;
  }

  if(userinput == 'A') {
    std::cout << "Artemis captures a fairy named Holly Short and holds her hostage until the LEPrecon gives him a handsome ransom pay for her release and for not exposing the fairy race.\n";
  } else if (userinput == 'B') {
    std::cout << "Artemis finds his father after a lot of genius decetive work on his end and with the help of his intimidating bodyguard, Bulter. He becomes a hero in his father's eyes and after they return home from his father's capture, they continue to work side by side as criminial masterminds to maintain their vast fortune.\n";
  } else if (userinput == 'C') {
    std::cout << "Artemis befriends Holly Short, the fairy he captured, and they go on several adventures together in order to protect the fairy race and because of her friendship, he realizes there is more to life then fame and fortune and makes the ultimate sacrifice to save his friends and family.\n";
  }
  return 0;
}


