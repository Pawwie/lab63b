# การทดลองที่ 3 เรื่อง การเขียนโปรแกรม Output สัญญาณดิจิทัล
## วัตถุประสงค์
- เพื่อให้เข้าใจวิธีการต่อและใช้งานตัว Microcontroller
- เพื่อให้รู้จักการ Setup และ Upload ตัวโปรแกรมที่เขียนไว้ลงบน Microcontroller
- เพื่อให้รู้จักวิธีการเขียนโปรแกรมสัญญาณ Output และรู้จักตัว Output

## อุปกรณ์
- Microcontroller ที่เหมาะสมกับการทดลอง (ในที่นี้ใช้ ESP-01)
- Computer สำหรับเขียนโปรแกรม
- Serail (เพื่อใช้สำหรับเชื่อมต่อระหว่างตัว Microcontroller และ Computer ผ่าน USB)
- หลอดไฟ
- สายไฟเชื่อมต่อระหว่างตัว Output ของตัว Microcontroller กับหลอดไฟ

## ศึกษาข้อมูลเบื้องต้น
- เกี่ยวกับ Input/Output : skjproject.wordpress.com/อุปกรณ์อินพุตinput-เอ้าท์พุ
- เกี่ยวกับตัว Relay : http://www.inno-ins.com/911228/%E0%B8%A3%E0%B8%B5%E0%B9%80%E0%B8%A5%E0%B8%A2%E0%B9%8C-relays
- เกี่ยวกับ Platfrom , Board , Flamework
  - Link สำหรับ web ที่ใช้ศึกษา : https://platformio.org/
  - Link Video อธิบายประกอบ : https://www.youtube.com/watch?v=APdBR37Ukxg
- ข้อมูลเกี่ยวกับตัว Source Code : https://github.com/choompol-boonmee/iotset1/blob/main/pattani/03_Output-Port/src/main.cpp
- Video อธิบายวิธีการต่อและเขียนโปรแกรม (ตอนที่ 1) : https://www.youtube.com/watch?v=CCnN1WJsXQY
- Video อธิบายวิธีการต่อและเขียนโปรแกรม (ตอนที่ 2) : https://www.youtube.com/watch?v=6JnhaUILGuw

## วิธีการทดลอง (ตอนที่ 1)
- เขียนโปรแกรม Output ที่ทำให้ไฟสว่าง (ศึกษาการเขียน และต่อวงจร Microcontroller ตามที่ Video ได้อธิบายไว้)
- นำ Code ที่เขียน Upload ลงบันตัว Microcontroller


![image](https://user-images.githubusercontent.com/80879163/112189552-15b5db00-8c3f-11eb-8b94-15f99a775963.png)

รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล (ตอนที่ 1)
- เมื่อหลอดไฟสว่างภายใต้เวลาที่ได้กำหนดในโปรแกรมไว้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112189716-3e3dd500-8c3f-11eb-94e9-5cc59a7f857c.png)

## วิธีการทดลอง (ตอนที่ 2)
- นำ Microcontroller ที่เขียน Code ไว้มาต่อกับตัว Relay (วิธีการต่อตามตัวอย่างใน Video ตอนที่ 2)


![image](https://user-images.githubusercontent.com/80879163/112191845-629ab100-8c41-11eb-8969-11ed6efb630c.png)


รูปภาพนี้เป็นส่วนหนึ่งที่ของ Video ที่แนบมาก่อนหน้านี้ ใช้สำหรับอธิบายการต่อวงจรและ การเขียนโปรแกรม


## การบันทึกผล (ตอนที่ 2)
- เมื่อหลอดไฟใน relay สว่างภายใต้เวลาที่ได้กำหนดในโปรแกรมไว้ ถือว่าใช้งานได้

Ex.
![image](https://user-images.githubusercontent.com/80879163/112192018-8cec6e80-8c41-11eb-8d4f-ac253b374d37.png)



## อภิปรายผลการทดลอง
- ทดสอบดูว่าโปรแกรมที่เขียนไว้สามารถใช้งานได้หรือไม่
  - Ex. ใช้งานได้ 
- อธิบายการทำงานของตัว Source code ( เป็นเหตุผลประกอบในการอภิปรายข้อที่ 1 )
  - Ex. ตัว Source code แบ่งออกเป็น 2 ส่วน โดยที่ส่วนแรกคือตัว Setup จะทำการ setup เพื่อให้ port output พร้อมที่ะเริ่มทำงาน และตัว Loop ที่ใช้สำหรับการวน loop เพื่อเพิ่มค่า cnt โดยหน่วงเวลาไว้ที่ 500 ms
  และจะแสดงค่าเป็น 1 ไปที่ port output เมื่อ cnt เป็นเลขคู่ (ไฟสว่าง) แสดงค่าเป็น 1 เมื่อ cnt เป็นเลขคี่ (ไฟดับ)  เป็นต้น
## คำถามหลังทดลอง
- สามารถนำเอาสัญญาณ Output ไปใช้ทำอะไรได้บ้าง
  - ใช้สร้างสัญญาณไฟจราจร จอทีวี สัญญาณเตือนภัยต่าง ๆ เป็นต้น
