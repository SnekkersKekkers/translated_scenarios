BGOpen("wf610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606201_06_000");
MsgDisp("Himuro","It seems like there are grottos like this
outside of Habataki City.");
MsgSel("I'd like to go someday","So this isn't the only one...","Let's enjoy this one first?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606201_06_010");
    MsgDisp("Himuro","You're curious huh. Even they're all blue
grottos, I wonder how they differ. I want
to compare them.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606201_06_020");
    MsgDisp("Himuro","Did you get excited because you thought
this was the only one?
That's unfortunate.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040606201_06_030");
    MsgDisp("Himuro","Definitely. ...Since we're here together
anyways.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
