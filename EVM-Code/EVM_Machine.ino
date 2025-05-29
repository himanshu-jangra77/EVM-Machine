
// EVM Machine Arduino Code

// Candidate 1
int push1 = 11;
int led1 = 13;
int c1 = 0;

// Candidate 2
int push2 = 3;
int led2 = 12;
int c2 = 0;

// Candidate 3
int push3 = 7;
int led3 = 9;
int c3 = 0;

// Result button
int push4 = 2;

// Flags
int f1 = 0;
int f2 = 0;
int f3 = 0;

// Buzzer
int buz = 8;

void setup() {
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
  pinMode(push3, INPUT);
  pinMode(push4, INPUT);
  pinMode(buz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int data1 = digitalRead(push1);
  int data2 = digitalRead(push2);
  int data3 = digitalRead(push3);
  int data4 = digitalRead(push4);

  if (data1 == 1 && f1 == 0) {
    digitalWrite(led1, HIGH);
    c1++;
    f1 = 1;
  } else if (data1 == 0 && f1 == 1) {
    delay(3000);
    digitalWrite(led1, LOW);
    f1 = 0;
  }

  if (data2 == 1 && f2 == 0) {
    digitalWrite(led2, HIGH);
    c2++;
    f2 = 1;
  } else if (data2 == 0 && f2 == 1) {
    delay(3000);
    digitalWrite(led2, LOW);
    f2 = 0;
  }

  if (data3 == 1 && f3 == 0) {
    digitalWrite(led3, HIGH);
    c3++;
    f3 = 1;
  } else if (data3 == 0 && f3 == 1) {
    delay(3000);
    digitalWrite(led3, LOW);
    f3 = 0;
  }

  if (data1 == 1 || data2 == 1 || data3 == 1) {
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);
    delay(200);
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);
  }

  if (data4 == 1) {
    delay(400);
    Serial.print("BJP:-");
    Serial.println(c1);
    Serial.print("JJP:-");
    Serial.println(c2);
    Serial.print("AAP:-");
    Serial.println(c3);
  }
}
