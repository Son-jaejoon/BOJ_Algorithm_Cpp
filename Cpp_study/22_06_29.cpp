/* 하나의 구조체에서만 사용하는 매크로 상수는 열거형으로 대체
 #define ID_LEN   20 -> 
 enum
 {
    ID_LEN = 20
 };
*/

/* 매크로 상수 말고 이름공간(namespace)안에 만들어도 됨
 namespace CAR_CONST
   {
        enum
        {
            ID_LEN = 20
        ;}
   }

   struct Car
   {
        char gamerID[CAR_CONST::ID_LEN];
   }
*/

//구조체와 클래스의 차이는 접근지시제어자를 표시하지 않았을 시 구조체는 public, 클래스는 private로 선언된다.