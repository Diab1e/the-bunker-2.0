--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/minako/Documents/wall/wall.png"

-- Special
background="#060911"
foreground="#c4cddb"
cursor="#c4cddb"

-- Colors
color0="#060911"
color1="#A17460"
color2="#345588"
color3="#61708B"
color4="#7888A1"
color5="#7C98C2"
color6="#8C99AE"
color7="#c4cddb"
color8="#898f99"
color9="#A17460"
color10="#345588"
color11="#61708B"
color12="#7888A1"
color13="#7C98C2"
color14="#8C99AE"
color15="#c4cddb"
