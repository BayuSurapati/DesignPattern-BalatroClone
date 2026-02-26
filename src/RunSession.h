#pragma once
#include "ScoringSystem.h"

class RunSession{
private:
    int currentRound; //Menyimpan ronde ke berapa sekarang
    int totalScore; // akumulasi total semua skor dari semua ronde
    ScoringSystem scoringSystem; //Meminta scoring system untuk menghitung skor

public:
    RunSession(); //Constructor
    void StartRun(); //Memulai permainan
    void PlayRound(); //Satu ronde permainan
};