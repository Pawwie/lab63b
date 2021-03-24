# การทดลองที่ 6 เรื่อง การเขียนโปรแกรมสร้าง Wifi Access Point (Wifi AP)

## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมการปล่อยสัญญาณ Wifi
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller
- เพื่อให้รู้จัก Wifi มากขึ้น

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- อุปกรณ์ที่สามารถค้นหา Wifi ได้

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Wifi : https://sites.google.com/site/wifi100940/home
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/06_Wifi-AP-Web-Server/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม : https://www.youtube.com/watch?v=T26DVHePlTs

## วิธีการทดลอง
- เขียนโปรแกรมการสร้างสัญญาณ Wifi (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller


![image](https://user-images.githubusercontent.com/80879163/112201724-8105aa00-8c4b-11eb-8af6-819c844d2234.png)


รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล
- ถ้าสามารถเชื่อมต่อ Wifi ที่ถูกสร้างจากตัว Microcontroller ได้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112201859-a8f50d80-8c4b-11eb-8693-2bd8c42d5e71.png)



## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว ชื่อ Wifi และ Password ที่จะสร้าง รวมไปถึง IP ของเครื่อง gateway supnet และ webserver ในส่วนที่ 2 จะเป็นตัว setup ให้ Microcontroller
   พร้อมที่จะเป็นตัวปล่อยสัญญาณ wifi โดยมีชื่อ ,password ,IP ต่าง ๆ จะถูกตั้งตามที่ตั้งค่าไว้ เป็นต้น
## คำถามหลังทดลอง
- สามารถนำเอาโปรแกรมกระจายสัญญาณ wifi ไปประยุกต์ใช้ทำอะไรได้บ้าง
  - เป็นแนวทางในการสร้างตัวกระจายสัญญาณ wifi ขนาดพกพาได้ เป็นต้น
