# HIRO Movement Library
This is the movement library for H.I.R.O. Model TR-01-A. an open source raspberry pi pico based robotics platform developed by Takamori Robot.

# Table of Contents

1. About H.I.R.O. Model TR-01-A
2. Initial Setup: Integrating Raspberry Pi Pico to Arduino IDE
3. Initial Setup: Installing the HIRO library on Arduino IDE 
4. Running Example Programs on H.I.R.O.
5. Useful Functions


# About H.I.R.O. Model TR-01-A
<img src=img/About_HIRO/Title_Graphic_One.png>
<img src=img/About_HIRO/About_HIRO.png>
<img src=img/About_HIRO/Wire_Yourself.png/>
<img src=img/About_HIRO/Customize_Yourself.png />
<img src=img/About_HIRO/Repair_Yourself.png />
<img src=img/About_HIRO/Program_Yourself.png  />

# Initial Setup: Integrating Raspberry Pi Pico with Arduino IDE
HIRO, is a built on Raspberry Pi Pico. Arduino IDE does not natively support Raspberry Pi Pico, so in this section we will be installing a Raspberry Pi Pico board manager into Arduino IDE. <br> <br>For this section you need <B>Arduino IDE 2.0</B> or later installed onto
your device. You can download Arduino IDE at  <a>https://www.arduino.cc/en/software/</a>


<img src=img/Raspberry_Pi_Pico_Integration/Title_Graphic_Two.png>
<h3>Step 1: Open Arduino IDE.</h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step1.png width= 100%>
<h3>Step 2: In Arduino IDE click File -> Preferences. <h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step2.png width=100%/>
<h3>Step 3: In the preferences menu, in the dialog box labeled <I>Additional boards manager URLs </I>, paste the following URL and then click okay.</h3>

```
https://github.com/earlephilhower/arduinopico/releases/download/global/package_rp2040_index.json
```

<img src=img/Raspberry_Pi_Pico_Integration/Step3.png width = 100%/>
<h3>Step 4: Click the <b>board icon</b> on the left hand side of the screen to access the board manager.</h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step4.png width = 100%/>

<h3>Step 5: In the board manager's search box, search for raspberry pi pico.</h3>

<img src=img/Raspberry_Pi_Pico_Integration/step5.png width = 100%/>

<h3>Step 6: Install the package called <B> Raspberry Pi Pico/RP2040/RP2350.</B></h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step6.png width = 100%/>

<h3>Arduino IDE is now compatible with Raspberry Pi Pico!</h3>

# Initial Setup: Installing the HIRO Library on Arduino IDE

Of course you can install this library the hard way by cloning this repo into the libraries folder of your Arduino IDE, but Arduino gives us an easier way.



<h3>Step 1: Open Arduino IDE.</h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step1.png width= 100%>

<h3>Step 2: Click the books icon on the left hand side of the screen to open the library manager.</h3>

<img src=img/HIRO_Library_Installation/Step2.png width=100%>

<h3>Step 3: In the search box, search HIRO, and install the option that says HIRO by Joseph Casebeer, Takamori Robot</h3>
<img src=img/HIRO_Library_Installation/Step3.png width=100%>
<br><br>

# Running Example Programs on H.I.R.O.
<img src=img/Running_Examples/Title_Graphic_Four.png width=100%>
<h3>Step 1: Open Arduino IDE.</h3>
<img src=img/Raspberry_Pi_Pico_Integration/Step1.png width= 100%>
<h3>Step 2: Hover over File->Examples->HIRO (You might have to scroll to bottom) to see all HIRO library examples</h3>
<img src=img/Running_Examples/Step2.png width=100%>

You should see three examples.
1. Demo_Dance - H.I.R.O. dances in place.
2. Serial_Control - You can control H.I.R.O. using Arduino IDE's built in Serial Monitor
3. Center Servos - A tool for centering misaligned servos.

<h3>Step 3: Pick any example to run. (I will select demo dance for this example)</h3>
<img src=img/Running_Examples/Step3.png width=100%>
<h3>Step 4: Plug your H.I.R.O. into you computer using a micro USB cable</h3>

<br>

<h3>Step 5: You need to tell Arduino IDE that you're programming a Raspberry Pi Pico. Navigate to Board -> Raspberry Pi Pico/RP2040/RP2350->Raspberry Pi Pico W. (Change if you're using a different model of Raspberry Pi Pico) </h3>

<img src=img/Running_Examples/Step5.png width=100%>


<h3>Step 6: Now navigate to tools -> port and select your port. <B>Important:</B> The first time you upload a program the port is called UF2 port. The subsequent times you upload a program the port will become COMX (Degz Robotics Suibo RP2040, EVN Alpha Generic RP2040….)</h3>

<img src=img/Running_Examples/Step6.png width=100%>

<h3>Step 7: Hit the upload button.(The arrow button in the top left corner</h3>
<img src=img/Running_Examples/Step7.png width=100%>

# Useful Functions

<h3>Below are useful motion choreography in the HIRO libraries to make HIRO move.</h3>

void easyForward(HIRO hiro, int steps, int speed); <br>
Description: Your hiro runs a pre-choreographed forward walk sequence for the input number of steps at the input speed. 

void easyBackward(HIRO hiro, int steps, int speed); <br>
Description: Your hiro runs a pre-choreographed backward walk sequence for the input number of steps at the input speed.

void easyClockwise(HIRO hiro, int steps, int speed);<br>
Description: Your hiro runs a pre-choreographed clockwise turn sequence for the input number of steps at the input speed.

void wave(Hiro hiro);<br>
Description: Your hiro puts its right arm back and waves.

void sideToSideWorm(HIRO hiro, int speed);<br>
Description: Moves your hiro side to side in a worm like dance at the input speed.

void sideToSideStretch(HIRO hiro, int speed); <br>
Description: Moves hiro in a side to side stretch at the input speed.

void cabbagePatch(HIRO hiro, int speed, int repetitions);<br>
Description: Moves hiro in a pre-choreographed cabbage patch like dance for an input number of repetitions at the input speed..
