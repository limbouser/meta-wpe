# Backporting streamer pacakge config, this needs to go upstream meta-wpe once we sync up with the latest
STREAMER_IMPLEMENTATION ?= "QAM"
STREAMER_FRONTENDS      ?= "1"
STREAMER_DECODERS       ?= "2"
STREAMER_STANDARD       ?= "DVB"
STREAMER_SI_PARSING     ?= "NO"
STREAMER_TS_SCANNING    ?= "NO"
STREAMER_HOME_TS        ?= ""

PACKAGECONFIG[streamer] = " \
    -DPLUGIN_STREAMER=ON \
    -DSTREAMER_IMPLEMENTATION=${STREAMER_IMPLEMENTATION} \
    -DPLUGIN_STREAMER_FRONTENDS=${STREAMER_FRONTENDS} \
    -DPLUGIN_STREAMER_DECODERS=${STREAMER_DECODERS} \
    -DPLUGIN_STREAMER_STANDARD=${STREAMER_STANDARD} \
    -DPLUGIN_STREAMER_SI_PARSING=${STREAMER_SI_PARSING} \
    -DPLUGIN_STREAMER_TS_SCANNING=${STREAMER_TS_SCANNING} \
    -DPLUGIN_STREAMER_HOME_TS=${STREAMER_HOME_TS} \
    ,,"