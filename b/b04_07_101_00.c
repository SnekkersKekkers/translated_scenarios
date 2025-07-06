BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040710100_07_000");
MsgDisp("Mikage","Listen up, okay? Even in the permanent
exhibits, if you look hard enough, you'll
discover something! We're here anyways,
Let's go find something and go home.");
MsgSel("That mask looks like ｛御影＊＊｝!","Can I really see Habataki City's history in a new light...?","I'll try for real next time!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040710100_07_010");
    MsgDisp("Mikage","It definitely looks like my old man back
home.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040710100_07_020");
    MsgDisp("Mikage","Do your best. Nice fight!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040710100_07_030");
    MsgDisp("Mikage","Okay, you can only pass 
three times.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
