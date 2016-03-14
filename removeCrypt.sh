#!/bin/sh

umount /mnt/EncryptedDisk	
cryptsetup remove newMapper
if [ "$?" = "0" ]; then
	echo "Remove operation is Completed!"
	cryptsetup remove newMapper
	exit 0			
else			
	exit 1
fi

