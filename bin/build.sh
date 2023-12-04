#!/usr/bin/env bash

IFS=$'\n'
for it in $(python3 ./bin/test.py); do
  config=($it)

  IFS=' '
  for shield in ${config[@]:1}; do
    west build \
      --pristine \
      --source zmk/app \
      --board "${config[@]:0:1}" \
      -- \
      -DSHIELD="$shield" \
      -DZMK_CONFIG=/root/config

    mv build/zephyr/zmk.uf2 "/firmware/$shield.uf2"
  done
done
