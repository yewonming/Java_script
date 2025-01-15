#1. html

1)기본 정보
<!DOCTYPE html>로 시작해서 문서 형식을 HTML5로 지정함
가장 바깥을 둘러쌓고 있는 부분 <html> < / html>
두번째 - <head>  document title, 외부 파일 참조, 메타데이터의 설정 < / head>

위 정보들은 브라우저에 표시 되지 않음
> 출력 요소들은 <body> < / body> 사이에 위치

HTML document 는.html 확장자를 갖는 텍스트 파일, 보통 editor 나  IDE를 사용
IDE = visual studio code, webstorm, atom 등

2)기본 문법
HTML요소는 시작태그, 종료태그, 태그 사이에 위치한 content 로 구성
소문자를 사용하는 것 권장

요소들은 중첩(부자) 관계로 웹페이지의 구조를 표현 ex) body요소에 h1 이나 p 요소 포함

빈요소는 content 가 없으며 attribute 만을 가질 수 있음
= br, hr, input, link, meta

attribute란 요소의 성질, 특징을 정의하는 명세(이미지 파일의 경로, 크기 등 제공)

주석(comments) - 코드 설명을 위해 사용되며 화면에 표시x

2. 시맨틱 웹
검색 엔진은 robot 이라는 프로그램을 이용해 전세계 웹사이트를 수집(= 크롤링)
이용자가 검색할만한키워드를 미리 예산하여 검색 키워드에 대응하는 인덱스를 만들어둠(= 인덱싱)
이때 로봇이 수집한 정보가 모두 HTML 코드이고, 그것만으로 시맨틱요소 를 해석하게됨

