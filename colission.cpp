#include "mass.h"
#include <iostream>
using namespace std;

void colission(mass Kug1,mass Kug2){
    //wir nehmen E-Erhaltung an, also ist m1v1^2+m2v2^2 = m1v1'^2+m2v2'^2, Masse bleibt erhalten. Der faktor 1/2 steht vor jedem Summand ergo kann ich den weg lassen
    // Impulserhaltung m1v1+m2v2=m1v1'+m2v2'
    // Herleitung steht auf meinem Notizzettel, einfach das LGS für v1' und v2' lösen, fertig
    Kug1.changeVelocity((Kug1.weight*Kug1.velocity+Kug2.weight*(2*Kug2.velocity-Kug1.velocity))/(Kug1.weight+Kug2.weight));
    Kug2.changeVelocity((Kug2.weight*Kug2.velocity+Kug1.weight*(2*Kug1.velocity-Kug2.velocity))/(Kug1.weight+Kug2.weight));
}


int main(){
    return 0;
}
