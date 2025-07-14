BGOpen("wf300",0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030603002_06_000");
MsgDisp("Himuro","There are a lot of things to do here.");
MsgSel("Let's go to the aquarium.","The waterpark is nice","Let's check out the Deep Sea Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B030603002_06_010");
    MsgDisp("Himuro","In that case, let's get going.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B030603002_06_020");
    MsgDisp("Himuro","Wouldn't the park be better somewhere
else?");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B030603002_06_030");
    MsgDisp("Himuro","Yeah, good choice.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
