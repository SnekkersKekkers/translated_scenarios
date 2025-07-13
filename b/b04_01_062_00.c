BGOpen("wf610",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106200_01_000");
MsgDisp("Kazama","Whoa, it's pretty big inside here.");
MsgSel("The air is cool, and feels good","Is the water deep here?","The water's surface glows like a blue jewel...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040106200_01_010");
    MsgDisp("Kazama","Really?
I think it just feels damp.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,2);
    VoicePlay("B040106200_01_020");
    MsgDisp("Kazama","I wonder.
Isn't it blue because it's transparent,
not because it's deep?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040106200_01_030");
    MsgDisp("Kazama","Yeah, it looks like a pretty sapphire.
Colored stones are rare, and deep blue
ones are especially gorgeous.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
