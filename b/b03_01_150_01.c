BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030115000_01_000");
MsgDisp("Kazama","Alright, what are you feeling like doing
today?");
MsgSel("Let's go bowling.","Darts Corner sounds good.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030115000_01_010");
    MsgDisp("Kazama","Alright, let's get some rental shoes.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030115000_01_020");
    MsgDisp("Kazama","That's fine, but don't throw it the wrong
way, okay?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
