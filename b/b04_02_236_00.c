MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040223600_02_000");
MsgDisp("Sassa","Uwah... it's packed.
Can you see the parade properly?");
MsgSel("I'm happy even with just the atmosphere","Is there a better place to view it from?","Can I ride on your shoulder?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223600_02_010");
    MsgDisp("Sassa","That's what I like about you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223600_02_020");
    MsgDisp("Sassa","It's more or less the same everywhere.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    ChCheek(2,10);
    VoicePlay("B040223600_02_030");
    MsgDisp("Sassa","...Eh?
Hey, I'll take you seriously, you know.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
