int led[4] = {4,5,6,7}; 

void setup() { 
  Serial.begin(9600); 
  for(int k=0; k<4; k++){ 
    pinMode(led[k],OUTPUT);
  }
}

void loop() { 
  
  if(Serial.available()){ 
    char select = Serial.read();      
  
  switch(select){
    case '1':  
    digitalWrite(led[0], HIGH);
    delay(1000);
    digitalWrite(led[0], LOW);
    break;
    case '2': 
    digitalWrite(led[1], HIGH);
    delay(2000);
    digitalWrite(led[1], LOW);
    break;
    case '3': 
    digitalWrite(led[2], HIGH);
    delay(3000);
    digitalWrite(led[2], LOW);
    break;
    case '4':
    digitalWrite(led[3], HIGH);
    delay(4000);
    digitalWrite(led[3], LOW);
    break;
  }
 }
}

