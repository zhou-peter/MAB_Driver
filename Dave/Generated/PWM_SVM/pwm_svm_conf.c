/*********************************************************************************************************************
* DAVE APP Name : PWM_SVM       APP Version: 4.0.20
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-20:
 *     - Initial version
 *
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES                                                                                                      
 **********************************************************************************************************************/
#include "xmc_ccu8.h"
#include "pwm_svm.h"

/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/
/*pwm phase u port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhUHighPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin  = 3U
};
/*pwm phase u port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhULowPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 0U
};
/*pwm phase v port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhVHighPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 4U
}; 
/*pwm phase v port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhVLowPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 1U
};
/*pwm phase w port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhWHighPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 5U
}; 
/*pwm phase w port & pin init structure*/
const PWM_SVM_GPIO_t SVPWM_PhWLowPin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 2U
};

/* GPIO config Init handle for Phase U High Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhUHiOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};
/* GPIO config Init handle for Phase U Low Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhULoOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};
/* GPIO config Init handle for Phase V High Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhVHiOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};
/* GPIO config Init handle for Phase V Low Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhVLoOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};
/* GPIO config Init handle for Phase W High Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhWHiOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};
/* GPIO config Init handle for Phase W Low Pin */
const XMC_GPIO_CONFIG_t SVPWM_PhWLoOutPinConf = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
};

  /*inverter port & pin init structure*/
  const PWM_SVM_GPIO_t SVPWM_InverterPin =
  {
    .port = (XMC_GPIO_PORT_t *)PORT1_BASE, 
    .pin = 1U
  };

  /* GPIO config Init handle for inverter Pin */
  const XMC_GPIO_CONFIG_t SVPWM_InvPinConf = 
  {
    .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
    .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
    .output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_SHARP_EDGE
  };

  /*trap port & pin init structure*/
  const PWM_SVM_GPIO_t SVPWM_TrapPin =
  {
    .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
    .pin = 7U
  };

  /* GPIO config Init handle for trap Pin */
  const XMC_GPIO_CONFIG_t SVPWM_TrapPinConf = 
  {
    .mode            = XMC_GPIO_MODE_INPUT_TRISTATE,
    .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
    .output_strength = (XMC_GPIO_OUTPUT_STRENGTH_t)0
  };

  /* External Trap event for all slices */
  const XMC_CCU8_SLICE_EVENT_CONFIG_t SVPWM_TrapConfig =
  {
  .mapped_input  = XMC_CCU8_SLICE_INPUT_A,
  .edge          = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
  .level         = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
  .duration      = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED
  };

/*Slice U configuration*/
const PWM_CCU8_CC8_t SVPWM_PhU = 
{
  .slice_ptr      = (XMC_CCU8_SLICE_t*)(void *)CCU80_CC82,
  .slice_number   = (uint8_t)2
};
/*Slice V configuration*/
const PWM_CCU8_CC8_t SVPWM_PhV = 
{
  .slice_ptr      = (XMC_CCU8_SLICE_t*)(void *)CCU80_CC81,
  .slice_number   = (uint8_t)1
};
/*Slice W configuration*/
const PWM_CCU8_CC8_t SVPWM_PhW = 
{
  .slice_ptr      = (XMC_CCU8_SLICE_t*)(void *)CCU80_CC80,
  .slice_number   = (uint8_t)0
};
/*Current trigger configuration*/
const PWM_CCU8_CC8_t SVPWM_CurrentTrig = 
{
  .slice_ptr      = (XMC_CCU8_SLICE_t*)(void *)CCU80_CC83,
  .slice_number   = (uint8_t)3
};
/*Dead time configuration structure*/
XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t SVPWM_DeadTimeConfig =
{
 .enable_dead_time_channel1         = 1U,
 .enable_dead_time_channel2         = 1U,
 .channel1_st_path                  = 1U,
 .channel1_inv_st_path              = 1U,
 .channel2_st_path                  = 1U,
 .channel2_inv_st_path              = 1U,  
 .div                               = 0U,
 .channel1_st_rising_edge_counter   = 0x3cU,
 .channel1_st_falling_edge_counter  = 0x3cU,
 .channel2_st_rising_edge_counter   = 0x3cU,
 .channel2_st_falling_edge_counter  = 0x3cU   
};

/* External Start event for all slices */
const XMC_CCU8_SLICE_EVENT_CONFIG_t SVPWM_StartConfig =
{
  .mapped_input  = XMC_CCU8_SLICE_INPUT_H,
  .edge          = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,
  .level         = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
  .duration      = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED
};
/* CC8 Slice configuration  for all three pwm phases*/
const XMC_CCU8_SLICE_COMPARE_CONFIG_t SVPWM_TimerInitHandle =
{
  .timer_mode           = (uint8_t)XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
  .monoshot             = 0U,
  .shadow_xfer_clear    = 0U,
  .dither_timer_period  = 0U,
  .dither_duty_cycle    = 0U,
  .prescaler_mode       = (uint8_t)XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
  .mcm_ch1_enable       = 0U,
  .mcm_ch2_enable       = 0U,
  .slice_status         = (uint8_t)XMC_CCU8_SLICE_STATUS_CHANNEL_1,
  .passive_level_out0   = 0,   
  .passive_level_out1   = 0,
  .passive_level_out2   = 0,
  .passive_level_out3   = 0,
  .asymmetric_pwm       = (uint8_t)false, 
  .invert_out0          = 0U,
  .invert_out1          = 1U,
  .invert_out2          = 0U,
  .invert_out3          = 1U,
  .prescaler_initval    = (uint8_t)0,
  .float_limit          = 0U,
  .dither_limit         = 0U,
  .timer_concatenation  = 0U
};
/* CC8 Slice configuration  for current trigger slice*/
const XMC_CCU8_SLICE_COMPARE_CONFIG_t SVPWM_TimerInit_CurrentTrig =
{
  .timer_mode           = (uint8_t)XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
  .monoshot             = 0U,
  .shadow_xfer_clear    = 0U,
  .dither_timer_period  = 0U,
  .dither_duty_cycle    = 0U,
  .prescaler_mode       = (uint8_t)XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
  .mcm_ch1_enable       = 0U,
  .mcm_ch2_enable       = 0U,
  .slice_status         = (uint8_t)(XMC_CCU8_SLICE_STATUS_t)XMC_CCU8_SLICE_STATUS_CHANNEL_2,
  .passive_level_out0   = 1U,   
  .passive_level_out1   = 1U,
  .passive_level_out2   = 1U,
  .passive_level_out3   = 1U,
  .asymmetric_pwm       = (uint8_t)false,
  .invert_out0          = 0U,
  .invert_out1          = 0U,
  .invert_out2          = 0U,
  .invert_out3          = 0U,
  .prescaler_initval    = (uint8_t)0,
  .float_limit          = 0U,
  .dither_limit         = 0U,
  .timer_concatenation  = 0U,
};
/*App configuration handle initialization*/
const PWM_SVM_Config_t SVPWM_AppConfig =
{
  .config_phasev_crs     = (uint32_t *)&CCU80_CC81->CR1S,
  .config_phasew_crs     = (uint32_t *)&CCU80_CC80->CR1S,
  .pwm_frequency         = 18000U,
  .module_freq           = 120000000U, 
  .sync_start_mask       = 0x100U,
  .shadow_transfer_mask  = 0x1111U,
  .event_sr_selector     = {
                              0x0U, 0x0U, 
                              0x0U, 0x2U,
                           },
  .period_max            = (uint32_t)60000000,
  .period_min            = (uint32_t)1831,
  .phase_cmpch_map       = {
                             XMC_CCU8_SLICE_COMPARE_CHANNEL_1,
                             XMC_CCU8_SLICE_COMPARE_CHANNEL_1,
                             XMC_CCU8_SLICE_COMPARE_CHANNEL_1,
                             XMC_CCU8_SLICE_COMPARE_CHANNEL_2
                           },
  .phase_st_map          = {
                             XMC_CCU8_SLICE_STATUS_CHANNEL_1,
                             XMC_CCU8_SLICE_STATUS_CHANNEL_1,
                             XMC_CCU8_SLICE_STATUS_CHANNEL_1
                            },
  .segment_time_calc     = PWM_SVM_USE_LOOKUPTABLE,
  .current_measurement   = PWM_SVM_PHASECM,
  .trap_exit_mode        = XMC_CCU8_SLICE_TRAP_EXIT_MODE_AUTOMATIC,

  .trap_hwsel            = XMC_GPIO_HWCTRL_PERIPHERAL2,
  .enable_trap           = (uint8_t)true,


  .inverter_pin          = PWM_SVM_IPIN_HIGH,
  .phase_u_out0          = XMC_CCU8_SLICE_OUTPUT_0,
  .phase_v_out0          = XMC_CCU8_SLICE_OUTPUT_0,
  .phase_w_out0          = XMC_CCU8_SLICE_OUTPUT_0,
  .current_offset        = (uint16_t)0,
  .amplitude_scale       = (uint16_t)208,
  .enable_periodmatch    = (uint8_t)true,
  .enable_trapevent      = (uint8_t)false,
  .enable_optimized_slice= (uint8_t)false,
  .trap_sync_pwm         = (uint8_t)0
};
/*App handle structure initialization*/
PWM_SVM_t SVPWM =
{
  .confighandle_ptr       = (PWM_SVM_Config_t*)(void*)&SVPWM_AppConfig,
  .global_ptr             = (XMC_CCU8_MODULE_t *)(void*)CCU80_BASE,
  .phase_ptr              = { 
                             (PWM_CCU8_CC8_t*)(void*)&SVPWM_PhU,
                             (PWM_CCU8_CC8_t*)(void*)&SVPWM_PhV,
                             (PWM_CCU8_CC8_t*)(void*)&SVPWM_PhW,
                             (PWM_CCU8_CC8_t*)(void*)&SVPWM_CurrentTrig,
                            },
  .phase_configinit_ptr   = (XMC_CCU8_SLICE_COMPARE_CONFIG_t*)(void*)&SVPWM_TimerInitHandle,
  .current_configinit_ptr = (XMC_CCU8_SLICE_COMPARE_CONFIG_t*)(void*)&SVPWM_TimerInit_CurrentTrig, 
  .pwmoutpin_ptr          =
                            {
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhUHighPin,
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhULowPin,
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhVHighPin,
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhVLowPin,
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhWHighPin,
                              (PWM_SVM_GPIO_t*)(void*)&SVPWM_PhWLowPin,
                            },
  .pwmoutconfig_ptr       = 
                            {
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhUHiOutPinConf,
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhULoOutPinConf,
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhVHiOutPinConf,
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhVLoOutPinConf,
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhWHiOutPinConf,
                             (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_PhWLoOutPinConf,
                            },
  .phaseu_crs            = (uint32_t *)&CCU80_CC82->CR1S,
  .phasev_crs            = (uint32_t *)&CCU80_CC81->CR1S,
  .phasew_crs            = (uint32_t *)&CCU80_CC80->CR1S,


  .trappin_ptr            = (PWM_SVM_GPIO_t*)(void*)&SVPWM_TrapPin,
  .trapinconfig_ptr       = (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_TrapPinConf,
  .trapconfig_ptr         = (XMC_CCU8_SLICE_EVENT_CONFIG_t*)(void*)&SVPWM_TrapConfig,

  .inverterpin_ptr        = (PWM_SVM_GPIO_t*)(void*)&SVPWM_InverterPin,
  .inverterpinconfig_ptr  = (XMC_GPIO_CONFIG_t*)(void*)&SVPWM_InvPinConf,

  .startconfig_ptr        = (XMC_CCU8_SLICE_EVENT_CONFIG_t*)(void*)&SVPWM_StartConfig,
  .globalccu8_handle_ptr  = (GLOBAL_CCU8_t*)(void*)&GLOBAL_CCU8_0,
  .deadtimeconfig_ptr     = (XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t*)(void*)&SVPWM_DeadTimeConfig,
  .svm_schemesel_ptr      = (PWM_SVM_SVMSCHEME_PTR_t)PWM_SVM_CalCmpValueSym7,
  .seg_time_calc_ptr      = (PWM_SVM_SEGCALC_PTR_t)PWM_SVM_TimecalcUsingLUT,
  .period                 = 3332U,
  .state                  = PWM_SVM_UNINITIALIZED,
  .svm_config             = (PWM_SVM_SVMCONFIG_t)PWM_SVM_7SEG_SYMM, 
  .tmin                   = 23U,
  .tmin_14                = 712U,
  .max_amplitude          = 16384U,
  .over_modulation_enable = 0U,
  .over_modulation_scale  = 32547U,
  .max_amplitude_overmod  = 18841U, 
  .t0                     = 3332U
};

