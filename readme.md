## Compile:

```
qmk compile -kb ntz_split_2 -km default 
```


## Flash

Press ESC while plugging in & a new drive will show up. 

Copy the `.build/*.uf2` file to the RPI.

## The Layout

```
┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐
│Q ││W ││E ││R ││T │                    │Y ││U ││I ││O ││P │
└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘
┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐
│A ││S ││D ││F ││G │                    │H ││J ││K ││L ││; │
└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘
┌──┐┌──┐┌──┐┌──┐┌──┐                    ┌──┐┌──┐┌──┐┌──┐┌──┐
│Z ││X ││C ││V ││B │                    │N ││M ││, ││. ││/?│
└──┘└──┘└──┘└──┘└──┘                    └──┘└──┘└──┘└──┘└──┘
    ┌──┐┌──┐                                    ┌──┐┌──┐
    │[ ││] │                                    │< ││> │
    └──┘└──┘                                    └──┘└──┘
            ┌──┐┌──┐                    ┌──┐┌──┐
            │L1││L2│                    │R1││R2│
            └──┘└──┘                    └──┘└──┘
                    ┌──┐┌──┐    ┌──┐┌──┐
                    │L3││L4│    │R3││R4│
                    └──┘└──┘    └──┘└──┘
                    ┌──┐┌──┐    ┌──┐┌──┐
                    │L5││L6│    │R5││R6│
                    └──┘└──┘    └──┘└──┘
```

### Stuff

- [Keycodes](https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md)
- [Home Row Mods](https://precondition.github.io/home-row-mods)
