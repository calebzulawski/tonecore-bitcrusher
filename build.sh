#!/bin/sh
rm errors.txt
rm warnings.txt
wine asm56300 -bbitcrusher.cln -ia -ea errors.txt -ew warnings.txt main.asm
wine dsplnk bitcrusher.cln