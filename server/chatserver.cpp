//Created: 01/26/17 8:35pm
//Created By: Nathan (Natenador)

//header file
#include "chatserver.h"

chatserver::chatserver() {}
void chatserver::say_hello() {
     cout << "Hello!" << endl;
}

int main(int argc, char** argv) {
    chatserver s;
    s.say_hello();
}
