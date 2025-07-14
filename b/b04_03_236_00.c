BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(3,5);
ChMouth(3,1);
ChMotion(3,5,1);
ScrFadeIn(0);
VoicePlay("B040323600_03_000");
MsgDisp("Honda","Urkー, we got a late start!
It's already filled with peopleー.");
MsgSel("Let's just enjoy the atmosphere!","We should be able to get a little further forward...","It can't be helped, so let's just give up");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040323600_03_010");
    MsgDisp("Honda","Yep yep.
We can still have a good time from here!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(3,1);
    ChMouth(3,1);
    ChMotion(3,1);
    VoicePlay("B040323600_03_020");
    MsgDisp("Honda","Hey. If everyone crowds in from the back,
the people at the front will be in danger.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040323600_03_030");
    MsgDisp("Honda","There's no need to give up.
Come on, let's enjoy the whole thing, the
big crowd included!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
