int led1 = 13; // Red LED indicating Plant needs water
int led2 = 2;  // Green LED indicating Plant is feeded
int moisture = 0; // store the moisture value of soil to keep track

//Function Declations
int ReadingFromA0(int analogPin);
void LEDBlink(int pin);
void FeedMe(int moisture);

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  moisture = ReadingFromA0(A0);
  FeedMe(moisture);
  Serial.println(moisture);
}

int ReadingFromA0(int analogPin)  // This functions reads the input from from Analog Pin and returns reading
{
   int readingA0 = 0; 
   readingA0 = analogRead(analogPin);
   return readingA0;
}

void LEDBlink(int pin)
{
   digitalWrite(pin, HIGH);
   delay(500);

   digitalWrite(pin, LOW);
   delay(500);
}

void FeedMe(int moisture)
{
   if(moisture < 800)
   {
      LEDBlink(led1);
      Serial.println("Feed Me, PLEASE!!");
   }
   else
   {
       LEDBlink(led2);
      Serial.println("AM NOT HUNGRY YET!! :-)");
   }
}
