BGOpen("wf620",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606301_06_000");
MsgDisp("Himuro","Be careful not to fall.");
MsgSel("You're a worrywart.","Thank you.","I got i――Aaah!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040606301_06_010");
    MsgDisp("Himuro","It's because of how
you're like normally.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606301_06_020");
    MsgDisp("Himuro","You're welcome.
...Well, I'll help you even
if you were to fall.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040606301_06_030");
    MsgDisp("Himuro","...Isn't your spatial
awareness awful?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
