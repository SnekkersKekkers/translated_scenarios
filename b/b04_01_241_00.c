BGOpen("tr510",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ScrFadeIn(0);
ChMotion(1,4);
VoicePlay("B040124100_01_000");
MsgDisp("Kazama","Hey, what are we doing here...");
MsgSel("It feels nice to be surrounded by Mother nature!","....There's nothing here.","That cow keeps looking this way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040124100_01_010");
    MsgDisp("Kazama","Well, we're definitely in the middle of
nature. So, what should we do?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040124100_01_020");
    MsgDisp("Kazama","Yeah, it's a fenced in area with 
a few animals here and there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040124100_01_030");
    MsgDisp("Kazama","Come here, get behind me.
It'll be dangerous if that thing
comes charging over here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
