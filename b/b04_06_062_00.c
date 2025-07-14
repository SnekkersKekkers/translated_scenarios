BGOpen("wf610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606200_06_000");
MsgDisp("Himuro","How mysterious...");
MsgSel("The air is so chilly, it feels nice","I wonder if the water is deep here?","The surface of the water shines like a jewel..");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606200_06_010");
    MsgDisp("Himuro","Well, it is a cavern after all.
Most are probably like this.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040606200_06_020");
    MsgDisp("Himuro","What, are you leading up to a joke?
Don't fall in, it'll be a pain if you do.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606200_06_030");
    MsgDisp("Himuro","You're a poet huh. But, I get why you'd
want to express it that way. It's not
enough just to say it's beautiful.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
