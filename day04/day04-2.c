//1.9 forms
//사용자와의 커뮤니케이션을 위한 폼 태그

-form 태그
사용자가 데이터를 입력, 서버로 전송할 수 있도록
웹 페이지에서 입력폼을 만드는데 사용
ex) 회원가입, 로그인 창

1) action 속성
데이터를 보낼 목적지(URL)를 지정
2)method 속성
- get or post(데이터를 보내는 방식)
get:URL에 데이터 포함
post : 데이터 포함x

- input
form tag 중 가장 중요한 태그로 사용자로부터 데이터를 입력받기 위해 사용

- select
복수개의 리스트에서 복수개의 아이템을 선택할 때 사용

(대충 이해하기 위한 gpt의 ..설명)
<select> : 드롭다운 메뉴를 생성하는 태그
<select>는 전체 드롭다운의 컨테이너 역할
name 속성을 통해 폼 데이터를 서버로 전송할 때 사용
(2) < option > : 선택 가능한 항목을 생성하는 태그
드롭다운 메뉴의 각 항목을 정의합니다.
value 속성은 서버로 전송되는 데이터 값을 설정합니다.
사용자가 선택한 항목의 value 값이 서버로 전송됩니다.
(3) < optgroup > : 옵션을 그룹화하는 태그
옵션이 많을 때 비슷한 항목끼리 묶어서 그룹화하는 데 사용됩니다.
<optgroup> 태그에 * *라벨(label) * *을 붙여 그룹의 제목을 보여줄 수 있습니다.

<form action = "submit.php" method = "post">
<label for = "fruit">과일을 선택하세요 : < / label>
<select name = "fruit" id = "fruit">
<option value = "apple">사과< / option>
<option value = "banana">바나나< / option>
<option value = "cherry">체리< / option>
< / select>
<button type = "submit">제출< / button>
< / form>

여기서 사과룰 택하여 제출했을 때 데이터의
name = "fruit" = key
value = "apple" = value

- textarea
여러 줄의 글자를 입력할 때 사용
rows, cols 이용

- button
클릭할 수 있는 버튼 생성 
