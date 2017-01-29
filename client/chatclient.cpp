//Created: 01/28/2017 1:53
//Created By: Nathan (nkroll)
#include "chatclient.h"

chatclient::chatclient() {}
void chatclient::say_goodbye() {cout << "Goodbye!" << endl;}
int main(int argc, char** argv) {
    chatclient c;
    c.say_goodbye();
}
