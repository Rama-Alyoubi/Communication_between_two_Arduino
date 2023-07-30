char mystr[10]; 
char t0='1',t;
byte LED = 8;
bool s=0;

void setup() {
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available())
   {
      char t = Serial.read();
      if (t0=='1'&&t=='0') 
      { 
        s=!s;
        digitalWrite(LED, s);        
      }
      t0=t;
	}
  
}