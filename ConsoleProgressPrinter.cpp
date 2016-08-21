#include <stdio.h>
#include "ConsoleProgressPrinter.h"

ConsoleProgressPrinter::ConsoleProgressPrinter(int max){
    lastPrint = 0;
    progMax = max;
}
void ConsoleProgressPrinter::setMax(int max){
    progMax = max;
}

void ConsoleProgressPrinter::updateProgress(int index){
    int progress = index * 100 / progMax;
    if (
        (
            progress % 10 == 0 &&
            progress > lastPrint
        ) ||
        (
            progress == 0 &&
            lastPrint == 0
        )
    )
    {
        printf("%d%% ", progress);
        lastPrint = progress + 1;
    }
}

void ConsoleProgressPrinter::reset(){
    lastPrint = 0;
    progMax = 0;
}
