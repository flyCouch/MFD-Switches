/* Use at your own risk.
   I am not accepting responsibility for anything.
   Copyright Ron Lyttle 2025.
   
   I have to copyright because of some of the World's fools.
   But I don't have to charge you for use/distribution.
   If you modify it, put it under your own name then.
   
   Read the readme.txt for hints on how to set up screens.
   
   This .ino is for the left FalconBMS MFD.
   
*/

#include <Keyboard.h>

// Define banks and positions
int banks[] = {8, 7, 9, 6};
int positions[] = {18, 15, 14, 16, 10};
unsigned long debounceTimes[4][5] = {0}; // 4 banks x 5 positions
const int debounceDelay = 667;
const int delayTime = 20;

// Keymap: Each entry represents the keys for [bank][position]
const int keyMap[4][5][3] = {
    // Format: {Modifier Key 1, Modifier Key 2, Main Key}
    {{132, 134, 166}, {132, 134, 167}, {132, 134, 168}, {132, 134, 169}, {132, 134, 170}}, // Bank 1
    {{132, 134, 171}, {132, 134, 172}, {132, 134, 173}, {132, 134, 174}, {132, 134, 175}}, // Bank 2
    {{132, 134, 225}, {132, 134, 226}, {132, 134, 227}, {132, 134, 228}, {132, 134, 229}}, // Bank 3
    {{132, 134, 230}, {132, 134, 231}, {132, 134, 232}, {132, 134, 233}, {132, 134, 234}}  // Bank 4
};

void setup() {
    // Configure banks as outputs
    for (int i = 0; i < 4; i++) {
        pinMode(banks[i], OUTPUT);
        digitalWrite(banks[i], HIGH);
    }

    // Configure positions as inputs with pull-up
    for (int i = 0; i < 5; i++) {
        pinMode(positions[i], INPUT_PULLUP);
    }

    Keyboard.begin();
}

void loop() {
    for (int bank = 0; bank < 4; bank++) {
        digitalWrite(banks[bank], LOW);

        for (int pos = 0; pos < 5; pos++) {
            if (digitalRead(positions[pos]) == LOW && millis() - debounceTimes[bank][pos] > debounceDelay) {
                debounceTimes[bank][pos] = millis();

                int mod1 = keyMap[bank][pos][0];
                int mod2 = keyMap[bank][pos][1];
                int key = keyMap[bank][pos][2];

                // Press modifiers if they exist
                if (mod1 != 0) Keyboard.press(mod1);
                if (mod2 != 0) Keyboard.press(mod2);

                // Press the main key
                Keyboard.press(key);
                delay(delayTime);

                // Release the keys
                Keyboard.release(key);
                if (mod2 != 0) Keyboard.release(mod2);
                if (mod1 != 0) Keyboard.release(mod1);
            }
        }

        digitalWrite(banks[bank], HIGH);
    }
}

