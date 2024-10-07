#ifndef __TEVS_H
#define __TEVS_H

#include <linux/types.h>

#define TEVS_NAME		"tevs"

struct tevs_platform_data {
	unsigned int port;
	unsigned int lanes;
	uint32_t i2c_slave_address;
	int irq_pin;
	unsigned int irq_pin_flags;
	char irq_pin_name[16];
	int reset_pin;
	int standby_pin;
	char suffix;
	int gpios[4];
};

#endif /* __TEVS_H  */
