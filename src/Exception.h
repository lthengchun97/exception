#ifndef Exception_H
#define Exception_H

typedef struct Exception Exception;
typedef Exception* ExceptionPtr;


struct Exception{               //If got more variable can add here
  char *msg;
  int errorCode;
};

Exception *createException(char *msg,int errorCode);
void freeException(Exception *e);
void dumpException(Exception *e);

#endif // Exception_H