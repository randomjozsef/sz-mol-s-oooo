int szam1 = 50;
 
int szam2 = 60;
  
void setup()
{
 Serial.begin(9600);
  Serial.println(szam1);
  
  Serial.println(szam2);
  
  Serial.print(szam1 + szam2);
}
void loop() {
}
