#ifndef CONSOLEPROGRESSPRINTER
#define CONSOLEPROGRESSPRINTER

class ConsoleProgressPrinter
{
private:
    int lastPrint;
    int progMax;

public:
    ConsoleProgressPrinter(int max);
    void setMax(int max);
    void updateProgress(int index);
    void reset();
};
#endif
