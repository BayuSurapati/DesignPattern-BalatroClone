#include "RunSession.h"
#include <stdio.h>
#include <ctime>
#include <cstdlib>

int main(){
    //Eksekusi untuk merandom hasil
    srand(static_cast<unsigned>(time(nullptr)));

    //Membuat object run
    RunSession run;

    //sesi dijalankan 1x
    run.StartRun();
}