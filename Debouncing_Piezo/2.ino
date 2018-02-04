#define c_4 261
#define d_4 293 
#define e_4 329
#define f_4 349
#define g_4 392
#define a_4 440
#define b_4 494
#define z_4 523

void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  tone(10, c_4);
  delay(1000);
  tone(10, d_4);
  delay(1000);
  tone(10, e_4);
  delay(1000);
  tone(10, f_4);
  delay(1000);
  tone(10, g_4);
  delay(1000);
  tone(10, a_4);
  delay(1000);
  tone(10, b_4);
  delay(1000);
  tone(10, z_4);
  delay(1000);
}

