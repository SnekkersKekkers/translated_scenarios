BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0,0,0);
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,8);
ScrFadeIn(0);
VoicePlay("B040723200_07_000");
MsgDisp("Mikage","There's no way you
don't ride this right?");
MsgSel("You can enjoy some beautiful scenery♪","It felt so nice I got sleepy","It was nothing but high, cramped and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    ChEyeOpenLevel(7,8);
    VoicePlay("B040723200_07_010");
    MsgDisp("Mikage","You like the pretty scenery?
I'm glad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723200_07_020");
    MsgDisp("Mikage","I understand the feeling of wanting to
fall asleep.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723200_07_030");
    MsgDisp("Mikage","Wait, wait, then no one was having any
fun?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
