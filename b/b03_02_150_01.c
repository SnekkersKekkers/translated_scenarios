BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030215000_02_000");
MsgDisp("Sassa","Bowling or darts,
which do you want to do?");
MsgSel("Let's go bowling","Darts corner sounds good");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    VoicePlay("B030215000_02_010");
    MsgDisp("Sassa","Alright!
My high score is 300!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3,1);
    VoicePlay("B030215000_02_020");
    MsgDisp("Sassa","Sounds good.
Want to make a contest of it?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
