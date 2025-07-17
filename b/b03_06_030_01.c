BGOpen("wf300",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030603001_06_000");
MsgDisp("Himuro","Waterpark, huh...");
MsgSel("Let's go to the aquarium.","The waterpark sounds nice");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B030603001_06_010");
    MsgDisp("Himuro","I guess it's harmless.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,2);
    VoicePlay("B030603001_06_020");
    MsgDisp("Himuro","I had a feeling...");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
