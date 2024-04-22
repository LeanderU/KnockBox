import board
import time
import audioio
# new imports for the SD card
import busio
import digitalio
import storage
import adafruit_sdcard  # add this library
from audiocore import WaveFile

# The SD card uses a protocol called SPI.  We'll see much more of this very soon.
# For now, what we need is a digital line to select the SD card (cs, below), and
# connections for the SPI signal lines to the SD card (spi, below)

# Use a digital pin to select the SD card
cs = digitalio.DigitalInOut(board.PA19)
# Wire up the SPI pins
spi = busio.SPI(board.PA17, board.PB23, board.PB22)

# Connect to the card and mount the filesystem.
# Once this is done, the SD card looks just like another part of the files system!
sdcard = adafruit_sdcard.SDCard(spi, cs)
vfs = storage.VfsFat(sdcard)
storage.mount(vfs, "/sd")

wave_file = open("/sd/AUDIO/example.wav", "rb") # Note the "/sd/" prefix for the SD card
wave = WaveFile(wave_file)            # Everything else is the same ...
audio = audioio.AudioOut(board.PA02)
audio.play(wave)
time.sleep(10)
