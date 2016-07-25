#include "clog.h"

void addLog(char *path, char *msg){
  FILE *arq;
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  
  if((arq = fopen(path,"ab+")) == NULL) {
    perror("**Erro ao acessar ou criar o arquivo de Log.");
    sprintf(buffer,"**Erro ao acessar ou criar o arquivo de log (%s).\n", nome);
    print_w(buffer);
  }else{
    strftime (buffer,80,"%a %b %d %Y %X",timeinfo);
    fprintf(arq, "[%s] %s\n", buffer, mensagem);
    sprintf(buffer,"[%s]%s\n", buffer, mensagem);
    print_i(buffer);
    fclose(arq);
  }
}