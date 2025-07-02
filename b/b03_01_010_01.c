BGOpen("wf100",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030101001_01_000");
MsgDisp("Kazama","What do you want to see?");
MsgDisp("主人公","Umm...");
MsgSel("How about that store?","Sky lounge sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B030101001_01_010");
    MsgDisp("Kazama","You seem to like that place.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,3);
    VoicePlay("B030101001_01_020");
    MsgDisp("Kazama","You got it.
Well, let's be off.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
