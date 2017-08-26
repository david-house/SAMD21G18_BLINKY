#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		
		// Set the LED pin output high (LED = OFF) for one second
		gpio_set_pin_level(LED_PIN, true);
		delay_ms(1000);
		
		for (uint8_t i = 0; i < 8; i++)
		{
			gpio_toggle_pin_level(LED_PIN);
			delay_ms(250);
		}
	}
}
