start: MOV A, P2
MOV 30H, A 
ANL 30H, #07H 	
ANL A, #70H
SWAP A 
add a,30h

cjne a,#0h,case1
mov p1,#0c0h

case1:
cjne a,#1h,case2
 mov p1,#0f9h

case2:
cjne a,#2h,case3
 mov p1,#0a4h

case3:
cjne a,#3h,case4
 mov p1,#0b0h

case4:
cjne a,#4h,case5
 mov p1,#99h

case5:
cjne a,#5h,case6
 mov p1,#92h

case6:
cjne a,#6h,case7
 mov p1,#82h

case7:
cjne a,#7h,case8
 mov p1,#8fh

case8:
cjne a,#8h,case9
 mov p1,#80h

case9:
cjne a,#9h,ra
 mov p1,#90h

ra:
jmp start
