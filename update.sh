#!/bin/sh
set -ex
test -d src || git clone "$(jq -r '.modules[0].sources[0].url' co.honnef.Gotraceui.json)" src
(
	cd src
	git fetch origin
	git checkout "$(jq -r '.modules[0].sources[0].tag' ../co.honnef.Gotraceui.json)"
	go mod vendor -o ../vendor
)
