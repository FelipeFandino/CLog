#include "stdio.h"
#include "ncurses.h"

#define LOGLEVEL 1
//LogLevel - 0 Tudo, 1 Warning/Error, 2 Error

void addlog(FILE *logfile, char* msg);

void print_i(char* msg);
void print_e(char* msg);
void print_s(char* msg);
void print_p(char* msg);

void log_setup();
void log_exit();

FILE *getLog();