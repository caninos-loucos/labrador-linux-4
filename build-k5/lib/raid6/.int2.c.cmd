cmd_lib/raid6/int2.c := awk -f/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/raid6/unroll.awk -vN=2 < /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/raid6/int.uc > lib/raid6/int2.c || ( rm -f lib/raid6/int2.c && exit 1 )