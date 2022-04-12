#include "house.h"

House::House()
{

}
void House::enterRoom(string& direction){
   this->riddles.insert(pair<string,string>("Attic", "What has many needles, but doesn’t sew?"));
    this->riddles.insert(pair<string,string>("Bedroom1", "What can you come out of?"));
    this->riddles.insert(pair<string,string>("Bedroom2", "I’m tall when I’m young, and I’m short when I’m old. What am I?"));
    this->riddles.insert(pair<string,string>("Hall1", "What has hands, but can’t clap?"));
    this->riddles.insert(pair<string,string>("Living Room", "What invention lets you look right through a wall?"));
    this->riddles.insert(pair<string,string>("Kitchen", "What is full of holes but still holds water?"));
    this->riddles.insert(pair<string,string>("Hall2", ""));
    this->riddles.insert(pair<string,string>("Bathroom", ""));
    this->riddles.insert(pair<string,string>("Utility", ""));
    this->riddles.insert(pair<string,string>("Exit room", ""));




}
void House::createRooms(){
    a = new Room("Attic", "");
}
