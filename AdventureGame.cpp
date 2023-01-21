#include <iostream>
using namespace std;
//             R1
//      R2             R3
//   R4    R5      R6      R7
// R8 R9 R10 R11 R12 R13 R14 R15
    //Winning Endings: R8, R9, R10
    //Back to Square One Engings: R11, R12, R13
    //Losing Endings: R14, R15 
string introRoom(){
  string room;  
  cout << "There is a sign in front of you:\n\n"
          "+---------------------------------+\n"
          "| What has hands but cannot clap? |\n"
          "+---------------------------------+\n\n"
          "You see two doors: \n\n" 
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "+++ CRAB +++   +++ CLOCK ++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n\n"
          "Which door do you enter? (\"crab\" or \"clock\")\n"
          "> ";
  cin >> room;
  while (room != "crab" && room != "clock"){
    cout << "Error. Please enter again: ";
    cin >> room;
  }
  cout << "\n\n";
  return room;                                                                                                   
}

string clockRoom() {
  string room;
  cout << "You open the door and it is a room full of tick-tocking clocks.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n"
          "There is a sign in front of you:\n\n"
          "+---------------------------------------------------+\n"
          "| I cannot talk, but I always reply when spoken to. |\n"
          "+---------------------------------------------------+\n\n"
          "You see two doors: \n\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "+++ ECHO +++   +++ BOOK +++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n\n"
          "Which door do you enter? (\"echo\" or \"book\")\n"
          "> ";
  cin >> room;
  while (room != "echo" && room != "book"){
    cout << "Error. Please enter again: ";
    cin >> room;
  }
  cout << "\n\n";
  return room;  
}

string crabRoom() {
  string room;
  cout << "You open the door and it is a room full of crabs.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n"
          "There is a sign in front of you:\n\n"
          "+---------------------------------------------------+\n"
          "| I cannot talk, but I always reply when spoken to. |\n"
          "+---------------------------------------------------+\n\n"
          "You see two doors: \n\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "+++ ECHO +++   +++ BOOK +++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n\n"
          "Which door do you enter? (\"echo\" or \"book\")\n"
          "> ";
  cin >> room;
  while (room != "echo" && room != "book"){
    cout << "Error. Please enter again: ";
    cin >> room;
  }
  cout << "\n\n";
  return room;  
}

string echoRoom() {
  string room;
  cout << "You open the door and you can hear a voice echoing around the room.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n"
          "There is a sign in front of you:\n\n"
          "+----------------------------+\n"
          "| What gets wet when drying? |\n"
          "+----------------------------+\n\n"
          "You see two doors: \n\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++ TOWEL +++   +++ WATER ++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n\n"
          "Which door do you enter? (\"towel\" or \"water\")\n"
          "> ";
  cin >> room;
  while (room != "towel" && room != "water"){
    cout << "Error. Please enter again: ";
    cin >> room;
  }
  cout << "\n\n";
  return room;  
}

string bookRoom() {
  string room;
  cout << "You open the door and it is a room full of books.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n"
          "There is a sign in front of you:\n\n"
          "+----------------------------+\n"
          "| What gets wet when drying? |\n"
          "+----------------------------+\n\n"
          "You see two doors: \n\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++ TOWEL +++   +++ WATER ++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n"
          "++++++++++++   ++++++++++++\n\n"
          "Which door do you enter? (\"towel\" or \"water\")\n"
          "> ";
  cin >> room;
  while (room != "towel" && room != "water"){
    cout << "Error. Please enter again: ";
    cin >> room;
  }
  cout << "\n\n";
  return room;  
}

void towelRoom() {
  cout << "You open the door and it is a room full of towel.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n";
}

void waterRoom() {
  cout << "You open the door and it is a room flooded in water.\n"
          "You enter the room. \n"
          "The door closes and locks behind you.\n";
}

int main() {
  string room;
  string result;
  cout << "\nWelcome to the riddle maze!\n\n"
          "You are in the entrance room.\n";
  do {
    //R1: 
    room = introRoom();
    if (room == "clock") 
    {
      //R2: 
      room = clockRoom();
      if (room == "echo") 
      {
        //R4
        room = echoRoom();
        if (room == "towel") 
        {
          //R8
          towelRoom();
          result = "won";
          
        } 
        else if (room == "water")
        {
          //R9
          waterRoom();
          result = "won";          
        }
      }
      else if (room == "book")
      {
        //R5
        room = bookRoom();
        if (room == "towel") 
        {
          //R10
          towelRoom();
          result = "won";
        } 
        else if (room == "water")
        {
          //R11
          waterRoom();
          result = "stuck";
        }
      }
    }
    else if (room == "crab") 
    {
      //R3
      room = crabRoom();
      if (room == "echo") 
      {
        //R6
        room = echoRoom();
        if (room == "towel") 
        {
          //R12
          towelRoom();
          result = "stuck";
        } 
        else if (room == "water")
        {
          //R13
          waterRoom();
          result = "stuck";
        }
      }
      else if (room == "book")
      {
        //R7
        room = bookRoom();
        if (room == "towel") 
        {
          //R14
          towelRoom();
          result = "lost";
        } 
        else if (room == "water")
        {
          //R15
          waterRoom();
          result = "lost";
        }
      }
    }
    if (result == "stuck")
    {
      cout << "You see a door: \n\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n\n"
              "Puzzled, you open the door and get in. \n"
              "You find yourself back in the entrance room.\n";
    }
    else if (result == "won")
    {
      //winning 
      cout << "You see a door: \n\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "+++ EXIT +++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n"
              "++++++++++++\n\n"
              "So you happily leave the maze through the door.\n"
              "Congratulations! \n";
    } 
    else {
      cout << "You see a sign:\n\n"
              "+--------- +\n"
              "| You lost |\n"
              "+----------+\n\n"
              "Then you die. Sorry. "
              "Bye bye.";
    }
  } while (result=="stuck");
}
