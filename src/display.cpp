#include <LiquidCrystal_I2C.h>

extern LiquidCrystal_I2C lcd;

void display(int recyclable_count, int non_recyclable_count) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Recyclable:");
    lcd.print(recyclable_count);

    lcd.setCursor(0, 1);
    lcd.print("Non-recyclable:");
    lcd.print(non_recyclable_count);
}
