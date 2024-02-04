#include <Adafruit_MCP23X17.h>

#define OUTPUT1 3
#define OUTPUT2 2
#define OUTPUT3 1
#define OUTPUT4 0

// uncomment appropriate line
Adafruit_MCP23X17 mcp;

void setup() {
Serial.begin(115200);
//while (!Serial);
Serial.println("NORVO Expansions Test");

// uncomment appropriate mcp.begin
Wire.begin (16, 17); 
if (!mcp.begin_I2C(0x27)) {
Serial.println("Error.");
while (1);
}

// configure pin for output
mcp.pinMode(OUTPUT1, OUTPUT);
mcp.pinMode(OUTPUT2, OUTPUT);
mcp.pinMode(OUTPUT3, OUTPUT);
mcp.pinMode(OUTPUT4, OUTPUT);
Serial.println("Looping...");
}

void loop() {
mcp.digitalWrite(OUTPUT1, HIGH);
mcp.digitalWrite(OUTPUT2, LOW);
mcp.digitalWrite(OUTPUT3, LOW);
mcp.digitalWrite(OUTPUT4, LOW);
delay(500);
mcp.digitalWrite(OUTPUT1, LOW);
mcp.digitalWrite(OUTPUT2, HIGH);
mcp.digitalWrite(OUTPUT3, LOW);
mcp.digitalWrite(OUTPUT4, LOW);
delay(500);
mcp.digitalWrite(OUTPUT1, LOW);
mcp.digitalWrite(OUTPUT2, LOW);
mcp.digitalWrite(OUTPUT3, HIGH);
mcp.digitalWrite(OUTPUT4, LOW);
delay(500);
mcp.digitalWrite(OUTPUT1, LOW);
mcp.digitalWrite(OUTPUT2, LOW);
mcp.digitalWrite(OUTPUT3, LOW);
mcp.digitalWrite(OUTPUT4, HIGH);
delay(500);
mcp.digitalWrite(OUTPUT1, LOW);
mcp.digitalWrite(OUTPUT2, LOW);
mcp.digitalWrite(OUTPUT3, LOW);
mcp.digitalWrite(OUTPUT4, LOW);
delay(500);

Serial.println("Looping...");
}
