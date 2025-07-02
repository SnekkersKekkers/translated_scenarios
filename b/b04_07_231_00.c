BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,2,0,0,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723100_07_000");
MsgDisp("Mikage","When I ride this,
I feel so powerless.");
MsgSel("That was awesome! I want to ride it again","Uugh, that was scary...","I wanted a little more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,5);
    ChEyeOpenLevel(7,10);
    VoicePlay("B040723100_07_010");
    MsgDisp("Mikage","Hmmm, that might be tough to do.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723100_07_020");
    MsgDisp("Mikage","Hahaha...
...me too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(7,1);
    ChMouth(7,4);
    ChMotion(7,1);
    VoicePlay("B040723100_07_030");
    MsgDisp("Mikage","Are you okay?
Was it so scary that you went crazy?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
