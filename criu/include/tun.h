#ifndef __CR_TUN_H__
#define __CR_TUN_H__

#ifndef TUN_MINOR
#define TUN_MINOR	200
#endif

#include <linux/netlink.h>

#include "images/netdev.pb-c.h"

extern const struct fdtype_ops tunfile_dump_ops;
extern int dump_tun_link(NetDeviceEntry *nde, struct cr_imgset *fds, struct nlattr **info);
struct net_link;
extern int restore_one_tun(struct net_link *link, int nlsk);
extern struct collect_image_info tunfile_cinfo;
extern int check_tun_cr(int no_tun_err);

#endif /* __CR_TUN_H__ */
