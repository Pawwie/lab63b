# การทดลองที่ 1 เขียนโปรแกรมเพื่อ Run บน Microcontroller

## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมการนับโดยใช้การหน่วงเวลา
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/01_Serial-Monitor/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม : https://youtu.be/NLIUsWLEpmg

## วิธีการทดลอง
- เขียนโปรแกรมการนับโดยใช้การหน่วงเวลา (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller

![image](https://user-images.githubusercontent.com/80879163/112178285-99b69580-8c34-11eb-8b69-962b953f1180.png)
รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล
- เมื่อเห็นตัวเลขขึ้น ตามเวลาหน่วงที่ได้กำหนดไว้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112182269-1a2ac580-8c38-11eb-8480-fdae067944de.png)


## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว Setup จะทำการ setup ด้วยเวลาหน่วง 115,200 ms และตัว Loob ที่ใช้สำหรับการนับ โดยจะเริ่มนับเพิ่มขึ้นเรื่อยๆ โดยมีเวลาหน่วง 1,000 ms เป็นต้น
## คำถามหลังทดลอง
- เราสามารถนำเอา Source code การนับนี้ไปใช้ทำอะไรได้บ้าง เมื่อ Parameter ที่ใช้นับไม่ใช่เวลา
  - Ex. ใช้ Parameter เป็นตัวรับแสง โดยนำแสงเลเซอร์ส่องเข้าที่ตัวรับแสง ใช้สำหรับนับวัตถุที่เคลื่อนที่ผ่านเลเซอร์นั้น ตัวรับแสงจะเริ่มนับเพิ่มขึ้นเมื่อแสงกระทบต่อตัวรับแสงอีกครั้ง
