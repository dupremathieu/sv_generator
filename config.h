#ifndef CONFIG_H
#define CONFIG_H
#define FILE_CLIENTS ".curvetun/clients"
#define FILE_SERVERS ".curvetun/servers"
#define FILE_PRIVKEY ".curvetun/priv.key"
#define FILE_PUBKEY ".curvetun/pub.key"
#define FILE_USERNAM ".curvetun/username"
#define GITVERSION "v0.6.7-26-gb23c151"
#define HAVE_LIBNL 1
#define HAVE_TCPDUMP_LIKE_FILTER 1
#define HAVE_GEOIP 1
#define HAVE_LIBZ 1
#define HAVE_HARDWARE_TIMESTAMPING 1
#define HAVE_TPACKET3 1

#define ENABLE_TX_TIMESTAMPS 1
/* Uncomment this to enable hardware timestamping */
//#define ENABLE_HARDWARE_TIMESTAMPING 1
#endif /* CONFIG_H */
