cmd_drivers/scsi/scsi_devinfo_tbl.c := sed -n 's/.*define *BLIST_\([A-Z0-9_]*\) *.*/BLIST_FLAG_NAME(\1),/p' /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/scsi/scsi_devinfo.h > drivers/scsi/scsi_devinfo_tbl.c
