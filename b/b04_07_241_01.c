BGOpen("tr510",0);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
ScrFadeIn(0);
VoicePlay("B040724101_07_000");
MsgDisp("Mikage","Everyone looks so lively～");
MsgSel("It feels nice to be surrounded by nature!","...There's nothing here.","That cow keeps looking this way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040724101_07_010");
    MsgDisp("Mikage","That's right.
I'm sorry for the sheep, but let's get in
the way for a bit and get some fresh air.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040724101_07_020");
    MsgDisp("Mikage","You're not even trying to see anything.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040724101_07_030");
    MsgDisp("Mikage","Maybe it caught Molly's smell on my body?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
