#!/bin/sh

winemaker --dll  -icombase -iodbc32 -iole32 -ioleaut32 -iwinspool -iodbccp32 -iuuid .
make

