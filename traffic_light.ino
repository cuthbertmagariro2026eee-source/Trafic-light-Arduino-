int redLight = 2;    
int yellowLight = 3; 
int greenLight = 4;  

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  digitalWrite(greenLight, HIGH); 
  digitalWrite(yellowLight, LOW); 
  digitalWrite(redLight, LOW);    
  delay(5000);                    

  digitalWrite(greenLight, LOW);  
  digitalWrite(yellowLight, HIGH); 
  digitalWrite(redLight, LOW);     
  delay(2000);                    

  digitalWrite(greenLight, LOW);  
  digitalWrite(yellowLight, LOW);  
  digitalWrite(redLight, HIGH);    
  delay(5000);                    
}
