
Debian
====================
This directory contains files used to package jdcoind/jdcoin-qt
for Debian-based Linux systems. If you compile jdcoind/jdcoin-qt yourself, there are some useful files here.

## jdcoin: URI support ##


jdcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install jdcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your jdcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/jdcoin128.png` to `/usr/share/pixmaps`

jdcoin-qt.protocol (KDE)

