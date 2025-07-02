BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723101_07_000");
MsgDisp("Mikage","It makes no difference whether 
I sit in the front, back or middle right?");
MsgSel("The front is the best, ultimately!","The back is surprisingly scary!","It's all the same if you close your eyes!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723101_07_010");
    MsgDisp("Mikage","Nice.
It's the same for me anywhere.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,1);
    ChMotion(7,3);
    VoicePlay("B040723101_07_020");
    MsgDisp("Mikage","So you can have fun
anywhere, hey?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040723101_07_030");
    MsgDisp("Mikage","I see, that might be worth a try.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
