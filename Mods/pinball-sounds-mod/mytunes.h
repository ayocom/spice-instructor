#include <Pinball.h>


int melody1[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4, 0};
int timing1[] = { 250, 125, 125, 250, 250, 250, 250, 250, 10};

int melody2[] = {NOTE_DS4, NOTE_GS4, 0};
int timing2[] = {125, 250, 10};

int melody3[] = {NOTE_G3, NOTE_G3, NOTE_FS3, NOTE_FS3, NOTE_F3, NOTE_F3, NOTE_FS3, NOTE_FS3, NOTE_G3, 0, NOTE_G3, 0};
int timing3[] = {200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 1000, 10};


int mariotimes2[] = { \
\
  200, 200, 200, 200, 200, 200, 1000,           \
  200, 200, 200, 200, 200, 200, 1000,           \
\
  200, 200, 200, 200, 200, 200, 1000,           \
  200, 200, 200, 200, 200, 200, 1000,           \
\
  100, 100, 100, 200, 250, 200, 250, 200, 250,           \
  200, 250, 200, 250, 200, 250, 100, 100, 100, 100, \
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 3000};


int marionotes2[] = { \
\
  NOTE_C3, NOTE_C4, NOTE_A2, NOTE_A3, NOTE_GS2, NOTE_AS3, 0,\
  NOTE_C3, NOTE_C4, NOTE_A2, NOTE_A3, NOTE_GS1, NOTE_AS3, 0,\
\
  NOTE_G2, NOTE_G3, NOTE_E2, NOTE_E3, NOTE_F2, NOTE_F3, 0,\
  NOTE_G2, NOTE_G3, NOTE_E2, NOTE_E3, NOTE_F2, NOTE_F3, 0,\
\
  NOTE_F3, NOTE_E3, NOTE_DS3, NOTE_D3, 0, NOTE_F3, 0, NOTE_E3, 0,\
  NOTE_AS2, 0, NOTE_A2, 0, NOTE_DS3, 0, NOTE_D3, NOTE_GS3, NOTE_G3, NOTE_FS3, \
  NOTE_C4, NOTE_B3, NOTE_AS3, 0, NOTE_F3, 0, NOTE_CS3, 0, NOTE_C3, 0, NOTE_B2, 0, NOTE_AS2, 0};
