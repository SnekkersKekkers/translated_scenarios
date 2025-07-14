BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,2,4,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323301_03_000");
MsgDisp("Honda","...Isn't one coming-of-age ceremony in a
lifetime enough?");
MsgSel("This is just a rehearsal, you know?","The jump platform is calling","Next time, just watch without jumping.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,1);
    ChMotion(3,5);
    VoicePlay("B040323301_03_010");
    MsgDisp("Honda","Ehhー, is that necessary?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040323301_03_020");
    MsgDisp("Honda","What in the world is it about bungee
jumping that draws you in so much...?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040323301_03_030");
    MsgDisp("Honda","I see...
Maybe something will change if I observe
it objectively.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
