cmd_lib/raid6/neon8.c := awk -f/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/raid6/unroll.awk -vN=8 < /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/raid6/neon.uc > lib/raid6/neon8.c || ( rm -f lib/raid6/neon8.c && exit 1 )