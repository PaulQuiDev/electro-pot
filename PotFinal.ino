const int signalPin = 5;    // Pin de sortie pour le signal carré
const int measurePin = 4;   // Pin d'entrée pour mesurer l'amplitude
const int LedR = 2; // pin led rouge
const int LedV = 1; // pin led verte

void setup() {
  pinMode(signalPin, OUTPUT);
  pinMode(measurePin, INPUT);
  pinMode(LedR, OUTPUT);
  pinMode(LedV, OUTPUT);
  Serial.begin(115200);  // Initialisation de la communication série
}

void loop() 
{
    digitalWrite(LedR,LOW);// signaler scan lancer
    
    digitalWrite(signalPin, HIGH);
    int humiditer = analogRead(measurePin);
    
    for (int i = 0 ; i < 10 ; i++)    
    {
      humiditer = int((humiditer + analogRead(measurePin))/2); // moyen empirique sur 10 valeur
      delayMicroseconds(50);
    }
    digitalWrite(signalPin, LOW);
    
    Serial.print("humiditer = ");
    Serial.println(humiditer);

    // comunication vers homme
    if (humiditer > 1100)
    {
      digitalWrite(LedR,HIGH);
      delay(1000);
      digitalWrite(LedR,LOW);
    }
    else 
    {
      if (humiditer < 400)
      {
        for (int i = 0 ; i < 15 ; i++)
        {
          digitalWrite(LedR,HIGH);
          delay(50);
          digitalWrite(LedR,LOW);
          delay(50);
        }
          
      }
      else
      { 
        digitalWrite(LedV,LOW);
        digitalWrite(LedV,HIGH);
        delay(1000);
        digitalWrite(LedV,LOW);
      }
    }
  
  //Serial.println(amplitude);
  delay(100);  // Pause d'une seconde entre chaque série de mesures
}
