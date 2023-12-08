# NHNano-lib
This library is use for NHNano Board

# Base Functions - ฟังก์ชั่นหลัก
## analog();
<p>
  Get analog value <br>
  รับค่า analog
</p>

#### Usage -  การใช้งาน
`analog(pin);`

#### Get analog data - รับค่า analog
```
analog(A0);
```
<hr>

## digital();
<p>
  Get digital value <br>
  รับค่า digital
</p>

#### Usage -  การใช้งาน
`digital(pin);`

#### Get digital data - รับค่า digital
```
digital(A0);
```
<hr>

## sserial();
<p>
  Use for send data to Serial monitor with multiple value at same time <br>
  ใช้สำหรับส่งข้อมูลไปยัง Serial monitor แบบหลายข้อมูลพร้อมๆกัน
</p>

#### Usage - การใช้งาน
`sserial(const char *format, ...);`

##### Send data without break the line - ส่งข้อมูลแบบไม่ต้องเว้นบรรทัด
```
void setup(){
  Serial.begin(115200);
}
void loop(){
  sserial("test");
}
```

##### Send data with break line - ส่งข้อมูลแบบเว้นบรรทัด
```
void setup(){
  Serial.begin(115200);
}
void loop(){
  sserial("test\n");
}
```
*JUST ADD "\n" BEHIND PARAMETER*

##### Send data with analog value - ส่งข้อมูลพร้อมกับค่าของ analog
```
void setup(){
  Serial.begin(115200);
}
void loop(){
  sserial("A0: %d\n", analog(A0)); delay(100);
}
```
<hr>

## sleep();
<p>
  Working time duration in milisecond
  ระยะเวลาการทำงานในหน่วย มิลลิวินาที
</p>

#### Usage - การใช้งาน
`sleep(duration);`

##### Assign time - กำหนดระยะเวลาในการทำงาน
```
sleep(1000);
```
<hr>

# Movement control - ควบคุมการเคลื่อนไหว
## setupMotor();
<p>
  Use for start motor <br>
  ใช้สำหรับเปิดใช้งาน Motor
</p>

#### Usage - การใช้งาน
```
setupMotor();
```
<p>
Remark: This code must be in void setup()<br>
หมายเหตุ: โค้ดนี้ต้องอยู่ในส่วนของ void setup()
</p>
<hr>

## fd();
<p>
  Move forward with same speed <br>
  สั่งมอเตอร์ให้ไปข้างหน้าด้วยความเร็วที่เท่ากันทั้ง 2 ข้าง
</p>

#### Usage - การใช้งาน
`fd(speed);`

##### Forward - เคลื่อนที่ไปข้างหน้า
```
fd(100);
```

##### Forward with time duration - เคลื่อนที่ไปข้างหน้าตามเวลาที่กำหนด
```
fd(100); sleep(3000); //Forward for 3 sec
```
<hr>

## bk();
<p>
  Move backward with same speed <br>
  สั่งมอเตอร์ให้ถอยหลังด้วยความเร็วที่เท่ากันทั้ง 2 ข้าง
</p>

#### Usage - การใช้งาน
`bk(speed);`

##### Backward - เคลื่อนที่ถอยหลัง
```
bk(100);
```

##### Backward with time duration - เคลื่อนที่ถอยหลังตามเวลาที่กำหนด
```
bk(100); sleep(3000); //Backward for 3 sec
```
<hr>

## sl();
<p>
  Spin left <br> หมุนซ้าย
</p>

#### Usage - การใช้งาน
`sl(speed);`

##### Spin left - หมุนซ้าย
```
sl(100);
```

##### Spin left with time duration - หมุนซ้ายตามระยะเวลาที่กำหนด
```
sl(100); sleep(3000); //Spin left for 3 sec
```
<hr>

## sr();
<p>
  Spin right <br> หมุนขวา
</p>

#### Usage - การใช้งาน
`sr(speed);`

##### Spin right - หมุนขวา
```
sr(100);
```

##### Spin right with time duration - หมุนขวาตามระยะเวลาที่กำหนด
```
sr(100); sleep(3000); //Spin right for 3 sec
```
<hr>

## tl();
<p>
  Turn left <br> เลี้ยวซ้าย
</p>

#### Usage - การใช้งาน
`tl(speed);`

##### Turn left - เลี้ยวซ้าย
```
tl(100);
```

##### Turn left with time duration - เลี้ยวซ้ายตามระยะเวลาที่กำหนด
```
tl(100); sleep(3000); //Turn left for 3 sec
```
<hr>

## tr();
<p>
  Turn right <br> เลี้ยวขวา
</p>

#### Usage - การใช้งาน
`tr(speed);`

##### Turn right - เลี้ยวขวา
```
tr(100);
```

##### Turn right with time duration - เลี้ยวขวาตามระยะเวลาที่กำหนด
```
tr(100); sleep(3000); //Turn right for 3 sec
```
<hr>

## ao();
<p>
  Use for stop motor <br> ใช้สำหรับหยุดการเคลื่อนไหว
</p>

#### Usage - การใช้งาน
`ao();`

##### Stop - สั่งหยุด
```
ao(); sleep(1000);
```

##### How to use with another functions - การใช้ร่วมกับฟังก์ชั่นอื่นๆ
```
#include <NHNano.h>
void setup(){
  setupMotor();
  fd(100); sleep(1000);
  ao(); sleep(1);
}
void loop(){
}
```

<hr>
