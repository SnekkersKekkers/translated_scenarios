BGOpen("wf300",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B030303001_03_000");
MsgDisp("Honda","Water Garden's here, huh?
Where do you want to go?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B030303001_03_010");
    MsgDisp("Honda","Okay, it's decided!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030303001_03_020");
    MsgDisp("Honda","Oh, picking that one.
You got it.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
