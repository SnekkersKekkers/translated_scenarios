BGOpen("wf300",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030203001_02_000");
MsgDisp("Sassa","The Water Garden's here.
What should we do?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B030203001_02_010");
    MsgDisp("Sassa","Sounds good for me too.
Well then, let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    VoicePlay("B030203001_02_020");
    MsgDisp("Sassa","Alright.
Let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
