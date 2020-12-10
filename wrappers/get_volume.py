import alsaaudio

mixer = alsaaudio.Mixer()

volumes = mixer.getvolume()

if volumes[0] == volumes[1]:
    print(volumes[0], "%")
else:
    print((volumes[0] + volumes [1])/2, "%")
