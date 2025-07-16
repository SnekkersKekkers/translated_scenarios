BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603300_06_000");
MsgDisp("Himuro","There's not a lot of people.");
MsgSel("Maybe it's not popular?","We can take our time to look around","It's good we have the place to ourselves, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040603300_06_010");
    MsgDisp("Himuro","It's worth seeing, and the space is
designed intricately... Maybe they're bad
at advertising themselves?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603300_06_020");
    MsgDisp("Himuro","Well, that's true. well, we're here
anyways, might as well take it easy here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040603300_06_030");
    MsgDisp("Himuro","Aren't you being too arrogant?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
