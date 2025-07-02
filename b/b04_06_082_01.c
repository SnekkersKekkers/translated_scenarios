BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040608201_06_000");
MsgDisp("Himuro","You can even see fireflies
here in the summer.");
MsgSel("Even if you bring up summer...","I want to see it together.","The water is pretty huh.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608201_06_010");
    MsgDisp("Himuro","It was just a bit of idle chatter though?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608201_06_020");
    MsgDisp("Himuro","It's at night, so that's a big ask...
Well, if we get the chance okay.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608201_06_030");
    MsgDisp("Himuro","That's rare nowadays isn't it?
It's like an oasis in the city.
There's also not that much people, 
so it's a real hidden spot.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
