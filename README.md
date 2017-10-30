# QtChildID v1.0-alpha
## Introduction

QtChildID is free software for the purpose of supporting "Child ID"
events. Read more about the [National Child
Identification](http://www.childidprogram.com/) program on their
website. A lot of volunteer organizations participate in this program
and help thousands of children world wide have their most vital stats,
picture and fingerprints taken so that in case of an abduction or
missing person, the police has immediate access the the most valuable
identification data. Most Child ID kits are tedious to set up. This
software is intended to speed processing up.

While in its current form, QtChildID was created for use of the
Grand Lodge of Free and Accepted Masons of Hawaii, please do not
hesitate to use it for good purposes, no matter which organization
you're working with. Saving kids is all that counts.

## Installation

### Requirements
- Fingerprint Reader supported by
  [libfprint](https://www.freedesktop.org/wiki/Software/fprint/libfprint/)
- Any Linux supported WebCam
- X11

### Distribution

#### Using Snap

I am distributing this software mostly as snap because it relieves the
user from having to install a bunch of dependencies. 

```
$ sudo snap install qtchildid
```

Should be all that's required to install.

#### Building from source

In case you want to compile this from source, under Ubuntu/Xenial, the
following packages need to be installed:

- qt4-default
- libopencv-dev
- libpoppler-qt4-dev
- libfprint-dev

This should lead to a configure/compile workflow similar to this:
  
```
$ sudo apt install qt4-default libopencv-dev libpoppler-qt4-dev libfprint-dev
$ git clone https://github.com/sfabel/QtChildID.git
$ cd QtChildID
$ qmake
$ make && sudo make install
```

