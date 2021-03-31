# การทดลองที่ 7 การนำความรู้จากแลป มาประยุกต์การออกแบบโปรแกรมบน Microcontroller

## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมจากแลปก่อน ๆ มาประยุกต์ใช้ในแลปนี้
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- หลอดไฟ LED 3 หลอด (สีแดง สีเขียว สีส้ม)
- สายไฟเชื่อมต่อระหว่างตัว Output ของตัว Microcontroller กับหลอดไฟ
- LDR (ตัวรับแสง)
- เลเซอร์ (ตัวจ่ายแสง)

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับตัว LDR : https://sites.google.com/site/elecso25/menu/8
- เกี่ยวกับ Input/Output : skjproject.wordpress.com/อุปกรณ์อินพุตinput-เอ้าท์พุ
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/Pawwie/lab63b/blob/main/code-lab7.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม : https://youtu.be/NLIUsWLEpmg

## วิธีการทดลอง
- เขียนโปรแกรมการนับโดยใช้ตัว input เป็นตัวนับ output เป็นการแสดงผล(ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller

![image](https://user-images.githubusercontent.com/80879163/113141126-e2d19f80-925b-11eb-9799-76abc7b40beb.png)

รูปภาพนี้เป็นส่วนหนึ่งที่ของ Code สำหรับการเขียนโปรแกรม


## การบันทึกผล
- หากลองนำวัตถุเลื่อนเข้าไปผ่านตัวเซนเซอร์แสง (บังแสงเลเซอร์ที่ส่องเข้าที่ตัวรับแสง) และเคลื่อนออกมาแล้วนับได้เป็น 1 / ชิ้น และนับเพิ่มเรื่อยๆตามวัตถุที่ผ่าน หากวัตถุยังไม่ถึงจำนวนที่กำหนดจะแสดงไฟสีเขียว
  และเมื่อครบถึงตามจำนวนที่กำหนดจะแสดงไฟสีแดงที่สื่อว่านับวัตถุครบแล้วเครื่องจะหยุดทำงาน เพื่อเตรียมพร้อมที่จะเริ่มนับใหม่อีกรอบโดยในขณะที่จะเริ่มใหม่อีกรอบ(รีเซ็ต) จะแสดงไฟสีส้มหน่วงเวลาไว้ตามที่กำหนด
  เมื่อแสดงผลได้ตามดังกล่าว ถือว่าโปรแกรมทำงานได้ปกติ


## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว Setup จะทำการ setup ด้วยเวลาหน่วง 115,200 ms และตัว Loob ที่ใช้สำหรับการนับ โดยจะเริ่มนับเพิ่มขึ้นเรื่อยๆ โดยมีเวลาหน่วง 1,000 ms เป็นต้น
## คำถามหลังทดลอง
- เราสามารถนำเอา Source code ไปใช้ทำอะไรได้บ้าง หรือเพิ่มเติมอะไรได้บ้าง
  - Ex. 