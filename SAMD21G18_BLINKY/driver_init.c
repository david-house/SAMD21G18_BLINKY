/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

void delay_driver_init(void)
{
	delay_init(SysTick);
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA18

	// Set pin direction to output
	gpio_set_pin_direction(LED_PIN, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(LED_PIN,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   true);

	gpio_set_pin_function(LED_PIN, GPIO_PIN_FUNCTION_OFF);

	delay_driver_init();
}
