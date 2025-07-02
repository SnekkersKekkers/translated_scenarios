BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040208501_02_000");
MsgDisp("Sassa","Ah there's some needle ice over there.");
MsgSel("Ehー、step on it!","Our shoes will get dirty","It's pretty huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,5,1);
    VoicePlay("B040208501_02_010");
    MsgDisp("Sassa","Hey, I'm the one who found it.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040208501_02_020");
    MsgDisp("Sassa","Shoes are supposed to get dirty, right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208501_02_030");
    MsgDisp("Sassa","Right.
But if you hold it, your hands will get
covered in mud. I often got scolded
a lot when I got home.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
