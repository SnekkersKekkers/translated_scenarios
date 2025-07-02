BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
ScrFadeIn(0);
VoicePlay("B030415000_04_000");
MsgDisp("Nanatsumori","Bowling or darts,
which do you want to do?");
MsgSel("Let's go bowling","Darts corner sounds good");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B030415000_04_010");
    MsgDisp("Nanatsumori","You got it.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B030415000_04_020");
    MsgDisp("Nanatsumori","ＯＫ.
Let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
