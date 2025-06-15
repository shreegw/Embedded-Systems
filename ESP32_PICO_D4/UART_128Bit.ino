//This program transmits in ASCII format 
//This Program was designed to work with an FPGA configured for testing UART and displays the number on 7 segment display

uint8_t number128[16] = {
  0xFA, 0x67, 0xBA, 0x33,
  0x89, 0xBE, 0xA8, 0x47,
  0x89, 0x9C, 0xBE, 0x68,
  0xFC, 0x20, 0x24, 0x84
};

uint8_t ndex = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.write(number128[ndex]);
  ndex = (ndex + 1) % 16;  // Loop back to start after sending 16 bytes
  delay(1000);               // 1 second delay
}


