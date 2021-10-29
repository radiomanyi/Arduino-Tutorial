int i;  
int timer = 1000;  
void setup() {  
  for (int i= 2;i<=5;i++) {  
   pinMode(i, OUTPUT);  
   }  
 }  
void loop() {  
for (int i=2; i <= 5; i++) {  
     digitalWrite(i, HIGH);  
     delay(timer);  
     digitalWrite(i, LOW);  
   }  
}
