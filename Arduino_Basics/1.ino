int sec=0;
int minute=0;                              //sec와 minute를 0으로 초기값 설정

void setup() { 
  Serial.begin(9600);                     //통신속도를 설정한다
}

void loop() {                              //무한루프를 돌린다    
   
   if(sec == 60){                          //sec가 60이 될 때 
      sec = 0;                             //sec를 0으로 초기화시킨다
      minute++;                            //또한 minute를 1 증가한다
   }   
   
   if(sec%10 == 0 && minute == 0){         //sec가 10으로 나누었을 때 나머지가 0이고 minute가 0일때
      Serial.print(sec);                  //시리얼 모니터에 sec를 출력해라 -> 즉 10초 단위로 출력된다
      Serial.println("sec");              //예시와 동일하게 출력된 숫자 뒤에 'sec'를 붙힌다
   }
        
   else if(sec%10 == 0 && minute != 0 ){   //sec가 10으로 나누었을 때 나머지가 0이고 minute가 0이 아닐 때
      Serial.print(minute);               //시리얼 모니터에 minute를 출력해라 (맨 위 if문 조건에 의해 값이 결정된다)
      Serial.print("min ");               //예시와 동일하게 출력된 숫자 뒤에 'min'을 붙힌다
      Serial.print(sec);                  //또한 시리얼 모니터에 sec를 출력해라 -> 물론 위와 동일하게 10초 단위로 출력된다
      Serial.println("sec");              //예시와 동일하게 출력된 숫자 뒤에 'sec'을 붙힌다
   }  
         
   sec++;                                  
   delay(1000);                            //sec를 1초에 한번 씩 1 증가한다
    
}



