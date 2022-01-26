## Arduino IED set_up

H/W 진입을 위한 Arduino 기초를 연습한다.

아두이노(기타 보드)를 연결 케이블로 연결 했다면, PC의 제어판으로 들어가 장치 관리자를 확인한다.

포트(COM & LPT)를 봤을 때 자신이 연결한 보드(board) 의 이름과 연결되있는  ```포트의 번호```를 잘 기억해 둔다!   

```현재 COM5번``` 에 연결되 있는것을 확인 할 수 있다

![캡처](https://user-images.githubusercontent.com/84003327/150759717-b6e7e8e8-21bc-4aac-8f5f-217f2e665d8d.PNG)


## Arduino IED 실행 및 포트 set_up

![asd](https://user-images.githubusercontent.com/84003327/150757455-ac86e5e8-4036-4b86-a368-5a2586323389.PNG)

아두이노를 실행 했다면 가장 먼저 해야 할것이 포트연결 셋팅이다, 위 그림과 같이 1번과 같이 ```자신이 현재 사용중이 보드를``` 선택 해주고, 2번에는 ```장치관리자에서 봤던 COM 포트 번호```를 3번에서 선택 해주면 연결이 된것이다, 간혹 뜨지 않을 떄는 USB 포트를 빼고 다시 연결하면 인식되는 것을 확인 할 수 있다.

## Arduino IED 코드 작성 및 compiler 하기 

아두이노가 사용하는 C 언어를 사용해서 소스코드를 만들었다면 빌드(Build)  단축키 ```Ctrl + R```를 사용해서 오류가 있는지 확인해주고 ```Ctrl + U```를 사용해서 업로드(Upload) 할 수 있다

![z](https://user-images.githubusercontent.com/84003327/150759082-7b5d7979-673d-444f-92e8-77a8b9386c93.PNG)


## Arduino UNO 보드를 사용한 각종 센서 실습 및 전장도 그려보기 

실제로 만들어 봤다면 만들어진 핀맵을 바탕으로 프리징을 사용해서 디지털 전장도를 도식해보는 것도 추천한다.

![rlt](https://user-images.githubusercontent.com/84003327/150739607-206e26ed-7c94-484e-9e4f-09e8a9854ec3.PNG)
