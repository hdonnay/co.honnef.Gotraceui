// Code generated by gioui.org/cpu/cmd/compile DO NOT EDIT.

//go:build linux && (arm64 || arm || amd64)
// +build linux
// +build arm64 arm amd64

package piet

import "gioui.org/cpu"
import "unsafe"

/*
#cgo LDFLAGS: -lm

#include <stdint.h>
#include <stdlib.h>
#include "abi.h"
#include "runtime.h"
#include "tile_alloc_abi.h"
*/
import "C"

var Tile_allocProgramInfo = (*cpu.ProgramInfo)(unsafe.Pointer(&C.tile_alloc_program_info))

type Tile_allocDescriptorSetLayout = C.struct_tile_alloc_descriptor_set_layout

const Tile_allocHash = "364b3cf559d02a86c751292bedc571d5ceef2df899de39ad483b4176294e9857"

func (l *Tile_allocDescriptorSetLayout) Binding0() *cpu.BufferDescriptor {
	return (*cpu.BufferDescriptor)(unsafe.Pointer(&l.binding0))
}

func (l *Tile_allocDescriptorSetLayout) Binding1() *cpu.BufferDescriptor {
	return (*cpu.BufferDescriptor)(unsafe.Pointer(&l.binding1))
}
