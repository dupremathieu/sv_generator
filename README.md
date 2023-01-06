This project is based on trafgen tools of netsniff-ng:
https://github.com/netsniff-ng/netsniff-ng


To use id:

* build the image:
```
docker build --tag trafgen .
```
* enable TX hardware timesamping:
```
sudo hwstamp_ctl -t 1 -i my_network_interface
```
* run trafgen
```
docker run --privileged --network host --rm -v /tmp/trafgen:/tmp/ trafgen --dev my_network_interface --conf /sv_template.cfg -n 10000 -t 500us
```
* result are stored in */tmp/trafgen/out*
