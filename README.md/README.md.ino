/**********************************************************************************
**                                                                               **
**                                    0 al 7                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************

//********** Variables ************************************************************1

const int led5 = 5;          // donar nom al pin 5 de l’Arduino
const int led6 = 6;          // donar nom al pin 6 de l’Arduino
const int led7 = 7;          // donar nom al pin 7 de l’Arduino
const int buttonPin = 4;     // donar nom al pin 4 de l’Arduino
int contador=0;

//*********************************** SETUP*************************************
void setup()              // run once, when the sketch starts
{
  pinMode(led5, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 4 com una entrada  
  Serial.begin(9600);
}

//************************************ LOOP*******************************************
void loop()  // we need this to be here even though its empty
{
 if(digitalRead(buttonPin) == 0)
 {
   contador = contador + 1;
   if( contador == 8)
   {
    contador =0;
    }
   delay(500);
 }
            if ( contador == 0 ){
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led7, LOW);
            Serial.print("0");
         
           }
            if ( contador == 1 ){
            digitalWrite(led5, HIGH);
            digitalWrite(led6, LOW);
            digitalWrite(led7, LOW);
            Serial.print("1");
         
            }
            if ( contador == 2 ){
            digitalWrite(led5, LOW);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, LOW);
            Serial.print("2");
           
           
          }
            if ( contador == 3 ){
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, LOW);
            Serial.print("3");
           
            }
            if ( contador == 4 ){
         
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led7, HIGH);
            Serial.print("4");
           
            }
           if ( contador == 5 ){
            digitalWrite(led5, HIGH);
            digitalWrite(led6, LOW);
            digitalWrite(led7, HIGH);
            Serial.print("5");
           
            }
          if ( contador == 6 ){
            digitalWrite(led5, LOW);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, HIGH);
            Serial.print("6");
           
           
     }
     if ( contador == 7 ){
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, HIGH);
            Serial.print("7");
           
             }
           
 }
