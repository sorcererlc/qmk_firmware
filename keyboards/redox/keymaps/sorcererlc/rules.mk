# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
LTO_ENABLE = yes

SPLIT_KEYBOARD = yes

DEFAULT_FOLDER = redox/rev1

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

OLED_ENABLE = yes
OLED_DRIVER = SSD1306

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
SLEEP_LED_ENABLE = no

WPM_ENABLE = yes

ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += oled_display.c
endif

ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
    SRC += lighting.c
endif
