# Flatpak for [gotraceui]

This is a best-effort, unofficial flatpak.
Please feel free to take it for a spin to visualize go traces.

## Install
```sh
flatpak --user install flathub org.freedesktop.Sdk.Extension.golang//23.08 org.freedesktop.Sdk//23.08
flatpak-builder --force-clean --user --install _build co.honnef.Gotraceui.json
```

[gotraceui]: https://github.com/dominikh/gotraceui
