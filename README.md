# Wintypes.dll wine dll for Affinity Software

Affinity needs to load .winmd files for winrt code. Wine is currently implementing the functionality to generate winmd files.

As a solution in the interim, this serves as a standalone dll that you can copy to the Photo 2 application directory to get the application running.

The wine devs were not interested in accepting patches upstream it seems for a temporary solution: https://gitlab.winehq.org/wine/wine/-/merge_requests/6288

I haven't tested thoroughly, and I've only checked that photo.exe starts.

