# Experiment – BEEE Evaluation


## Aim:
Design an automatic night lighting system such the system is only activated when the master control switch is pressed. a) Below 300 lux led glows with full brightness. b) Above 300 lux led glows with 50% brightness.

## Apparatus:
Arduino Board, LED, Resistance - 220ohm, Breadboard, Wires, Switch, LDR(Photodiode).

## Circuit Diagram:
![Evaluation](https://user-images.githubusercontent.com/55151728/67214273-14c2bd80-f43d-11e9-84a5-b4e1c50589b2.JPG)

## Theory:
**Concepts Used -**\
LEDs:
An LED is a small light (it stands for "light emitting diode") that works with relatively little power. The Arduino board has one built-in on digital pin 13.
An external LED can also be used by specifying the pin number it is using on the Arduino.
In electronics, polarity indicates whether a circuit component is symmetric or not. LEDs, being diodes, will only allow current to flow in one direction. And when there’s no current-flow, there’s no light.
The positive side of the LED is called the “anode” and is marked by having a longer “lead,” or leg. The other, negative side of the LED is called the “cathode.” Current flows from the anode to the cathode and never the opposite direction. A reversed LED can keep an entire circuit from operating properly by blocking current flow. So don’t freak out if adding an LED breaks your circuit. Try flipping it around.\
**Learning and Observations -**
1. We can recognize the positive and negative terminals of an LED even without using a Multimeter. The longer leg of the LED is the positive terminal (or the anode) and the smaller leg is the negative terminal (or the cathode).
2. Another way of finding the positive and negative terminals of an LED is to see the parts inside the LED. The larger part is the negative side (i.e. the cathode) and the smaller part is the positive side (i.e. the anode).

## Problems and Troubleshooting:
1. The first problem that we faced was due to the cable of the Arduino which was not working properly. This problem was solved by using another cable.
2. The proper port of the Arduino was not selected. After it was selected the Arduino worked perfectly.
3. The code had some errors like proper pin was not mentioned, etc. But after modifying the code, everything worked perfectly fine.

## Precautions:
1. The Arduino and its cable should be working properly.
2. Proper port of the Arduino should be selected.
3. The connections should be made neat and clean.
4. Desired resistance should be used.

## Arduino Code:
```
//Evaluation


const int lamp = 5;
const int button = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop()
{
 if(digitalRead(button)==LOW)
 { delay(100);
int c = analogRead(A1);
  delay(100);
  			if(c<300)
  				{
    			digitalWrite(lamp,HIGH);
    			delay(1000);
  				}
 			 else
  				{
    			analogWrite(lamp,64);
    			delay(1000);
  				}
 }
  else
  {
    digitalWrite(lamp,LOW);
  }
}
//Made by - Ankur Das
//UID - 19BCS3523
```

## Result:
LED pattern as per question was verified after uploading the program.
