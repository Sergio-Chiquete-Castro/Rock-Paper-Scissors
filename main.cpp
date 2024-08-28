#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

class RPS_Game{

private:
int rps_choice;
string rock[6];
string paper[6];
string scissors[6];
int random_number;
public:

RPS_Game(){

rock[0] = "    _______";
rock[1] = "---'   ____)";
rock[2] = "      (_____))";
rock[3] = "      (_____))";
rock[4] = "      (____))";
rock[5] = "---.__(___)";

paper[0] = "     _______";
paper[1] = "---'    ____)____";
paper[2] = "           ______)";
paper[3] = "          _______)";
paper[4] = "         _______)";
paper[5] = "---.__________)";

scissors[0] = "    _______";
scissors[1] = "---'   ____)____";
scissors[2] = "          ______)";
scissors[3] = "       __________)";
scissors[4] = "      (____))";
scissors[5] = "---.__(___)";

}

void game(){
cout << "Welcome to ROCK PAPER SCISSORS"<<endl;
cout<<endl;
cout<<endl;

random_cpu_rps();

cout << "Rock(1), Paper(2) Scissors(3) : ";
cin >> rps_choice;


switch(rps_choice) {
case 1:
rock_choice();
break;
case 2:
paper_choice();
break;
case 3:
scissors_choice();
break;

default:
cout<<"error";
break;

}
}

void random_cpu_rps(){
    srand(std::time(0)); 
    random_number = std::rand() % 3 + 1; 
}


void rock_loop(){
     for(int i =0; i<6;i++){
        cout <<rock[i]<<endl;
        }
}

void paper_loop(){

    for(int i =0; i<6;i++){
    cout <<paper[i]<<endl;
    }
}

void scissors_loop(){
   
for(int i =0; i<6;i++){
    cout <<scissors[i]<<endl;
}
    
}
void rock_choice(){
/*
rock vs rock  [tie]
rock vs paper  [rock lose]
rock vs scissors  [rock wins]
*/
//LOGIC 1 = rock , 2 = paper, 3 = scissors 

    if(random_number == rps_choice){
        cout << "YOUR CHOICE: "<<endl;
        rock_loop();
        cout << "CPU CHOICE: "<<endl;
        rock_loop();

        cout <<"ITS A TIE"<<endl;
    }
    else if(random_number == 2 ){
         cout << "YOUR CHOICE: "<<endl;
        rock_loop();
        cout << "CPU CHOICE: "<<endl;
        paper_loop();

        cout <<"You Lose!"<<endl;
    }
    else if(random_number==3 ){
        cout << "YOUR CHOICE: "<<endl;
        rock_loop();
        cout << "CPU CHOICE: "<<endl;
        scissors_loop();

        cout <<"You Win!"<<endl;
    }
 
}

void paper_choice(){
/*
paper vs rock   [paper wins]
paper vs paper [tie]
paper vs scissors [paper lose]
*/
//LOGIC 1 = rock , 2 = paper, 3 = scissors 


if(random_number == rps_choice){
        cout << "YOUR CHOICE: "<<endl;
        paper_loop();
        cout << "CPU CHOICE: "<<endl;
        paper_loop();
        cout <<"TIE"<<endl;
    }
    else if(random_number == 1 ){
        cout << "YOUR CHOICE: "<<endl;
        paper_loop();
        cout << "CPU CHOICE: "<<endl;
        rock_loop();

        cout <<"You Win!"<<endl;
    }
    else if(random_number==3 ){
        cout << "YOUR CHOICE: "<<endl;
        paper_loop();
        cout << "CPU CHOICE: "<<endl;
        scissors_loop();

        cout <<"You Lose!"<<endl;
    }

}
void scissors_choice(){
/*
scissors vs scissors  [tie]
scissors vs paper   [scissors win]
scissors vs rock    [scissors lose]
*/
//LOGIC 1 = rock , 2 = paper, 3 = scissors 

if(random_number == rps_choice){
    cout << "YOUR CHOICE: "<<endl;
        scissors_loop();
        cout << "CPU CHOICE: "<<endl;
        scissors_loop();
        cout <<"TIE"<<endl;
    }
    else if(random_number == 1 ){
        cout << "YOUR CHOICE: "<<endl;
        scissors_loop();
        cout << "CPU CHOICE: "<<endl;
        rock_loop();
        cout <<"You Lose!"<<endl;
    }
    else if(random_number==2 ){
        cout << "YOUR CHOICE: "<<endl;
        scissors_loop();
        cout << "CPU CHOICE: "<<endl;
        paper_loop();
        cout <<"You Win!"<<endl;
    }

}
};


int main(){

RPS_Game start;
start.game();
 }


 
