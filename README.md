# MFD-Switches
Use at your own risk.
I am not accepting responsiblity for anything.
Copyright Ron Lyttle 2021.

![MFDswitchesPCB3](https://user-images.githubusercontent.com/92828067/139580375-8cdb09f3-fbd4-448e-a597-b1d98c8a2068.jpg)

I have to copyright because of some of the World's fools.
But I don't have to charge you for use/distribution.
If you modify it, put it under your name then.

How I extract displays in Falcon BMS 4.35.

Edit: I have recently changed to MFD.exe for MFD extraction.

Edit: Recently remembered you have to do this too.

"You have to run the graphics in windowed mode of course (not BMS's fault, it's a Windows limitation I think) and you can set this option with the configuration tool or just add this line

g_bUseExternalWindows 1

... into Falcon BMS.cfg by yourself."

I am refering to this web page here: 
https://simhq.com/forum/ubbthreads.php/topics/3384641/Re:_BMS:_Multifunction_Display

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

The hardware is identical for left and right and bottom but the firmware for each is different. There is a
leftMFD.ino and a rightMFD.ino and a bottomMFD.ino.

And now there are FalconBMS specific firmwares for left and right.

Mounting Holes, 3.2mm-plated.
From corners of screen, 5mm up/down, 7mm left/right. 
From bottom left vertice up 27mm and left 5mm.
From bottom right vertice up 15mm and right 5mm.

Sparkfun Pro Micro 5v Arduino:
https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/hardware-overview-pro-micro

Resistors are 100ohm 1/8watt.

Switches:
https://www.ebay.ca/itm/304100620636?hash=item46cdcf395c:g:RRcAAOSwJ~RZqQdk

Edit: Fixed the mounting hole descriptions.
Another Edit: Fixed resistors value.

P.S. I am calling this "Flex-Ware".
I am flexing some skills for all who want to see.
Presented for your enjoyment.


Have fun skyblasting/skytravelling in Transistor Land and Skies.
ron lyttle..
