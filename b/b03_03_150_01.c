BGOpen("ne300",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030315000_03_000");
MsgDisp("Honda","Bowling or darts, which do you feel like?");
MsgSel("Let's go bowling","Darts Corner sounds good");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B030315000_03_010");
    MsgDisp("Honda","Yuppers, I think so too.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    MsgDispSksp(1,0);
    VoicePlay("B030315000_03_020");
    MsgDisp("Honda","Alrighty.
It's easy to play, but hard to master.
Surprisingly deep, isn't it?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
