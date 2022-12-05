#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"

int main(void) {
  led_init();
  switch_init();
  buzzer_init();
  configureClocks();/* setup oscillator */
  enableWDTInterrupts();/* enable interrupt */

  or_sr(0x18);/* CPU off, GIE on */
}
