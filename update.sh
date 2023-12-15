#!/bin/sh
set -ex
root="$(realpath "$(dirname "$0")")"
d="$(mktemp -d)"
trap 'rm -rf "$d"' EXIT
(
	cd "$d"
	curl -sfSLo src.zip "$(jq -r '.modules[0].sources[0].url' "${root}/co.honnef.Gotraceui.json")"
	unzip -q src.zip
	cd honnef.co/go/gotraceui@v*
	go mod vendor -o "${root}/vendor"
)
