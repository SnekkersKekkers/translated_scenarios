BGOpen("fp420",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,2);
VoicePlay("B040510200_05_000");
MsgDisp("Hiiragi","It must be something worthwhile...");
MsgSel("I don't get it though...","Should we ride it for a bit?","It's a big bike huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040510200_05_010");
    MsgDisp("Hiiragi","Yes, me too. If I think of anything and
everything as improving my art, and I'll
learn something new?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040510200_05_020");
    MsgDisp("Hiiragi","It's dangerous.
It'll be disastrous if you fall over.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040510200_05_030");
    MsgDisp("Hiiragi","Heheh, yes, I was thinking the exact same
thing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
