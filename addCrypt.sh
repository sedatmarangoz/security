#!/bin/sh

if [ -z ${1} ]
then
	echo "The usage of this script is: ${0} /path/to/disk/to/be/encrypted"
	exit 1
else	
	encryptedDisk=${1}	
	
	cryptsetup create newMapper ${encryptedDisk}	

	if [ "$?" = "0" ]; then
		mount -t ext2 /dev/mapper/newMapper /mnt/EncryptedDisk	
		if [ "$?" != "0" ]; then
			echo "Password is wrong, try again..."
			cryptsetup remove newMapper
			exit 1			
		else			
			echo "Encryption Completed!"
			echo "You can now write to /mnt/EncryptedDisk to write your encrypted disk."
		fi

	else
		echo "cryptsetup is NOT ok..."
		exit 1
	fi

fi
