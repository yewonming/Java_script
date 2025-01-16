2.1 css 기본 문법
css는HTML이나 XML과 같은 구조화된 문서를 화면, 종이 등에 어떻게 
렌더링 할 것인지 정의하기 위한 언어이다. 
css는 HTML의 각 요소의 style을 정의하여 화면에 어떻게 렌더링하면 
되는지 설명하는 언어이다.

1. 셀렉터 
스타일을 적용하고자 하는 HTML 요소를 선택할 수 있어야함
h1{ color:red;font-size:12px}
h1= 셀렉터
위와 같은 구문을 Rule Set(또는 Rule)이라 하며 
셀렉터에 의해 선택된 특정 HTML 요소를 어떻게 렌더링(Rendering)할 것인지 브라우저에 지시하는 역할

2. 프로퍼티 (속성)
color, font-size

3. 값 
red, 12px

4. css, HTML의 연동 방식

4.1 link style 
HTML에서 외부에 있는 CSS 파일을 로드하는 방식(가장 일반적)

4.2 embedding style
HTML내부에 css를 포함시키는 방식 
style 태그에 작성 

4.3 inline style 
HTML 요소의 style 프로퍼티에 css를 기술하는 방식 

5. reset css 사용하기 
모든 웹 브라우저는 디폴트 스타일을 내장하고 있어 
css가 없어도 작동하기는 함
