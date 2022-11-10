INSTALL_RZG2_DEMOS ?= "0"

IMAGE_INSTALL_append = " ${@oe.utils.conditional('INSTALL_RZG2_DEMOS', '1', 'lvgl', '', d)} "
