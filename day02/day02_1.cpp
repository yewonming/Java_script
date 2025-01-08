1.4 웹 페이지의 구성하는 기본 태그

문서형식정의 태그
출력할 웹 페이지의 양식을 브라우저에게 전달한다.
문서의 최상위에 위치해야하며 대소문자를 구별하지 않는다.

- html tag
모든 html 요소의 부모 요소이며 웹페이지에 단 하나만 존재
<!DOCTYPE>은 예외이다.

- head tag
메타데이터를 포함하기 위한 요소이며 단 하나만 존재

- title tag
문서의 제목 정의

- style tag
style 정보를 저장 ex) 배경색이나 스타일 지정

- link tag
외부리소스와의 연계 정보를 정의
주로 HTML과 외부 CSS파일을 연계에 사용

- script tag
java script 코드를 삽입하거나 외부 java script 파일을 불러올 떄 사용된다

ex)코드 삽입 예시
<script>
alert('페이지에 오신 것을 환영합니다!');
<script>

ex)외부 파일 가져오기
<script src = "script.js">script >
script.js 파일에 있는 JavaScript 코드가 실행됨
기본적으로 <head>나  <body>안에 삽입할 수 있다

* src속성이란 ? "source" * *를 의미하며, 외부 JavaScript 파일의 경로를 지정하는 데 사용

- meta tag
meta 요소는 기타 메타데이터 정의에 사용됨
메타데이터는 브라우저, 검색엔진 등에 의해 사용됨
