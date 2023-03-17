# My build dmenu

Extra stuff added to vanilla dmenu into order of the applyed patches:

1. [dmenu-password-5.0](https://tools.suckless.org/dmenu/patches/password/dmenu-password-5.0.diff) `-P` for password mode: hide user input
2. [dmenu-mousesupport-5.2](https://tools.suckless.org/dmenu/patches/mouse-support/dmenu-mousesupport-5.2.diff) dmenu options are mouse clickable
3. [dmenu-rejectnomatch-4.7](https://tools.suckless.org/dmenu/patches/reject-no-match/dmenu-rejectnomatch-4.7.diff) `-r` to reject non-matching input
4. [dmenu-alpha-20210605-1a13d04](https://tools.suckless.org/dmenu/patches/alpha/dmenu-alpha-20210605-1a13d04.diff) alpha patch, which importantly allows this build to be embedded in transparent st
5. can view color characters like emoji

## Installation

After making any config changes that you want, enter the following command 
to build and install dmenu:
```sh
sudo make clean install
```

## Running dmenu

See the man page for details.
