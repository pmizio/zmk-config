FROM zmkfirmware/zmk-build-arm:stable

WORKDIR /root

COPY config/west.yml config/west.yml
COPY build.yaml build.yaml

RUN west init --local config
RUN west update
RUN west zephyr-export

COPY config/* config/

COPY bin/* bin/
CMD ./bin/build.sh
