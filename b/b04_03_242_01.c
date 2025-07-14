BGOpen("tr520",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040324201_03_000");
MsgDisp("Honda","Tent set up!");
MsgSel("I might want to live here?","Let's greet the neighbors!","It's like a secret base, I'm getting excited");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040324201_03_010");
    MsgDisp("Honda","Yep yep.
I want to try surviving for realー!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040324201_03_020");
    MsgDisp("Honda","Hmm, I don't think the neighbors would
want that either");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324201_03_030");
    MsgDisp("Honda","Yeah, yeah, that's good.
Today, let's imagine it's a secret
research facility.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
