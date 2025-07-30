/* generated HAL source file - do not edit */
#include "hal_data.h"
agt_instance_ctrl_t g_timer5_ctrl;
const agt_extended_cfg_t g_timer5_extend =
{ .count_source = AGT_CLOCK_PCLKB,
  .agto = AGT_PIN_CFG_DISABLED,
  .agtoab_settings_b.agtoa = AGT_PIN_CFG_START_LEVEL_LOW,
  .agtoab_settings_b.agtob = AGT_PIN_CFG_DISABLED,
  .measurement_mode = AGT_MEASURE_DISABLED,
  .agtio_filter = AGT_AGTIO_FILTER_NONE,
  .enable_pin = AGT_ENABLE_PIN_NOT_USED,
  .trigger_edge = AGT_TRIGGER_EDGE_RISING,
  .counter_bit_width = AGT_COUNTER_BIT_WIDTH_16, };
const timer_cfg_t g_timer5_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.001 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0xafc8,
  .duty_cycle_counts = 0x57e4, .source_div = (timer_source_div_t) 0, .channel = 5, .p_callback = NULL,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = &g_timer5_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_AGT5_INT)
    .cycle_end_irq       = VECTOR_NUMBER_AGT5_INT,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer5 =
{ .p_ctrl = &g_timer5_ctrl, .p_cfg = &g_timer5_cfg, .p_api = &g_timer_on_agt };
void g_hal_init(void)
{
    g_common_init ();
}
