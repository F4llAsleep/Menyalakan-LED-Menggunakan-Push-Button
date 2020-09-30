int led = 7;
int button = 6;

int nilaibutton;
int jml_tekan;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  nilaibutton = digitalRead(button);

  if (nilaibutton == 1) {
    jml_tekan++;
    delay(300);
    if (jml_tekan == 1) {
      digitalWrite(led, HIGH);
    }
    if (jml_tekan == 2) {
      digitalWrite(led, LOW);
      jml_tekan = 0;
    }
  }

}
