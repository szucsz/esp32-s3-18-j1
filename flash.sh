#!/bin/bash
. "/root/export-esp.sh"
cargo espflash flash --release --monitor
