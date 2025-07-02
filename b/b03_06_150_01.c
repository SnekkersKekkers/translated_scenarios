BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030615000_06_000");
MsgDisp("Himuro","Bowling or darts. Where to?");
MsgSel("Let's go bowling","I like darts");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B030615000_06_010");
    MsgDisp("Himuro","Got it.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B030615000_06_020");
    MsgDisp("Himuro","I thought as much.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
