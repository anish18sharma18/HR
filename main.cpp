
#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include "Organizer.h"
 

using namespace std;

#define DATA_CAPACITY 10

int main() {
    int Temps[DATA_CAPACITY]; 
     srand (time(NULL));

    for(int i = 0; i < 10 ; i++){
      Temps[i] = rand() % 250;
    }
    //non random temps
    //Temps[0]  = 50;
    //Temps[1]  = 210;
    //Temps[2]  = 20;
    //Temps[3]  = 5;
    //Temps[4]  = 99;
   
    Organizer object(Temps);


    object.PrintVariableData();


    return 0;
}
