#!/usr/bin/env bash

declare -a SIDES=("left" "right")

for SIDE in ${SIDES[@]}; do
  BOARD=corne_${SIDE}

  west build \
    --pristine \
    --source zmk/app \
    --board nrfmicro_13 \
    -- \
    -DSHIELD="${BOARD}" \
    -DZMK_CONFIG=/root/config

  mv build/zephyr/zmk.uf2 "/firmware/${BOARD}.uf2"
done

for SIDE in ${SIDES[@]}; do
  BOARD=lily58_${SIDE}

  west build \
    --pristine \
    --source zmk/app \
    --board nice_nano_v2 \
    -- \
    -DSHIELD="${BOARD}" \
    -DZMK_CONFIG=/root/config

  mv build/zephyr/zmk.uf2 "/firmware/${BOARD}.uf2"
done
