int brightness = 0;
bool isGettingBrighter = true;

void setup(){
  //put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop(){
  //put your main code here, to run repeatedly:
  analogWrite(13, brightness);
  if(isGettingBrightner){
    brightness++;
  }
  else{
    brightness--;
  }
}

