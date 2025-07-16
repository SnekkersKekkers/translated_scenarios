BGOpen("wf221",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040402201_04_000");
MsgDisp("Nanatsumori","The sunset would look amazing from here.");
MsgSel("The world will be dyed in orange, huh?","Shall we come again during golden hour?","Let's enjoy the now!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040402201_04_010");
    MsgDisp("Nanatsumori","Yeah. Seems like we can enjoy a
multi-color world until the sun sinks
under the horizon.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040402201_04_020");
    MsgDisp("Nanatsumori","Haha, will you come with me? If there's
another opportunity, definitely. Thank
you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040402201_04_030");
    MsgDisp("Nanatsumori","Fair.
Let's do that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
