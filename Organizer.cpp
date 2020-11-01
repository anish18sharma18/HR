#include "Organizer.h"
#include <iostream>
using namespace std;

Organizer::Organizer(int Temps[DATA_CAPACITY]) {
 
    option1 = 0;
    option2 = 0;
    option3 = 0;
    option4 = 0;

 
       for(int i = 0; i< 10; i++) { 

         if (Temps[i] >= 200) {
            option4++;
        }                   
        if (Temps[i] < 80) {
            option2++;
            
        }
        if (Temps[i] > 120 && Temps[i] < 200) {
            option1++;
            
        }
        if (Temps[i] >= 80 && Temps[i] <= 120) {
            option3++;
          
        }
        
  }
}

void Organizer::PrintVariableData() {
    
    cout << "temperature data" << endl;
    cout << "times temperature over normal: " << option1 << endl;
    cout << "times temperature under normal: " << option2 << endl;
    cout << "times temperature in normal range: " << option3 << endl;
    cout << "times damage has occured due to heat: " << option4 << endl;
}
