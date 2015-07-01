// Store songs, soundeffects, and timed-event arrays here.

// Side LEDs flashing in loop throughout the game
int sideflashloop[] = {1, 0};
int sideflashtime[] = {1000, 1000};

// Side LEDs flashing fast when a life is lost
int sidelifeflash[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
int sidelifetime[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};

// Side and top LEDs when game is over
int deathLED[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34};
int deathtime[] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};

// Scoreflash at end game
int scflashvals[] = {1, 0};
int scflashtime[] = {500, 500};

// RGB turn off after some time timed event
int rgboffvals[] = {0, 1};
int rgbofftime[] = {1900, 10};

// Score up coin_sound timing array, use sidelifeflash[] array for side LED vals
int scoreuptime[] = {50, 50, 250, 50, 50, 50, 250, 50, 50, 50, 250, 50, 50, 50, 250, 50, 50, 50, 250, 50};

// Flash LED resistor color code vals array, use sidelifetime[] for timing
int colorLEDvals[] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 0};

// FSR stuff
int fsr_max = 800;    // This is the maximum expected analog readout of fsr
int fsrarraylen = 8;
int fsrarrayvals[] = {0, 1, 2, 1, 2, 1, 2, 3}; // 0 starts servo and music, 1 & 2 blink base LEDs, 3 turns servo off
int fsrarraytime[] = {250, 250, 250, 250, 250, 250, 250, 250};

// Shift register pattern
int shiftpatvals[] = {1, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19};
int shiftpattime[] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};





// Songs and sound effects (temporary placeholder notes and array lengths, Please replace with actual)
// Mr. Roboto, length needs to be longer by one, Arduino memory problems
//int roboto_len = 8;
//int roboto_vals[] = {NOTE_C3, NOTE_C4, NOTE_A2, NOTE_A3, NOTE_GS2, NOTE_AS3, 0};
//int roboto_time[] = { 200, 200, 200, 200, 200, 200, 1000};
int roboto_len = 16*4+1;
int roboto_vals[] = {\
\
  NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, 0, NOTE_C4, 0, 0, 0, NOTE_B3, 0, NOTE_C4, 0,\
  0, 0, NOTE_C4, 0, 0, 0, NOTE_B3, 0, NOTE_C4, 0, 0, 0, NOTE_B3, 0, 0, 0,\
  NOTE_D4, 0, NOTE_D4, 0, NOTE_D3, 0, NOTE_D3, 0, 0, 0, 0, 0, 0, 0, 0, 0,\
  NOTE_D4, 0, NOTE_D4, 0, NOTE_D3, 0, NOTE_D3, 0, 0, 0, 0, 0, 0, 0, 0, 0,\
0};
int roboto_time[] = {\
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,\
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,\
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,\
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,\
100};


// Funky Town, length needs to be longer by one, Arduino memory problems
int funk_len = 34;
int funk_vals[] = {NOTE_F3, NOTE_E3, NOTE_DS3, NOTE_D3, 0, NOTE_F3, 0, NOTE_E3, 0,\
  NOTE_AS2, 0, NOTE_A2, 0, NOTE_DS3, 0, NOTE_D3, NOTE_GS3, NOTE_G3, NOTE_FS3, \
  NOTE_C4, NOTE_B3, NOTE_AS3, 0, NOTE_F3, 0, NOTE_CS3, 0, NOTE_C3, 0, NOTE_B2, 0, NOTE_AS2, 0};
int funk_time[] = {100, 100, 100, 200, 250, 200, 250, 200, 250,			 \
  200, 250, 200, 250, 200, 250, 100, 100, 100, 100, \
  100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 3000};
  
// Beep Boop // Arduino is ignoring first two notes. Don't know why.
//int beep_len = 6;
//int beep_vals[] = {NOTE_A2, 0, NOTE_D3, 0, NOTE_A2, 0};
//int beep_time[] = {100, 900, 100, 900, 100, 900};
int beep_len = 12;
int beep_vals[] = {0, NOTE_C4, 0, NOTE_G3, 0, NOTE_E4, 0, NOTE_G3, 0, NOTE_C4, 0, NOTE_C3, 0};
int beep_time[] = {200, 200, 400, 200, 300, 200, 400, 200, 300, 200, 400, 200, 1200};


// Death track
//int death_len = 8;
//int death_vals[] = {NOTE_C3, 0, NOTE_C3, 0, NOTE_C3, 0, NOTE_A2, 0};
//int death_time[] = {100, 50, 100, 50, 100, 50, 1000, 10};

int death_len = 17;
int death_vals[] = {0, NOTE_C4, 0, NOTE_G3, 0, NOTE_E3, 0, NOTE_A3, NOTE_B3, NOTE_A3, NOTE_GS3, NOTE_AS3, NOTE_GS3, NOTE_G3, NOTE_F3, NOTE_G3, 0};
int death_time[] = {10, 200, 400, 200, 300, 200, 300, 400, 400, 400, 400, 400, 400, 150, 150, 1200, 1000};

// Life lost 
//int life_len = 3;
//int life_vals[] = {NOTE_C3, NOTE_A2, 0};
//int life_time[] = {125, 500, 10};
int life_len = 39;
int life_vals[] = {\
  0, NOTE_C5, NOTE_B4, NOTE_AS4, \
  NOTE_A4, NOTE_GS4, NOTE_G4, NOTE_FS4, \
  NOTE_F4, NOTE_E4, NOTE_DS4, NOTE_D4,\
  NOTE_CS4, NOTE_C4, NOTE_B3, NOTE_AS3,\
  NOTE_A3, NOTE_GS3, NOTE_G3, NOTE_FS3,\
  NOTE_F3, NOTE_E3, NOTE_DS3, NOTE_D3,\
  NOTE_CS3, NOTE_C3, NOTE_B2, NOTE_AS2,\
  NOTE_A2, NOTE_GS2, NOTE_G2, NOTE_FS2,\
  NOTE_F2, NOTE_E2, NOTE_DS2, NOTE_D2,\
  NOTE_CS2, NOTE_C2, 0};
  // time is same as startup_time


// Coin sound
int coin_vals[] = {NOTE_DS4, NOTE_GS4, 0, NOTE_DS4, NOTE_GS4, 0, NOTE_DS4, NOTE_GS4, 0, NOTE_DS4, NOTE_GS4, 0, NOTE_DS4, NOTE_GS4, 0};
int coin_time[] = {125, 250, 10, 125, 250, 10, 125, 250, 10, 125, 250, 10, 125, 250, 10};

// +1 score sound
int scoreone_len = 3;
int scoreone_vals[] = {NOTE_DS4, NOTE_GS4, 0};
int scoreone_time[] = {125, 250, 10};

// oneup sound
//int oneup_len = 18;
//int oneup_vals[] = {NOTE_C2, 0, NOTE_C2, 0, NOTE_C2, 0, NOTE_GS2, 0, NOTE_GS2, 0, NOTE_GS2, 0, NOTE_A2, 0, NOTE_A2, 0, NOTE_A2, 0}; 
//int oneup_time[] = {100, 10, 100, 10, 100, 10, 100, 10, 100, 10, 100, 10, 100, 10, 100, 10, 100, 10};
int oneup_len = 8;
int oneup_vals[] = {0, NOTE_E3, NOTE_G3, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_G4, 0};
int oneup_time[] = {10, 200, 200, 200, 200, 200, 200, 10};

// Startup sound
//int startup_len = 8;
//int startup_vals[] = {NOTE_A2, 0, NOTE_A2, 0, NOTE_A2, 0, NOTE_C3, 0};
//int startup_time[] = {100, 50, 100, 50, 100, 50, 1000, 10};
int startup_len = 39;
int startup_vals[] = {\
  0, NOTE_C2, NOTE_CS2, NOTE_D2, NOTE_DS2,\
  NOTE_E2,NOTE_F2,NOTE_FS2,NOTE_G2,\
  NOTE_GS2,NOTE_A2,NOTE_AS2,NOTE_B2,\
  NOTE_C3,NOTE_CS3,NOTE_D3,NOTE_DS3,\
  NOTE_E3,NOTE_F3,NOTE_FS3,NOTE_G3,\
  NOTE_GS3,NOTE_A3,NOTE_AS3,NOTE_B3,\
  NOTE_C4,NOTE_CS4,NOTE_D4,NOTE_DS4,\
  NOTE_E4,NOTE_F4,NOTE_FS4,NOTE_G4,\
  NOTE_GS4,NOTE_A4,NOTE_AS4,NOTE_B4,NOTE_C5,0};
  
int startup_time[] = {\
  500, 100, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,\
  40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,\
  40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 500, 1000};
  
  
  int levelupnotes[] = {0,\
  NOTE_G2, NOTE_C3, NOTE_E3, NOTE_G3, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_E4, 0,\
  NOTE_GS2, NOTE_C3, NOTE_DS3, NOTE_GS3, NOTE_C4, NOTE_DS4, NOTE_GS4, NOTE_DS4, 0,\
  NOTE_AS2, NOTE_D3, NOTE_F3, NOTE_AS3, NOTE_D4, NOTE_F4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_C5, 0}; 

int leveluptimes[] = {125,\
  125, 125, 125, 125, 125, 125, 325, 175, 175,\
  125, 125, 125, 125, 125, 125, 325, 175, 175,\
  125, 125, 125, 125, 125, 125, 325, 125, 125, 125, 925, 825};
  
int leveluplength = 31;

