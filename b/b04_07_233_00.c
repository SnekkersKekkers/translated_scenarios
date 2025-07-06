BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,4,2,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723300_07_000");
MsgDisp("Mikage","W-Who came up with this? ");
MsgSel("I could get used to this thrill!","Hey, that's enough...","It was a very interesting experience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723300_07_010");
    MsgDisp("Mikage","Hey. Are you okay....");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723300_07_020");
    MsgDisp("Mikage","Me too.
Once is enough.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040723300_07_030");
    MsgDisp("Mikage","How can you say something like
that when your voice is like that?
Women are amazing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
