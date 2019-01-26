[Variables]
; (ff show | 00 hide)
shtext=ff

[Logo]
Meter=Image
X=200
W=40
H=40
Greyscale=1
ImageTint=#color0#
MouseOverAction=[!ShowMeter Label][!Redraw]
MouseLeaveAction=[!HideMeter Label][!Redraw]

[Label]
Meter=String
X=-2r
Y=20
FontFace="Noto Sans"
FontSize=14
FontColor=#color0##shtext#
StringAlign=RightCenter
