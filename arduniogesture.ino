

void setup()
{
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
// wait for serial port to connect. Needed for Leonardo only
  }
void loop()
{
  if (Serial.available() > 0)
  {
   
       char value= Serial.read();
   
   
   Serial.println(value);
  
       
    if(value=='1'){
      
       digitalWrite(13,HIGH);
      
       Serial.println("led is on");
    }  
      
     if(value=='0')
    {
    
    digitalWrite(13,LOW);

    }
  }
}
   // read first analog input:
