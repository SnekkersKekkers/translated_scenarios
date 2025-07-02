BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040306101_03_000");
MsgDisp("Honda","Watch your step, okay?");
MsgSel("The sand's getting hot.","There are pieces of glass and stones around.","There might be people buried in the sand.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040306101_03_010");
    MsgDisp("Honda","Yeah, it's getting close to 70 degrees. 
Be careful of burns.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMouth(3,4);
    VoicePlay("B040306101_03_020");
    MsgDisp("Honda","That's right, there might be trash around.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306101_03_030");
    MsgDisp("Honda","Haha, yeah, I've seen several people
buried up to their whole bodies, for sure.
Be careful not to step on them!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
