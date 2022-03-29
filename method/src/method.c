/*! \file method.c
    \brief This is the implementation file of methods, including everything to
    use the method.h file

    This is the implementation of methods, communication technology struct and
    conversation template. The communication technology struct is used to
    abstract the use of other libraries for i.e. bluetooth. The conversation
    template struct points to the first message template. Each message template
    includes the format string that is used to make the actual message, as well
    as a list of possible answers. The list of possible users is used both by
    the reciever of the first message to know what it can answer, but also for
    the sender of the first message to recognize the answer.
*/
#include <stdio.h>


struct Function {
  char[1028] formatFunctionString;
};


struct MessageTemplate {
  char[256] formatString;
  struct MessageTemplate[8] possibleAnswers;
};


struct ConvTemplate {
  MessageTemplate firstMessage;
};


struct ComTech {
  char[64] library;
  struct Function connectFunction;
  struct Function sendFunction;
  struct Function disconnectFunction;
};


struct Method {
  struct ConvTemplate conversationTemplate;
  struct ComTech communicationTechnology;
};


int execFunction(Function function, char[256] args) {

};


char[512] createMessage(MessageTemplate message, char[256] data) {

};
