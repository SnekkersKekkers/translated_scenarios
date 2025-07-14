BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(3,255,1,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040323500_03_000");
MsgDisp("Honda","This really has the haunted house feeling.
I love this kind of atmosphereー.");
MsgSel("It's scary, but fun!","I think I'm unable to stand...","The tricks are too sloppy, no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040323500_03_010");
    MsgDisp("Honda","Yup yup, you know how to have fun!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040323500_03_020");
    MsgDisp("Honda","Ehhh∋
Are you alright? Was it that scary?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040323500_03_030");
    MsgDisp("Honda","Reallyー? The roughness is part of the
charm of this place, isn't it?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
