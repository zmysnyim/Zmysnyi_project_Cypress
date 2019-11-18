### PSoC 6 Cortex M0+ prebuilt images
Prebuilt application images are executed on the Cortex M0+ core of the PSoC 6 dual-core MCU. The images are provided as C arrays ready to be compiled as part of the Cortex M4 application. The Cortex M0+ application code is placed to internal flash by the Cortex M4 linker script.
 
### What's Included?
* [COMPONENT_CM0P_SLEEP](./COMPONENT_CM0P_SLEEP/README.md)

    This image starts CM4 core at CY_CORTEX_M4_APPL_ADDR=0x10002000
    and puts CM0+ core into a deep sleep mode.

* [COMPONENT_CM0P_CRYPTO](./COMPONENT_CM0P_CRYPTO/README.md)

    This image starts crypto server on CM0+ core,
    starts CM4 core at CY_CORTEX_M4_APPL_ADDR=0x10008000
    and puts CM0+ core into a deep sleep mode.

* [COMPONENT_CM0P_BLESS](./COMPONENT_CM0P_BLESS/README.md)

    This image starts BLE controller on CM0+ core,
    starts CM4 core at CY_CORTEX_M4_APPL_ADDR=0x10020000
    and puts CM0+ core into a deep sleep mode.

### Product/Asset Specific Instructions
To pick which image is used in an application update the COMPONENTS variable in the Board Support Package (BSP)'s makefile. Depending on which image is selected, an update to the BSPs linker script may also be required to allocate the proper space for the CM0+ image and that the CM4 has the starting address listed above.

### Supported Software and Tools
This version of the (PSoC 6 Cortex M0+ prebuilt images) was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| GCC Compiler                              | 7.4     |
| IAR Compiler                              | 8.32    |
| ARM Compiler 6                            | 6.11    |

### More information
Use the following links for more information, as needed:
* [Cypress](http://www.cypress.com)
* [ModusToolbox](https://www.cypress.com/products/modustoolbox-software-environment)

---
Copyright (c) Cypress Semiconductor Corporation, 2019.