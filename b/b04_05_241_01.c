BGOpen("tr510",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524101_05_000");
MsgDisp("Hiiragi","There was a sign at the entrance reporting
that a \"lamb was born.\"");
MsgSel("I want to eat some extra rich farm ice cream","Let's hold one and take a picture","I wonder if lots were born?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040524101_05_010");
    MsgDisp("Hiiragi","Let's do that first.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040524101_05_020");
    MsgDisp("Hiiragi","Yeah...
both things would be cute.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040524101_05_030");
    MsgDisp("Hiiragi","Yeah there's not enough information on
that poster.
Let's go and check it out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
