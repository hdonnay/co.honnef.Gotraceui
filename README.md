# Flatpak for [gotraceui]

This is a best-effort, unofficial flatpak.
Please feel free to take it for a spin to visualize go traces.

## Install
```sh
(
d="$(mktemp -d )"
trap 'rm -rf "$d"' EXIT
cd "$d"
curl -sSfLO https://github.com/hdonnay/co.honnef.Gotraceui/releases/latest/download/gotraceui.flatpak
flatpak --user install gotraceui.flatpak
)
```

## Build
```sh
flatpak-builder --force-clean --user --install-deps-from=flathub _build co.honnef.Gotraceui.json
```

[gotraceui]: https://github.com/dominikh/gotraceui
