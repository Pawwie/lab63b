# การทดลองที่ 5 เรื่อง การเขียนโปรแกรมเชื่อมต่อ Wifi และ Web-Server

## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมเชื่อมต่อ Wifi
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller
- เพื่อให้รู้จัก Wifi มากขึ้น

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- ตัว Wifi (ใช้สำหรับค้นหา)

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Wifi : https://sites.google.com/site/wifi100940/home
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/02_Scan-Wifi/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม : https://www.youtube.com/watch?v=yBjab0UNuB8

## วิธีการทดลอง
- เขียนโปรแกรมการค้นหา Wifi (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller


![image](https://user-images.githubusercontent.com/80879163/112184673-6414ab00-8c3a-11eb-8d42-f44ef3e4d342.png)
รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล
- เมื่อเห็นชื่อ Wifi ที่ถูกปล่อยไว้ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112185114-e4d3a700-8c3a-11eb-9b1b-b2d904e82126.png)


## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว Setup จะทำการ setup เพื่อให้ตัวค้นหา wifi เริ่มทำงาน และตัว Loop ที่ใช้สำหรับการวน loop เพื่อค้นหา wifi โดยกำหนดให้วน loop ไว้ที่ 10 ms  เป็นต้น
## คำถามหลังทดลอง
- เราสามารถนำเอา Source code นี้ไปประยุกต์ใช้ทำอะไรได้บ้าง
  - Ex. พัฒนาขึ้นเป็นสัญญาณ Bluetooth หรือ GPS ได้
