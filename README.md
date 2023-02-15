# ZMK Keyboard Config

This repo contains configurations for:

- Corne-ish Zen
- Zaphod

## To build locally inside Docker

See guide here: https://zmk.dev/docs/development/setup

Open local zmk checkout in vscode and switch to running in container.
Then use the following commands to build the zen:

```sh
west build -d build/left -b zen_left -- -DZMK_CONFIG="/workspaces/zmk-config/config" && cp build/left/zephyr/zmk.uf2 /workspaces/zmk-config/build/zen-left.uf2
west build -d build/right -b zen_right -- -DZMK_CONFIG="/workspaces/zmk-config/config" && cp build/rigth/zephyr/zmk.uf2 /workspaces/zmk-config/build/zen-right.uf2
```
