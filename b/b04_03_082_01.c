BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
ChMouth(3,0);
ChMotion(3,3);
ChMotion(3,3);
VoicePlay("B040308201_03_000");
MsgDisp("Honda","It's not just fireflies, 
but soon other insects will
start moving soon too.");
MsgSel("Eh, that's a bit scary","Are the fireflies preparing their light?","I wonder if the hasty fireflies will emerge.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040308201_03_010");
    MsgDisp("Honda","Why are girls so afraid of bugs?
Even my sister used to be okay was it...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040308201_03_020");
    MsgDisp("Honda","Yep yep, but
fireflies start glowing when they're eggs.
It's a weak light, but amazing!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("B040308201_03_030");
    MsgDisp("Honda","In fireflies, the males emerge first, 
so maybe the males are the hasty ones.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
