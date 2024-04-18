# 11SENA_LEDGAME_TESTBENCH

In this area of study students produce, test, diagnose and evaluate operational electrotechnological systems. Using
the systems engineering process, students use a range of materials, tools, equipment, machines and components
and manage identified risks while producing the system. They use appropriate equipment
to test the system and diagnose its performance, making necessary modifications and adjustments. They record
progress and evaluate the integrated system and their use of the systems engineering process, referring to the
factors that influence their creation of the system. Students suggest how the system and their utilisation of the
systems engineering process could be improved.


Systems Engineering Unit 2                                       
Electro-technological System Major Assessment Folio
By Benjamin Wilkinson 

Brief:
Problem:
The problem is that I require a physical game that has interactivity and that utilizes LEDs and other electronic components.
Context:
I need to research, design, and construct a physical electronic game for myself that utilizes LEDs. The function of this game will be to provide entertainment to the user. I would like the spatial limitations to be set at being able to fit in a 45cm x 45cm x 45cm area. I am considering creating a LED reaction time like game that will use a LED strip formatted in a square array. There could be a racing-like theme as the person I am making this for is interested in such a theme. The idea of the game is for the LED strip to display a “chasing” LED that chases up and down the strip, this moving led would be considered the user or player’s LED, there would be a led and or multiple LEDs that would light up separate from the other LED’s and this would be considered the Reaction LEDS this zone would be the target as the player LED chases up and down the strip the user would need to press a button that would send an input to the Arduino microcomputer to signify activating that LED and the player would then score points or lose lives depending on if the player LED hit the zone or not. The Arduino would then visually or audibly show or save in some way the player’s score.
Constraints	Considerations
Components must be electronic	3D printing or laser cutting the frame
LED’s must be used	Racing Theme in certain areas.
Must be completed by a set date	Should fit within the set size limitation.
Player LED needs to chase	Single input system
Player LED must interact with scoring zone	
Game must show score audibly or visually	

Evaluation Criteria:
Does the Player LED chase?
Test: start game and let LED chase.

Can the Player LED Interact with scoring zone?
Test: Press scoring button when player LED is in zone.

Does the game save or show score either visually or audibly?
Test: Score points whilst playing game.


Research:
Similar Products:

Product:	Potential
Similarities	Potential
Differences	Summary
 	•	Is a functional game.
•	Utilizes LEDs
•	Single input system.
•	Very similar game design mechanics.	•	Score based to collect points/ tickets.
•	Arcade pay to play functionality.
•	Important aesthetic appeal.	Generally, is very similar to the idea that I have for the system as it is a technological system that solves the problem. It showcases an idea for a electronic, physical and interactive game. However it is made for arcade functionality and not for casual playing.
 	•	Utilizes placement-based interaction to achieve functionality on target locations.
	•	Is not a functional game.
•	Used for security.
	This is very different from what I would like to design however some ideas can be derived on how to make my system such as hitting areas and moving to the next area to then have some other functionalities happen.
 	•	Is a functional game.
•	Single input system.
•	Very similar game design mechanics.	•	Is not a physical game.
	Generally, solves the problem, however, is not a physical game a physical version of this game could be made 


Key Inspiration: 

 
These photos are from a video game named “Dead by Daylight”, this mini game inside the game is known as a skill check, and the game is played by pressing the space key on your keyboard once the icon travels/hits the target area. You are then awarded for hitting this area the more you hit it the harder it gets but the more rewarding it is. This is the basis behind the game I have Identified that I would like to make. I will use an LED array to visualize a target area and a player chaser icon to interact with the area that you are supposed to hit.

















Component Research:
Microcomputers:
Arduino Nano:
The Arduino Nano is Arduino's classic breadboard friendly designed board with the smallest dimensions. The Arduino Nano comes with pin headers that allow for an easy attachment onto a breadboard and features a Mini-B USB connector. As I have previous experience using C++ and Arduino microcomputers, I am very much inclined to using this microcomputer for my project.
 
Raspberry Pi:
The Raspberry Pi is the name of a series of single-board computers, the Raspberry Pi Model B+ is the final revision of the original raspberry pi one. It encompasses a neat form factor with aligned USB connectors as well as a 3.5mm audio jack. Micro SD and ethernet ports are also on this board. Due to my lack of experience with this board I am not inclined into using this microcomputer for my project.






ESP32:
ESP32 DOIT DEVKIT V1 is a developmental board that could be used as a microcomputer in my project, it has good functionality and can be programmed with C++, it also has a wireless protocol built in that allows for transferring data from ESP to ESP this protocol is ESPNOW. I do have experience with the board, however, not for controlling LED strips. Because of this lack of usable experience, I am not inclined to use this microcomputer for my project.
 




LED Strips:
In particular medium density RGB LED strips with 5V, GND and DATA pin female connectors. This will effectively meet solution requirements as these are programmable and integrate well with Arduino code and libraries. As well as allow for soldering with wires into other systems and components.

 


Buttons / Switches:

Medium sized PBNO Button:
Medium sized push button normally open button could be used as input devices to interact with the system. This button is a good size for fitting in the project box for housing electronics. It features a screw in design that will allow me to screw it into a 3d printed design or at least sit it in a hole. as well as terminals that stick out at the bottom allowing for me to solder wires to it easily.
 

Small sized PBNO Button:	
Small sized push button normally open button could be used as input devices to interact with the system. This button is rather small though and would not align aesthetically with the physical build of the project as well as this button being required to sit on a breadboard, that also doesn’t correlate with the requirements of this project.






Displays:

0.91” OLED:
0.91” OLED display could be used as an output device to present key information to the user during game play. This display will fit the size limit.










2.80” OLED:	
2.80” OLED display could be used as an output device to present key information to the user during game play. This display will fit the size limit. But there is no real need, nor do I really want to have this big of a screen.









Sound devices:

0.25W 8Ω Speaker:
This could be used to play tones and possibly other sounds to the user during gameplay, this will inform them audibly of things that happen during the game such as passing or losing a level. 










Buzzer:
A buzzer could be used to make sounds during gameplay, this would inform the player/user audibly of things that happen during the game such as passing or losing a level. I am less inclined to utilize a buzzer because I don’t think the sound will be right for being held in a plastic box, and because I am less knowledgeable on how buzzers work when compared to other sound devices such as the speaker.





 
DESIGN IDEAS:


 
 


























Design Options:

































































 
Preferred Design Option:
My preferred design option is a blend of my design options taking certain aspects that work best. This blend will incorporate the square layout of preferably medium or high-density LEDs. Other electronic componentry that will be added include a loudspeaker for playing audio at specific times such as if you lose a life or hit the desired led zone. Another component is an LCD screen for displaying information to the user such as score or instructions such as start game or play again. Another component I am considering adding is a single led or possibly another led strip. This would be used to show if you lose or gain life by either hitting or missing the desired zone.












 



























Circuit Diagram of Preferred Option:








 
Algorithm of system:

























Projected Time Plan:

























Component List/Plan:
Component	Subsystem	Arrival
Arduino Nano	Electronics	Straightaway
0.25W Speaker	Electronics	Straightaway
0.91” OLED	Electronics	Straightaway
PBNO Button	Electronics	Straightaway
LED strips	Electronics	Straightaway
Breadboard	Electronics	Straightaway
Battery pack	Electronics	Straightaway

 
Production Plan:
Name	Equipment/Tools	How	Why
Design Ideas	NA		
Code Button	Laptop, Button, Bread board, Wires, Arduino Nano 	Through researching and experimenting on how to code and integrate a button into a system	Because this would be used in the system as the physical input mechanic.
Code Game	Laptop	Through researching and experimenting on how to code such game.	Because this would be used in the system as the game mechanic.
Code Screen	Laptop, Screen, Bread board, Wires, Arduino Nano	Through researching and experimenting on how to code and integrate a screen into a system	Because this would be used in the system as the visual mechanic.
Code Speaker	Laptop, Speaker, Bread board, Wires, Arduino Nano	Through researching and experimenting on how to code and integrate a speaker into a system	Because this would be used in the system as the sound mechanic.
Code Levels	Laptop, Screen, Button, Bread board, Wires, Arduino Nano	Through researching and experimenting on how to code such levels.	Because this would be added to the game mechanic to increase the games playability.
Code Second Chance	Laptop	Through researching and experimenting on how to code such second chance feature.	Because this would be added to the game mechanic to increase the games playability and be an extra feature.
Code special chance levels	Laptop	Through researching and experimenting on how to code game feature.	Because this would be added to the game mechanic to increase the games playability and be an extra feature
Code Rainbow wave	Laptop, LED Strip	Through researching and experimenting on how to code game feature.	Because this would be added to the game mechanic to have extra physical appeal
3D model shell	Laptop, Cura, Fusion	Through Modelling using appropriate software	Because this would be a vital physical component of the system.
3D model frame	Laptop, Cura, Fusion	Through Modelling using appropriate software	Because this would be a vital physical component of the system.
Conceptualize Algorithm	Pen	By writing up the process out on a whiteboard	Because this would be used to understand the flow of operations in the system.
Print Shell	Laptop, 3D printer, PLA	Through Modelling using appropriate software and hardware solutions	Because this would be a vital physical component of the system.
Print Frame	Laptop, 3D printer, PLA	Through Modelling using appropriate software and hardware solutions	Because this would be a vital physical component of the system.
Assemble Test bench	Breadboard, Nano, Wires, Screen, Speaker	Through assembling such system using appropriate parts and components.	Because this would be vital to testing and building upon the system.
Assemble Shell	Hot Glue, System, Wires, 	Through assembling such system using appropriate parts and components.	Because this would be vital to completing and assembling the full system
Assemble Frame	Screw Driver, Pliers, Hot Glue, LED strips, chisel, pocket knife, wire connectors	Through assembling such system using appropriate parts and components.	Because this would be vital to completing and assembling the full system
Test Game	Laptop, system	Through Playing the game and testing functionality of components incorporated into the system	Because this would be vital in being able to complete the project as well as 
Evaluate system	Laptop, system	Through Playing the game and testing functionality of components incorporated into the system	Because evaluation of the successfulness of the system and the overarching projected needs to be done

 
#	Action:	Equipment:
Prio	Hazard:	Safety:
1	Soldering wires together.
	Arms, Soldering iron, wires, electronic componentry, solder	9	Burning fingers and hands, breathing in fumes, fumes irritating eyes	Wear heat resistant gloves and use soldering iron with utmost care and concentration.
2	Setting up 3D printer
	Arms, 3D printer, filament	6	Burning fingers on nozzle or base.	Wear heat resistant gloves, and handle parts of the 3D Printer with utmost care and concentration.
3	Using Hot glue gun
	Hot glue gun, hands, glue sticks	6	Burning hands/ getting hot glue on hands	Wear heat resistant gloves and handle Hot glue gun with utmost care and concentration.
4	Handling Damaged or faulty Electrical Components
	Electrical componentry (Arduino Nano), hands	6	Electric shock, burning hands, causing a fire.	Caution, not trying to use components that are known to be broken
5	Handling Electronics in Wet conditions
	Electrical componentry (Wires), hands	8	Short Circuit, Arcing, starting a fire	Spotting and moving away from wet conditions when working with/on electronics
6	Handling Electronics with Damaged Insulation
	Electrical componentry (Wires), hands	8	Short Circuit, Arcing, starting a fire	Spotting damaged insulation and throwing it away/ stop using it.
7	Exposed Electronics
	Electrical componentry (Wires, Nano), hands	6	Short Circuit, Burns	Spotting Exposed Electronics and throwing it away/ stop using it or make it not exposed.
8	Improper Grounding
	Electrical componentry (Wires, Nano), hands	6	Electrocution	Caution / not removing ground pin from electronics.
9	Choking / Consuming 3D printed parts	Mouth, 3D printed parts, Trachea	3	
Choking	Keep small parts of 3D printed PLA away from mouth.


Risk Matrix:
Likelihood x Severity = Priority
	Likelihood	Remote	Unlikely	Possible	Likely	Certain
Severity		1	2	3	4	5
Catastrophic	5	5	10	15	20	25
High	4	4	8	12	16	20
Medium	3	3	6	9	12	15
Low 	2	2	4	6	8	10
Negligible	1	1	2	3	4	5



Safety Plan:
Reasonable Steps were always taken in order for proper safety to be ensured. This included along the course of the production plan, wearing appropriate safety equipment during soldering, 3D printing and utilizing hot glue guns. For all risks to be managed all nine identified risks and their safety precautions were taken into consideration and steps were followed. As each identified risk in the risk assessment has a corresponding number during each diary entry if there are actions needed to be taken in order to safely go about hazards there will be a number highlighted in RED.






Production Diary:
20th of June:
Started researching ideas for a possible LED reaction time like game. I remembered a fun mini game that is from a game called Dead by Daylight, this mini game consists of a reaction time type system where you must press a button when your user icon hits a certain zone, missing or ignoring the zone has consequences and hitting the zone has benefits, my initial thoughts were to try to replicate this game using an LED strip and buttons.

27th of July:
Started Sketching and designing 3 possible and functional design ideas for my game. I started building the circuitry by starting off collecting basic components such as a 20 LED medium-density LED strip, 3 wires for the corresponding colors to be used for Voltage (Red), Ground (White) and Data (Green), an Arduino Nano microcomputer and a breadboard. I chose to use an Arduino Nano as I was familiar with it from past STEM classes, we had in the past programmed LED strips in year 9. I was able to via a previous assessment submission recover and salvage my chaser code from year 9. I then connected and tested such code with the Arduino.












31st of July:
Finished sketching and designing 2/3 of the design ideas for my game. I continued to research components to add to my game. This included a speaker, LCD screen, and separate LEDs. I continued to build upon the Arduino nano breadboard test bench, this included adding a PBNO button (this would be used to toggle start and stop the game), and the required resistor (INSERT RESISTANCE) and wires. Then I researched how to program the button and effectively use it to start the chaser code, but I was not able to integrate it.












1st of August:
Finished sketching and designing the initial 3 design ideas for my game. I worked on the test bench Arduino breadboard code and managed to successfully integrate the button code with the chaser code, I was able to do so however the code didn’t run as intended it instead made the LED chaser chase forward once then return, this code made the button make the LED strip run the chaser code once or if you held down the button, run until the button is not pressed down. I then worked on the code outside the classroom and the problem that arose earlier in the day was still a problem.












7th of August:
Started worked on preferred design
option and researched how to integrate 
toggle button into LED chaser.



8th of August:
Researched code integration and failed miserably yet again, started considering using two push buttons to start and stop game instead, however for multiple reasons including sheer determination and drive to integrate the toggle switch into my code I proceeded to waste time researching. The code above. is the latest attempt.



10th of August:
After a lot of prototyping and still unsuccessfully integrating the toggle switch into the chaser code. I opted to change from a small Arduino button to a larger red push button that supposedly had been used as a toggle switch in a previous STEM project. From my tests this new button was unfortunately just a more premium PBNO button switch. I plan to use this new button rather than the old one as it will be able to integrate into a 3d printed design. The old button is meant to be used more so in an initial test bench’s breadboard. This new button required me to strip the wire, tin the wire with a small amount of solder than solder each wire (ground and data, cut to male) to the separate ends. I then researched and found a library called “ezButton”, with this I would then go on to successfully after a long, long time integrate the toggle switch button code into my system with any code being able to loop. Thus, as of right now in the test bench, I am just using a LED chaser code. 1
This code can be found on my GitHub here: https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/11SystemTestBench.ino










14th of August:
Game Version: 0.1.0
I researched and acquired a bit of code that is very similar to the game I had wanted to make. This code would now be used as the basis for my game, and I will be adding additional componentry and features. This code has been changed a little bit to integrate with my physical system.


22nd of August:
After a short break from working on this project in class, I managed to locate a small LCD screen that I would use for testing and implementing a LCD screen into my code and test bench. Outside of school I tried to code and implement a new starting stage code which would have been a racing style (because of my solution considerations) flash and then fade in 3 colors starting with red then yellow than green and then the game state or stage would increment by 1 so that it would start the next stage and start the actual game. However this code that I spent ages researching and trying to implement simply didn’t start the next game stage, it would after being uploaded start on game state 0 which is the rainbow gradient, upon a button press it would then start the process of flashing through the 3 colors and then it would not change game state and start the game but rather stay in game state 0. This infuriated me to be honest and left me extremely demoralized. 









23rd of August:
Game Version: 0.1.1
I did not have class today but was motivated to work on the project as I had just gotten the OLED 0.91inch 128x32 display which would require researching and implementing new libraries and this would be good fun implementing into the main game code. I successfully implemented this new code to my likings with it reading out different messages on the display at different stages or states of the game. Some examples of currently implemented messages are, prestart state 1 reads “Play?”, starting state 1 stage has no message and thus has the display blacked out. And then for each of the 4 game levels it reads the corresponding stage (e.g., Level 1). As of now when you win or lose at every stage or at the end of the final level It just changes when appropriate to the next stage or if you lose back to state 0 message of “Play?”. The main library that I am using to configure and control the display is “U8g2” (Universal Graphics Library for 8 Bit Embedded Systems). It is a popular graphics library for Arduino and other microcontroller platforms. It is designed to work with monochrome and color OLED displays, LCDs and other types of display modules, it can be used to draw text, shapes and images onto the chosen display which is why I think this library is most suitable for my project. I then downloaded the U8g2 sample source code which allowed me to study how to implement and integrate the component and library into my system and code. Through the sample code I was able to clear internal memory, set font, draw strings onto the display and transfer internal memory to the display. 
The wiring process was simple, however I had to research the I2C pins SDA and SCL for the Arduino Nano which are A4 and A5 respectively. I then used 4 wires I had previously stolen from the Stem lab and kept in my bag to wire and integrate the display into my system. The wiring real world diagram as well as the pin identifiers for the Arduino Nano can be seen below. A photo of the latest test bench is also below. After a series of relatively annoying and long coding sessions, today was breeze and thoroughly enjoyable restoring my faith in this project. The code with the new feature can be seen on my GitHub Systems Engineering repository.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.1.ino

 









24th of August:
Game Version 0.1.2
Today we were meant to have systems engineering class however we had an incursion that took place instead of usual proceedings. This encouraged me to work on my project outside of school. I actually got a lot of progress done code wise. There are multiple small coding features and enhancements that have not been documented in this production diary thus far, these coding projects include trying to innovate and figure out a way to make new levels however my first attempt at this failed and I was unsuccessful. Another feature I tried to implement was the new starting animation which has been spoken about previously. Today’s progress was implementation of the new levels with different speeds and different sized target areas. This proved to be pretty easy after analyzing the code and figuring out the functions and variables. I was able to add two new levels that would be easier than the four that were previously in the game. These new two levels would now be level one and two and the other four would now be three, four, five and six. In total there are now 6 stages of increasing difficulty. Stage and one and two have a 5 led target area, three and four have a 3 led target area and stage five and six now have a 1 led target area.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.2.ino


25th of August:
Game Version: 0.1.3
Yet again I didn’t have systems engineering class today, yet I still worked on it in other classes throughout the day. Today’s activity included some debugging, these bugs were made when updating levels. A bug that was fixed was a problem with the scoring LED strip which wasn’t lighting up the appropriate number of LEDs at every stage. This wasn’t because there were simply 2 more levels, there was a problem in which the first LED on the strip wouldn’t light up, the second LED would the third wouldn’t and the rest would work as intended. This was rather simple. I just had to change what LED in the array of LEDs was told to light up at the start of each new game level or state. 
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.3.ino

26th of August:
Game Version: 0.1.4
Today I wanted to fix all the reoccurring bugs that came to light during a play test earlier in the day. There were two identified bugs that had been introduced in update version 0.1.2 not including the sLED (Scoring led) bug, these two bugs were, firstly the area before the target area was also considered the target area even though it wasn’t lit up as that area, this was however only on newly introduced levels 1 and 2. This problem made it so that if u straight away as the game started hit the button you would automatically win as all pre target area LEDs were considered apart of the target area. This was simply fixed by replacing “if (spot - 1 && Position < spot + 3)” with this bit of code instead “if (Position > spot - 1 && Position < spot + 3)”. The second bug was rarer and didn’t happen a lot, so it was hard to replicate apart from play testing for a considerable amount of time. The bug in summary was that when the random target LED area is selected before the level starts, it would select the 5 furthest LEDs at the furthest end of the LED strip. This bug only came to be because when implementing the new levels, I guessed that I should replace “spot = random (16) + 3;” with “spot = random (16) + 5;”. I had initially thought this because in my mind it made sense that the target LED area needed to be able to fit 5 LEDs next to each other. The bug was that it didn’t fit, and you had only four LEDs lighting up so that the furthest 5th LED was a LED that didn’t exist in the LED array, this caused the game to not start and stay static with no inputs working and the player chaser not chasing. Simply changing back to + 3 seemed to work and, thus it is sufficient.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.4.ino

31st of August:
Today I started brainstorming potential ways of creating more challenging and difficult levels for the game or at least slightly switching up how the level is played. A couple of ideas have been evaluated such as a moving target area that would slowly move whilst the chaser led also moves. This from a coding point of view could be possible, however it would take a considerable amount of time to try and implement. The next idea was for the target area to flash on and off so the user would only be able to view where they need to aim for every now and then which could possibly add to the difficulty, yet again this would be possible code wise and would definitely be easier than the previous idea. Another idea could be for a new level/state to have a sub state that acts as a preview of where the target LED area is and the user would only be in this sub-state for minimal amount of time and then once they are in the normal level game state they would not be able to see where the new target LED area is, this would be from a coding stand point possible however, it would be possible however the current way I am changing game state would need to be altered just for that level this would take some time to implement but is possible within my skill set. The final idea is to light up fake target areas so that the user doesn’t know which area is the real area, this by default is a little unfair for the user but the game shouldn’t be easy. Currently a method of making this idea a little fairer for the user is by after maybe a random amount of time in-between 3-5 seconds the fake LEDs could turn off permanently for that round or go off for a small amount of time and then back on almost like the level is glitched obviously on purpose. All these ideas are good, however at the moment I am leaning toward trying to implement the “glitched level” this could possible even be not a defined level and have a random chance to be played once per game session in between usual rounds. 



5th September:
Today I was able to get hold of an Arduino speaker that would be able to be implemented into my game. I thus started researching how to code and integrate such code into my game. Along with my research I discovered that generally there are three types of Arduino speakers, one that only plays tones, one that plays mp3 files, one that can play multiple files from a saved micro-SD card. I have identified that the speaker I am in possession of is one that simply just plays tones, no mp3 files. As a part of the specification in the design functional requirements, a tone speaker is all I need. I then found sample code online that were programmed to play famous themes such as Pirates of the Caribbean and Harry Potter. Upon testing this code, it successfully integrated and worked, I then analyzed such code and came to the conclusion that it would be a real pain to use this method that has been employed to play the theme songs.

6th of September:
Today I figured out how to play individual tones through the speaker, this would allow me to play a tone inside if statements. I am thinking about employing this as a winning or losing sound that will be a part of the winner() and loser() functions. Such sample code used to identify how to play a tone as a part of an if statement is featured below. 







8th of September:
Today a new bug was identified during a play test, this bug was similar to another a previous bug that was patched, this was the random spawn location of the target LED area being spawned one LED off the furthest side of the LED array away from the wires, however this new bug was the same but the random spawn area being one LED off the LED array on the closest side. This was simply patched upon being identified, and Code version 0.1.4 was given a reuploaded and resaved over as 0.1.4.

11th of September:
The algorithm has been conceptualized.





12th of September:
Game Version: 0.1.5
A function that changes the brightness of the LEDS has been added. This was done defining brightness as well as placing “FastLED.setBrightness(BRIGHTNESS);” in the void setup area of the code. This worked effectively and efficiently. The speaker playing tones when you win and or lose has been added as well as synced to the 3 flashes of either red for loser() or 3 flashes of green for winner(). 7th level / state has been added, it appears to be the same difficulty as the 6th level, even though I’m trying to make it faster it doesn’t really appear to be faster. I also fried my Arduino nano (cport version) and thus I have now switched to an Arduino nano (micro usb version), nothing has changed or needed to change because of the switch, except what cable is used to upload code. This addition to the current code will be apart of version 0.1.5 and can be seen below.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.5.ino






19th of September:
Game Version: 0.1.6
Today Coding progress was made on previously discussed improvements in the games code on the 31st of August. This included making there a 40% chance to replay the level if you miss the target area. I have also added a bool checker feature that will allow you to only have a 1 second chance in a play through, once you have had a second chance there will be a zero percent chance to have another. This is a substitute of the life system initially desired when the game was first conceptualized. I somewhat prefer this instead of having lives as making levels scale and become harder and harder is somewhat difficult as the chaser led can only chase so fast until it is no longer displayed as on top of the led area. Thus, there is little point for a life system because it is not hard enough to realistically need such a system. The singular second chance system currently implemented suffices and achieves the same goal. Creation of this new feature and system was mostly in practice on how to implement the chance to, upon winning a level enter a special level that would be very hard and have face target areas thus making it somewhat less possible as you cannot know which is the real one or even if you time it well. This was previously discussed on the 31st of August’s entry. This code can be found below:
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.1.6.ino

 20th of September:
Game Version: 0.2.0!
Today massive strides were made, I am excited to reveal the new special level called GHOST which players will have a 15% chance to play upon successfully hitting the area of a stage. The Ghost level can only be played once in a play through. This special stage has the same chasing speed as the final stage, stage 7. It also has extra challenges for the player, it adds 2 additional fake target areas, which as of right now are hard coded as led 5 and led 15 however this is subject to change, thus the player will have to choose 1 of the 3 to try and hit thus giving the player a 33% success rate. This special stage also has a unique intro sequence just before the level starts. This sequence plays instead of the original 3 green flashes, this may be subject to change in the future. The special sequence is a visual effect of a “blue twinkle”; however, this color may be subject to change. Upon hitting the incorrect target area and no target area you lose the stage however there is yet again a 30% chance of if not already done so giving the player a second chance if you are given a second chance upon losing on a special stage you will resume your play session on the next level, to demonstrate this with an example let’s say you win stage 3 and get the special level than lose and get a second chance you will resume at stage 4. However, if you lose on a special level, you will simply lose the play through. Another code change decided today is the normal stage second chance activation rate has been lowered from 40% to 30%.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.2.0.ino



30th of September:
Today I attempted to modify the Ghost level to be more in line with my brainstormed idea of how I wanted the level to work. I implemented a randomizer to randomize the fake target areas of the ghost level this would be override the previously non-randomized numbers / LEDs which after a player would attempt the ghost level, they would slowly start to realize without informing them that the led 15 and led 5 were always the fake ones, as this was the way it was coded. This randomizer however didn’t seem to work and would instead make LED 0 or the first LED on the strip light up as a target area. As of now I have no idea why this is happening and have for now given up trying to implement this feature. Apart from this disappointment I also decided to change the chance of entering the ghost level from 15% to 7% because 15% in my opinion after getting a few people to play the game was way too high this did not require a new game version.

5th of October:
Game Version: 0.2.1
Today I was able to successfully implement the feature previously discussed on the 30th of September. This feature was the randomizing of the fake target areas on the Ghost Level. I had realized upon going over the code that technically cause at the start of the code I set the byte fakespot1 and byte fakespot2 as 0 because you have defined the data structure somewhere and for sake of conformity, I choose to define them before they are used located at the top of the code. Thus, upon defining these structures as 0 it would then not randomize as I am certain the syntax of the randomizing statement was incorrect. Thus, I chose to randomize the value of the fake spots at the top of the code instead of defining them as 0. Upon several play tests featuring a diverse group of play testers I came to realize the annoyance that the real target area was able to be in the fake spots which were previously locked to 5 and 15, this would mean only 2 target areas would be shown instead of 3. This made the level easier technically making it a 50% chance not 33% of passing the level. So, it was evident that I would need to use while loops to continuously check if the fake target areas were equal to the real target area as well as checking if fakespot1 was equal to fakespot2 if either fake were equal to the real or each other it would run through the while loop again regenerating new randomized numbers. And after a couple of play tests the code seems to flawlessly work. As well as this a strange bug was spotted and fixed, this bug was upon missing the target area or hitting the fake target area on the Ghost level the game would freeze and not continue and change state. Upon investigation it would clear that there had been a typo or a change in naming conventions for the game states as it was coded so that if you miss the target area you would enter state 96 however there was no game state 96, it was meant to and thus it has since been changed to switching to game state 97 which is a special game state for losing on the special levels so that you go to previous game state + 1 instead of game state + 1. This is needed for the second chance feature to work on the special ghost level. Code is below:
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.2.1.ino


6th of October:
Some coding bugs were detected during play tests and were straight away fixed. This does not require a new game version.

12th of October:
Game Version: 0.2.2
For the HCCS VCE Visual Arts & Technology Exhibition and because my medium density 20 LED strip broke, I was forced to switch to a medium density 30 LED strip, and because I never really anticipated this change whilst writing the code. Everything was hard coded to accommodate only for 20 LEDs even though NUMLEDS data structure is utilized throughout the code. Therefore, a new version of the code was created, there was then a series of bugs that followed however they were quickly detected during play tests and fixed. The new code is below.
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.2.2.ino





14th of October:
Game Version: 0.2.3
To visually set me apart from other people “creating” the same sort of game as me. I decided to finally get around to coding the animated moving rainbow wave that will be shown before the game has started. With some experimenting with the code this was quickly achieved and now is highly effective and efficient. 
https://github.com/Wilki406/11SENA_LED_REACTION_GAME/blob/main/SystemsGame_v0.2.3.ino


17th of October:
Today I started modelling the box/frame for the final product. This involved researching methods of how to model what I had envisioned on paper previously. For modelling purposes, I am using a CAD software called Fusion360 this has been utilized as I have used it previously earlier in the year and in past years. It is a highly complex and intricate CAD software that is not particularly beginner friendly but is known as an industry standard software for 3D Modelling.




18th of October:
Today I did my first print of the shell, or housing unit for the screen, nano, button, and speaker. This process took a while as I had not used the 3D printers in a long time. But in the end the print was on its way and with medium quality settings it took 11 hours to print. I used the tree support method as this is the most efficient and effective way of supporting the structure during printing. As I started this print in the afternoon it will be finished tomorrow on the 19th of October. 2









19th of October:
Today the print finished, and I collected and cleaned up the print. The quality was good, and the speaker and buttonholes were sufficient and fit both components very well. However, the hole for the more specifically modelled hole for the 4 pins of the OLED screen, did not fit the screen. However, to fix this I used a soldering iron to make the hole a tiny bit larger which then allowed for the screen to fit. However, upon placing the screen inside the cut-out hole I realized that the male pins of the screen would get in the way of the middle beam that cuts the main compartment from the LED access compartment. This is okay but makes the screen sit a little diagonally. The speaker is attached via hot glue gunning the inside of the box to the speaker. The button roughly screws into the hole. And the fileted back plate clicks onto the back compartment very cleanly. The hole cut for the PC access compartment is perfect and is very neat and tidy, perfect fitting for with no wriggle room.  Today I also found a major bug in the code regarding the implementation of version 0.2.3. This was fixed and saved over the current version. 3

20th of October:
Today I started 3D modelling the other half of the physical concept which is the frame for the LEDs.









30th of October:
Today I finished modelling the frame and decided to start printing by printing two test versions of the same quarter frame. I would then use smaller piece to friction connect the quarter frames together by sliding them into the holes made at each side. I will collect these two printed parts tomorrow. 2
 


30th of October:
Today I collect the frames and after realizing what a mess printing this model upright is because of the sheer amount of tree supports utilized as well as the fact that the tree makes it very hard to clean out the secondary underneath layer for wiring. 9











31st of October:
Today I reprinted the Frames on their side. 9,1

 
3rd of November
Today I Finished the system. 9,1






 
System Realization:
See Production Diary ^



















Modifications and decision making:
Issues	Modification	Justification
LCD screen doesn’t fit in 3D printed shell hole.	Utilizing Soldering iron enlarged the hole.	This was the most efficient way to solve the issue otherwise I would have to re-model and print the whole containment shell
Pregame state is not physically appealing.
	Adding a dynamic flowing rainbow wave animation for the pregame state.	This adds a new layer of complexity to the code as well as adds to the physical appeal and attraction of the game.
Game is lacking in number of playable levels.	Added additional levels with scaling difficulty.	This is a justified modification as adding more levels to the game increases playability as well as making the game harder thus increasing the desire for people to play the game.
Game is too harsh on the player.	Added second chance feature that has a chance to allow for the player to re-try the level.	This is justified as it makes the game less harsh and makes the game somewhat easier for the player. However, it is random whether they get a second chance or not thus making it overly easy. Playability is increased.
Game is lacking excitement.	Added extra difficult special level that players have a rare chance to play upon winning a level.	This is justified as it makes the game more exciting as well as difficult thus players who have already completed the game have something to work towards completing and keep playing to beat.
Button doesn’t integrate with 3D printed containment shell	Change button from small PBNO to medium PBNO.	This allowed for it to integrate as the medium PBNO didn’t need to be contained in a breadboard and utilizing its terminals wires can be soldered on so that it can be placed anywhere.
Breadboard doesn’t align its nano access port with the containment shell hole made to fit the access port.	Add a tiny bit of folded paper on the far side of the breadboard to force it to align with the hole.	This was the most efficient way to solve the issue otherwise I would have to re-model and print the whole containment shell.
3D printed LED frame is full of tree supports in hard to access areas	Re-print the LED frame flipped on its side so that there is little to no supports in comparison.	This is the most efficient and effective way of removing the tree supports as there was already a lengthy attempt to remove all tree supports possible in the last printed frames, yet it seemed like it was going to be very hard and thus a better idea is to reprint on its side to negate 90% of the printing of supports. The alternative is messy and way more time-consuming.


LEDs were perceived as way too bright to individuals and play testers with sensitive eyes.	An adjustable (in code) brightness feature / variable was added for the brightness to be changed at will	This is justified as it made the game less playable to those individuals with sensitive eyes.
Analysis of Components:
Name	Use in Project	Specifications	Quantity	Price
Breadboard	Used to connect componentry together	MULTICOMP MCBB400, Acrylonitrile Butadiene Styrene, 8.3mm, 54.5mm x 83.5mm	1	$4.97
Element14
Jumper wires	Used to create circuits and connect componentry	Variety of colors and lengths.	1 Pack	$9.96
Amazon

Solder	Used to bond wires together and connect wires to componentry	0.7mm 60% Tin 40% Lead	1 Coil	$2.25
Amazon

Arduino Nano	Used as a micro-computer that allows for programming the system and componentry	ATMEGA328PB, Micro USB connector, pins facing down.
	1	$45.95
Jaycar
0.25W 8Ω Speaker	Used to play tones announcing if player scores or fails.	50 ~ 4 KHz Frequency response	1	$4.50
Radio Parts
0.91” OLED Display	Used to display information to player such as game state and scoring.	OLED 0.91inch 128×32 pixels I2C interface	1	$6.75
AliExpress

500mm LED Strip	Display medium used to play the game.	Medium Density, 30 LED long, RGB.	1	$24.95
Amazon
Female connector Jumper wires	Used to connect componentry with pins to other pins and or the breadboard.	Variety of colors and lengths.	1 Pack	$1.04
AliExpress
PBNO Button	Interaction medium used to play the game	12mm Spring return 2-pin momentary push button, normally open contacts with exposed terminals and screw in functionality.	1	$1.26
PCBoard
3D Filament	Used to print 3D modelled structures for game	PLA+	1 Roll	$30.92
Inkstation
Evidence of Progress:
Evidence of progress is shown in the Production Diary, through use of images supported with very detailed explanations and insight into decision making as well as the full code linked below each entry.  
See Production Diary ^
Risk Management:
Reasonable Steps were always taken in order for proper safety to be ensured. In other words, all risks were managed. This included along the course of the production plan, wearing appropriate safety equipment during soldering, 3D printing and utilizing hot glue guns. For all risks to be managed all nine identified risks and their safety precautions were taken into consideration and steps were followed. As each identified risk in the risk assessment has a corresponding number during each diary entry if there are actions needed to be taken in order to safely go about hazards there was a number highlighted in RED. 








Testing:

Recorded play test of game version: 0.1.6

Purpose
To test the functionality of newly added features which in this case was the second chance function, this is done by analyzing the effectiveness and efficiency of code that has been written and utilized on the hardware solution. The results of this assessment are to be utilized to see if the code is successfully carrying out what it is meant to.

Equipment required:
> Arduino nano
> Button
> Medium Density 20 LED strip
> Laptop with Arduino IDE Installed
> Appropriate Code
> USB 3.0 to Micro USB adaptor cable
> Breadboard with appropriate wiring
> 0.91” OLED Screen
Methodology
1. Plug in Whole Hardware Solution to laptop via adaptor cable
2. Using Arduino IDE upload the Appropriate code.
3. Press the button to start
4. Miss the target area purposefully
5. Repeat / View results 
Results:
https://hillcrestcc-my.sharepoint.com/:v:/g/personal/ben_wilkinson_hillcrest_vic_edu_au/ERqniGxvUhRHvF7MBgAI2ZEBw4yUWV2yNXeWPuoVip3V0w?e=MTigMi
The results indicate that the code successfully allows for a 40% after missing the target area to give the player a second chance on the level failed. However, after missing the area again just after getting the second chance the player was given a third chance. Please see the video above.
Testing Table:

What is tested?	Is the test successful?	If test failed, what is the resolution:	Comments:
Second chance function upon missing target area	Yes	N/A
	Second chance can be triggered multiple times
Second chance function upon missing target area	Yes	N/A
	Second chance can be triggered multiple times
Second chance function upon missing target area	Yes	N/A
	Second chance can be triggered multiple times
Second chance function upon missing target area	Yes	N/A
	Second chance can be triggered multiple times
Second chance function upon missing target area	Yes	N/A
	Second chance can be triggered multiple times

Conclusion:
The code worked effectively meeting all functionality requirements and did so in an efficient manner. However, this test raised an issue about the player being given multiple second chances thus a modification was in order regarding how many second chances a player could have in one play session this would be done via a book that is checked when the 40% chance to activate the second chance is checked. The bool will start as False and after a second chance has happened it will be changed to True, and when the 40% chance is checked it will only trigger a second chance if the book is False.










Recorded play test of game version: 0.2.3

Purpose
To test the functionality of newly added features which in this case was the new state 0 animation, this is done by analyzing the effectiveness and efficiency of code that has been written and utilized on the hardware solution. The results of this assessment are to be utilized to see if the code is successfully carrying out what it is meant to. This tests second purpose was to see if the new physical shell for holding the system would successfully allow and all components work together whilst being contained within the 3D printed shell.

Equipment required:
> Arduino nano
> Button
> Medium Density 30 LED strip
> Laptop with Arduino IDE Installed
> Appropriate Code
> USB 3.0 to Micro USB adaptor cable
> Breadboard with appropriate wiring
> 0.91” OLED Screen
> 0.25W 8Ω Speaker
> 3D printed shell

Methodology
1. Plug in Whole Hardware Solution to laptop via adaptor cable
2. Using Arduino IDE upload the Appropriate code.
3. Press the button to start
4. Play test the game
5. Repeat / View results 
Results:
https://hillcrestcc-my.sharepoint.com/:v:/g/personal/ben_wilkinson_hillcrest_vic_edu_au/ETIy14EEp1JBgP7jXILmdMIB3TP0AGcEJ6Vbu87eKS0bjw?e=QfrU7E
The results indicate that the game functions successfully within the 3D printed Shell. 
Testing Table:

What is tested?	Is the test successful?	If test failed, what is the resolution:	Comments:
Does the game work?	Yes	N/A
	Game successfully plays and the player upon losing, second chance is activated.
Does the game work?	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the game work?	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the game work?	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the game work?	Yes	N/A
	Game successfully plays and the player upon losing loses

Conclusion:
The code worked effectively meeting all functionality requirements and did so in an efficient manner. The Shell successfully allows for all components to work including screen, button, LEDs, and Speaker.


Recorded Functionality Test of Speaker
Purpose
To test the functionality of the 0.25W 8Ω Speaker, as well as figure out how to program the speaker to fulfill the functional requirements of the preferred design. 

Equipment required:
> Arduino nano
> Laptop with Arduino IDE Installed
> Appropriate Code
> USB 3.0 to Micro USB adaptor cable
> Breadboard with appropriate wiring
> 0.25W 8Ω Speaker.
Methodology
1. Plug in Hardware Solution to laptop via adaptor cable
2. Using Arduino IDE upload the Appropriate code.
3. Run the code 
4. Check how the speaker reacts to the code
5. Repeat / View results / Change code
Results:
The results indicate that after trial-and-error the code successfully plays tones on the speaker. These tests allowed for an understanding of how the speaker can be coded and how it could possibly integrate with the rest of the system.
Please see the video above.
Testing Table:

What is tested?	Is the test successful?	If test failed, what is the resolution:	Comments:
First Code	No	Wrong port in IDE
	Harry potter theme code.
First Code	Yes	N/A
	Harry potter theme code.
Second Code	Yes	N/A
	Single tone.
Third Code	Yes	N/A
	Single tone but different timing.
Fourth Code	Yes	N/A
	Single tone but different frequency.


Conclusion:
Possible methodology of integrating the speaker into the system was studied and specific variables were explored to understand how to get specific sounds that would then be placed into the system in the future.




Final System Test:

Recorded Final System Evaluation

Purpose
To evaluate the effectiveness and efficiency of the final system.

Equipment required:
> Arduino nano
> Button
> Medium Density 30 LED strip
> Laptop with Arduino IDE Installed
> Appropriate Code
> USB 3.0 to Micro USB adaptor cable
> Breadboard with appropriate wiring
> 0.91” OLED Screen
> 0.25W 8Ω Speaker
> 3D printed shell
> 3D printed frame

Methodology
1. Plug in Whole Hardware Solution to laptop via adaptor cable
2. Using Arduino IDE upload the Appropriate code.
3. Press the button to start
4. Test functionality through written down evaluation criteria
5. Repeat / View results 
Criteria Tested:
Does the Player LED chase?
Test: start game and let LED chase.

Can the Player LED Interact with scoring zone?
Test: Press scoring button when player LED is in zone.

Does the game save or show score either visually or audibly?
Test: Score points whilst playing game.
Results:
SystemsTest1.MOV
The results indicate that the game functions successfully and meets all 3 evaluation criteria and goes above in terms of features. 

Testing Table:

What is tested?	Is the test successful?	If test failed, what is the resolution:	Comments:
Does the system meet evaluation criteria.	Yes	N/A
	Game successfully plays and the player upon losing, second chance is activated.
Does the system meet evaluation criteria.	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the system meet evaluation criteria.	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the system meet evaluation criteria.	Yes	N/A
	Game successfully plays and the player upon losing loses
Does the system meet evaluation criteria.	Yes	N/A
	Game successfully plays and the player upon losing loses

Conclusion:
The System meets all 3 evaluation criteria and goes above in terms of features.








Design Evaluation:
Evaluation Criteria:
Does the Player LED chase?
Test: start game and let LED chase.
Evaluation:
By starting the game and letting the LED chase, the system successfully allows for the Player LED to chase along the strip.

Can the Player LED Interact with scoring zone?
Test: Press scoring button when player LED is in zone.
Evaluation:
By Pressing the button used to score whilst the player LED is in the target zone/area, the system successfully allows for the Player LED to interact with the scoring zone.

Does the game save or show score either visually or audibly?
Test: Score points whilst playing game.
Evaluation:
By scoring points whilst playing the game by pressing the button when the player LED is inside a target area, the system successfully displays game score by audibly sounding a rewarding tune with a speaker as well as displaying the level advancement on the screen.

Production Evaluation:
Did initial research help with the construction process?
Yes, research undertaken helped me figure out which components should be used for completion of certain functional requirements as well as which C++ libraries would be used in the code to obtain expected and desired results efficiently and effectively. Furthermore, the creation of 3 different design options helped me determine which componentry would and physical design would work well to be both functional, physically appealing and as well as theoretically possible. In depth research also meant that I could spend less time diagnosing random issues and modifying my system as I was aware of how components should work and even then, if there were any issues that arose, they wouldn’t be unfamiliar and unsolvable.
Were your ideas well thought out and did they have some reasoning?
Yes, there was always a high level of reasoning and logic behind my decisions. Testing was done both before and after ideas were brought to fruition, to ensure that the desired outcome would be achieved for example, before integrating the speaker into the system, I completed a test on how the speaker works and how it could be utilized inside a system. Although at first the actual speaker failed to meet the expected results upon further testing and correcting of code it successfully met the expectations and was ready to be implemented into the system fully. All ideas saw reasoning and many times, ways to go about decisions were weighed up utilizing others’ knowledge on how specific problems should be dealt with and thus insight was utilized whether that be my own understanding of principles, Mr Locks, Mr Rattens, or my fathers.
Is the completed system reflective of the design brief?
Yes and No. The system is fully functional and meets functional requirements and utilizes all componentry established in the preferred design brief. Coding wise the system goes above and beyond the design brief to increase playability and to increase visual appeal, additionally added coding concepts do not stray far away from the scope of the system and the overarching problem is the largest influence behind added gameplay features such as additional levels, chance events and dynamic animations. The final system fully encompasses the expected features of the design brief but the frame and shell is not connected to each other, this is the only difference and because it is a minor difference that does not effect the effectiveness or efficiency of the project this can be considered an overall minor setback. And to be honest, the unattached version of the game is not any less appealing.





Recommendations:
Now at the end of this project there are a multitude of recommendations which firstly include perhaps switching to a different microcomputer, specifically an Arduino platform that has an increased amount of onboard memory as the number of features I could add was halted by such lack of memory. Another Recommendation would be if time allowed for it to attach the frame to the base as envisioned in the preferred design brief. An Additional recommendation of adding a diffuser to the top of the frame to hide some of the hot glue and wire messiness and create a decent looking clean frame so that wiring and led strips aren’t visible but the glow is diffused, and a clean look is displayed to the user.


Acknowledgements:
Now at the end of this project there are a multitude of acknowledgements I personally would like to make, firstly with id like to thank Angel Parra for his help with coding components whenever I would get stuck, his impeccable problem-solving skills that far outweigh my depth and understanding of programming languages came in to effect across the project. I would also like to thank Michael Wilkinson for his help of shaping my understanding of some engineering principles during the project, his help along the project timeline was mostly due to his engineering expertise and ability to provide insight into solving solutions. I would also thank Stephen Ratten for his practical help in shaping the 3D printing process of the project, his undeniable skill and astonishing amount of experience allowed for a major increase in the efficiency of the printing process which was the part of the project that had the most time crunch, and his recommendation of adding a diffuser did not go unthought of.


