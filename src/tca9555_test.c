#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(tca9555_test, LOG_LEVEL_INF);

#ifdef CONFIG_TCA9555_TEST

static int tca9555_test_init(void)
{
    LOG_INF("TCA9555 Test Driver Loaded");

    return 0;
}

SYS_INIT(tca9555_test_init, APPLICATION, 90);

#endif
