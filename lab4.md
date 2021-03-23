# การทดลองที่ 4 เรื่อง การเขียนโปรแกรม Input สัญญาณดิจิทัล
## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมสัญญาณ Input และรู้จักตัว Input

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- หลอดไฟ
- LDR
- สายไฟเชื่อมต่อระหว่างตัว Output ของตัว Microcontroller กับหลอดไฟ

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Input/Output : skjproject.wordpress.com/อุปกรณ์อินพุตinput-เอ้าท์พุ
- เกี่ยวกับตัว LDR : https://sites.google.com/site/elecso25/menu/8
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/04_Input-Port/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม (ตอนที่ 1) : https://www.youtube.com/watch?v=CCnN1WJsXQY
- Video อธิบายวิธีการต่อและเขียนโปรแกรม (ตอนที่ 2) : https://www.youtube.com/watch?v=6JnhaUILGuw

## วิธีการทดลอง (ช่วงที่ 1)
- เขียนโปรแกรม Output/Input ที่ทำให้ไฟสว่าง (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller


![image](https://user-images.githubusercontent.com/80879163/112196065-9aa3f300-8c45-11eb-826b-96b92e284c83.png)


รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล (ช่วงที่ 1)
- เมื่อหลอดไฟสว่างภายใต้เวลาที่ได้กำหนดในโปรแกรมไว้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112199164-d68c8780-8c48-11eb-8047-78f27116d484.png)



## วิธีการทดลอง (ช่วงที่ 2)
- นำ Microcontroller ที่เขียน Code ไว้มาต่อกับตัว LDR (วิธีการต่อตามตัวอย่างใน Video)


![image](https://user-images.githubusercontent.com/80879163/112199296-f91ea080-8c48-11eb-9ad2-c568402bd5cf.png)



รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล (ช่วงที่ 2)
- เมื่อหลอดไฟใน relay สว่างภายใต้เวลาที่ได้กำหนดในโปรแกรมไว้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112197484-1b172380-8c47-11eb-8388-ac39019e9885.png)





## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว Setup จะทำการ setup เพื่อให้ port output และ prot input พร้อมที่จะเริ่มทำงาน และตัว Loop โดย loop จะอ่านค่าที่ส่งเข้ามาที่ port input โดยค่าที่ส่งเข้ามาเป็น 1
    ตัว input จะส่งค่าออกเป็น low ไปยัง port output ทำให้หลอดไฟดับ แต่ถ้าค่าที่ส่งเข้ามาเป็น 0 ตัว input จะส่งค่าออกเป็น high ไปยัง port output ทำให้หลอดไฟสว่าง เป็นต้น
- อธิบายการทำงานหลังจากต่อตัว LDR
  - Ex. หลังจากต่อ LDR ตามตัวอย่างจะเห็นว่า LDR ชนิดนี้เป็นแบบ Negative (เมื่อรับแสงมากแล้วค่าความต้านทานลดลง) เมื่อค่าความต้านทานน้อยลง ค่าที่อ่านได้จาก port input จะอ่านได้เป็น 0 (สายดำ) ทำให้หลอดไฟสว่าง แต่เมื่อ
  เมื่อค่าความต้านทานเพิ่มขึ้น ค่าที่อ่านได้จาก port input จะอ่านได้เป็น 1 (สายแดง) จะทำให้หลอดไฟดับ

## คำถามหลังทดลอง
- สามารถนำเอาสัญญาณ Input ไปใช้ทำอะไรได้บ้าง
  - สร้าง Remote control , Keyboard , Joy Stick ที่ใช้สำหรับเล่นเกม เป็นต้น
