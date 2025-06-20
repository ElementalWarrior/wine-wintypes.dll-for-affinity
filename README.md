# Wintypes.dll wine dll for Affinity Software

Affinity needs to load .winmd files for winrt code. Wine is currently implementing the functionality to generate winmd files.

As a solution in the interim, this serves as a standalone dll that you can copy to the Photo 2 application directory to get the application running.

The wine devs were not interested in accepting patches upstream it seems for a temporary solution: https://gitlab.winehq.org/wine/wine/-/merge_requests/6288

I haven't tested thoroughly, and I've only checked that photo.exe starts.

# Compiling

Clone this repo to the wine/dlls/ directory. Run compile.sh

# Usage

Move wintypes_shim.dll.so to:
- Affinity/Photo 2/
- Affinity/Designer 2/
- Affinity/Publisher 2/

And rename it to wintypes.dll

# Usage with winetricks

I've created a winetricks pr to install this directory to the affinity directories.

https://github.com/Winetricks/winetricks/pull/2395

Until that is merged, you can clone https://github.com/ElementalWarrior/winetricks/tree/add-affinity and run:

```sh
./src/winetricks affinity
```

If it gets accepted, you can just run:

```sh
winetricks affinity
```

Don't forget to provide your wineprefix if you are using a non-standard setup.

