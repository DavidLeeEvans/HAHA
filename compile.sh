#!/bin/bash
haxelib run formatter -s src && haxelib run haxeui-core build openfl && openfl build linux

