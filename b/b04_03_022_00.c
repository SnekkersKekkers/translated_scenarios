BGOpen("wf221",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B040302200_03_000");
MsgDisp("Honda","Come on, let's sail!");
MsgSel("The sea is truly magnificent, isn't it...","I'd love to go on a round-the-world trip like this, wouldn't you?","Look, that seagull's so cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChSet(3,0);
    VoicePlay("B040302200_03_010");
    MsgDisp("Honda","Yeah, this ship looks impressive when you
see it in the harbour. But once it's out
in the open sea, it's like a leaf on a
tree.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040302200_03_030");
    MsgDisp("Honda","Oh my god, me too!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040302200_03_040");
    MsgDisp("Honda","That's a brown booby.
I wonder if it's found a fish?
That hovering ability, wow!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
