BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040710101_07_000");
MsgDisp("Mikage","If you bring up field trips, this place is
unavoidable.
Let's get through this together!");
MsgSel("We'll make new discoveries!","This place is already...","The permanent exhibits are the true thrill of the museum.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040710101_07_010");
    MsgDisp("Mikage","That's right.
Whether we enjoy it or not depends on us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040710101_07_020");
    MsgDisp("Mikage","I know. But Vice Principal Himuro is the
one who threw it in here. Please forgive
this helpless teacher～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040710101_07_030");
    MsgDisp("Mikage","You've saved me～
I leave it to you for today!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
