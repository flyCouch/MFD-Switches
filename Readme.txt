Use at your own risk.
I am not accepting responsiblity for anything.
Copyright Ron Lyttle 2021.

I have to copyright because of some of the World's fools.
But I don't have to charge you for use/distribution.
If you modify it, put it under your name then.

How I extract displays in Falcon BMS 4.35.

Edit the RTTClient.ini in Falcon BMS 4.35/Tools/RTTRemote/
There are lots of comments that explain settings.
You can use negative numbers for x/y if your display system requires it.

When using the Falcon BMS launcher there is a entry that  says RTT "Client". Start
that before going for launch.

Older versions have cockpit display extraction on the launcher screen.

I found this out by searching with terms like "cockpit display extraction + SIM NAME" 
"rtt client/server"

Glue about a 5mm foam to the back of the switches and then minimally silicone the foam to the screen.
Use a cheap old monitor, or not.

You might want to use a socket for the Arduino to elevate it enough for the USB cable to fit.

The hardware is identical for left and right but the firmware for each is different. There is a
leftMFD.ino and a rightMFD.ino.

Mounting Holes, 3.2mm-plated.
From corners of screen, 5mm up/down, 7mm left/right. 
From bottom left vertice up 27mm and left 5mm.
From bottom right vertice up 15mm and right 5mm.

Sparkfun ProMicro Arduino
https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/hardware-overview-pro-micro

Resistors are 500ohm 1/8watt.

Switches
https://www.ebay.ca/itm/304100620636?hash=item46cdcf395c:g:RRcAAOSwJ~RZqQdk

Edit: I just noticed the F-18 has a bottom, 3rd screen so I wrote a firmware for that. It is
in the Arduino Pro Micro Firmware folder.
Next Edit: Fixed the mounting hole descriptions.

Have fun skyblasting stuff in Transistor Land and Skies.
ron lyttle..
