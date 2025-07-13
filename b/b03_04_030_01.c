BGOpen("wf300",0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
VoicePlay("B030403001_04_000");
MsgDisp("Nanatsumori","Phone's all charged up, ＯＫ.
So. Where do you want to go?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030403001_04_010");
    MsgDisp("Nanatsumori","ＯＫ.
Hopefully there's a new section to see.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B030403001_04_020");
    MsgDisp("Nanatsumori","Agreed.
I knew you'd get it.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
