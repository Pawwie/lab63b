# การทดลองที่ 5 เรื่อง การเขียนโปรแกรมเชื่อมต่อ Wifi และ Web-Server

## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมการเชื่อมต่อ Wifi
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller
- เพื่อให้รู้จัก Wifi มากขึ้น

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- ตัว Wifi (ใช้สำหรับเชื่อมต่อ)

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Wifi : https://sites.google.com/site/wifi100940/home
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/05_Wifi-Web-Server/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม : https://www.youtube.com/watch?v=VX-QNQcO-b4&t=266s

## วิธีการทดลอง
- เขียนโปรแกรมการเชื่อมต่อ Wifi (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller


![image](https://user-images.githubusercontent.com/80879163/112352237-9212f180-8d05-11eb-9950-3c15116b9c75.png)


รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล
- หากสามารถเชื่อมต่อไปยัง web server ได้ ถือว่าโปรแกรมทำงานได้ปกติ

Ex.
![image](https://user-images.githubusercontent.com/80879163/112351996-5c6e0880-8d05-11eb-8633-5da693420142.png)



## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือชื่อ wifi และ password wifi ที่เราต้องการจะเชื่อมต่อ และส่วนที่ 2 คือส่วน setup เป็นส่วนที่จะทำการ Connect กับ wifi ที่ได้เลือกไว้ และส่วนของ web server ถ้ามีการเชื่อมต่อเข้า wifi จะแสดงผลเป็น Hello cnt โดย cnt จะทำการ +1 ขึ้นเรื่อย ๆ  เป็นต้น
## คำถามหลังทดลอง
- โปรแกรมนี้สามารถนำไปประยุกต์ใช้อะไรได้บ้าง
  - สร้างโทรศัพท์ หรืออุปกรณ์ต่าง ๆ ที่สามารถเชื่อมต่อ wifi ได้ เพื่อความสะดวกในหลาย ๆ ด้าน
