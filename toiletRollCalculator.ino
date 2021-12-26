int num=30;
int sizeofpaper=5;
int answer=0;
int pin13=13;

void setup()
{
  answer=num/sizeofpaper;
  pinMode(pin13,OUTPUT);

}

void loop()
{
    switch(answer)
  {
    case 0:
    digitalWrite(pin13,LOW);
    break;
  }
  switch(answer)
  {
    case 6:
    digitalWrite(pin13,HIGH);
    delay (200);
    digitalWrite(pin13,LOW);
    delay(200);
    break;
  }
}
