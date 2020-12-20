int ilkDeger, deger;
char solDikey, solYatay, sagDikey=A0, sagYatay;

// referans degerine gore kalibre edecek.
int stickOku(int referansDegeri, char pin){ 
  int i = analogRead(pin);
  i -= referansDegeri;
  if(!(referansDegeri>350)){
    if(i<0)i=0;
  }
  return i;
}

// kalibrasyon yok. analogread isi yapıyor.
int stickOku(char pin){
  int i = analogRead(pin);
  return i;
}

int 






void setup() {
  Serial.begin(9600);
  ilkDeger = stickOku(sagDikey);
}







void loop() {
  deger = stickOku(ilkDeger, sagDikey);
  
  Serial.print("deger: ");
  Serial.println(deger);
}