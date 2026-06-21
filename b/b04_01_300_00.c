BGOpen("bh110",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("B040130000_01_000");
MsgDisp("Kazama","No one has lived here for 10 years so it's
a bit damaged.");
MsgSel("This is a wonderful room!","It's a very boyish room.","...It's a unique room, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040130000_01_010");
    MsgDisp("Kazama","Wonderful?
It's just a normal kid's room.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040130000_01_020");
    MsgDisp("Kazama","Right. I've been sorting things out since
I got back, but it still looks like an
elementary schooler's room, doesn't it?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040130000_01_030");
    MsgDisp("Kazama","Wait, don't stare at it too hard.
I still haven't managed to organise it
since I got back.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
