int pinoIn = 0;
int luz = 0, luzAnterior = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(pinoIn,INPUT);
  digitalWrite(10, LOW);
}

void loop() {
  if(Serial.available()){
    char c = Serial.read();
    //Serial.println(c);
    if(c == 'L'){
      digitalWrite(10, HIGH);
    }
    else{
      digitalWrite(10, LOW);
    }
  }

  luz = analogRead(pinoIn); 
  if(luzAnterior != luz){
    luzAnterior = luz;
   // Serial.println("Luz:" + luz);
    Serial.println(luz);
    delay(1000);
  }
  
}
