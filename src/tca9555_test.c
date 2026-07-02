#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(tca9555_test, LOG_LEVEL_INF);

#define TCA_NODE DT_NODELABEL(tca9555_u1)

static int init(void)
{
    const struct device *dev = DEVICE_DT_GET(TCA_NODE);

    if (!device_is_ready(dev)) {
        LOG_ERR("TCA9555 NOT READY");
        return -1;
    }

    LOG_INF("TCA9555 FOUND!");

    return 0;
}

SYS_INIT(init, APPLICATION, 90);
