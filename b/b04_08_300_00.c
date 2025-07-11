BGOpen("bh810",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,3);
ScrFadeIn(0);
VoicePlay("B040830000_08_000");
MsgDisp("Shirahane","This is my room.
I share it with my older brother.");
MsgSel("It's a wonderful room!","It's a very boyish room","...It sure is a unique room, isn't it?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,3);
    VoicePlay("B040830000_08_010");
    MsgDisp("Shirahane","Thanks.
You said you were coming, so I got fired
up in cleaning—! Hehe!");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,0,1);
    VoicePlay("B040830000_08_020");
    MsgDisp("Shirahane","I wan't really aware of it...
Well, both me and Nii-chan 
are guys, after all.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,4,1);
    VoicePlay("B040830000_08_030");
    MsgDisp("Shirahane","That pause kinda worries me.
...Is my room no good?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
