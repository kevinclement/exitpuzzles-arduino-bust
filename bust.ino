#define PIN_RELAY 8 // Relay pin
#define RELAY_ON  0
#define RELAY_OFF 1

// Variables for magnet
bool relayOn = true;

void setup() {
  Serial.begin(9600);
  Serial.println("Bust-opener by kevinc");

  digitalWrite(PIN_RELAY, RELAY_OFF);
  pinMode(PIN_RELAY, OUTPUT);
}

void loop() {
  // write out to the relay (always on, which should make magnet turn off)
  digitalWrite(PIN_RELAY, relayOn ? RELAY_ON : RELAY_OFF);
}
