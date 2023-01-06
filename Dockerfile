FROM ubuntu:22.04 as builder

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update
RUN apt-get install -y \
    bison \
    build-essential \
    flex \
    libnl-3-dev \
    libnl-genl-3-dev \
    make \
    pkg-config
COPY . /build
WORKDIR /build
RUN make trafgen

FROM ubuntu:22.04
COPY --from=builder /build/trafgen/trafgen /usr/bin/trafgen
COPY --from=builder /lib/x86_64-linux-gnu/libnl-3.so.200 /lib/x86_64-linux-gnu/
COPY --from=builder /lib/x86_64-linux-gnu/libnl-genl-3.so.200 /lib/x86_64-linux-gnu/
COPY sv_template.cfg /
ENTRYPOINT ["/usr/bin/trafgen"]
