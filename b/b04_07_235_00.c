BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723500_07_000");
MsgDisp("Mikage","Nice, you made some good noises.");
MsgSel("It was scary, but it was fun!","I thought my legs were gonna give out..","The tricks were too sloppy! No good, no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723500_07_010");
    MsgDisp("Mikage","The tricks were quite intricate too...
I was also scared.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723500_07_020");
    MsgDisp("Mikage","That's dangerous.
Let's hold hands next time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040723500_07_030");
    MsgDisp("Mikage","What are you saying; whilst you're
trembling like that?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
