#include "runsession.h"
#include <iostream>

//Initializer list
//Membuat run dalam keadaan bersih dengan object di set ke 0 semua
RunSession::RunSession()
    : currentRound(0), totalScore(0){}

//Memulai sessionnya
void RunSession::StartRun(){
    std::cout << "START RUN\n";

    //Loop 3 sampai ronde maks ke=3
    for(currentRound = 1; currentRound <=3; currentRound++){
        PlayRound(); // pangil ronde
    }

    std::cout << "END RUN\n";
    std::cout << "Total Score: " << totalScore << "\n"; //cetak score minta dari scoring system
}

//Memainkan ronde
void RunSession::PlayRound(){
    std::cout << "\n-- Round " << currentRound << "\n"; //menyatakan ronde yang sekarang

    int baseScore = scoringSystem.CalculateBaseScore(); //menghitung base score tiap ronde
    std::cout << "Base Score: " << baseScore << "\n"; //mencetak base score

    totalScore += baseScore; // totalscore dihitung dari semua base score ronde
}
    