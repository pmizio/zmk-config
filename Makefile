IMAGE=zmk-conifg
BUILD_DIR=firmware

.PHONY: all clean

all: delete-firmware build

build:
	docker build --tag zmk --file Dockerfile .
	docker build --rm --build-arg WEST_CONFIG=config/west.yml --tag $(IMAGE) .
	docker run --rm --volume $(PWD)/$(BUILD_DIR):/$(BUILD_DIR) $(IMAGE)

delete-firmware:
	rm -f firmware/*.uf2

clean: delete-firmware
	docker image rm zmk docker.io/zmkfirmware/zmk-build-arm:stable
