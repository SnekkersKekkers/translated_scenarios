BGOpen("wf610",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B040306200_03_000");
MsgDisp("Honda","Ooh, it's even more blue than I imagined.");
MsgSel("The air feels so nice and cool.","Is the water deep here?","The water's surface shines blue like a jewel...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040306200_03_010");
    MsgDisp("Honda","That's right. It's easy to live here, so
it's become a habitat for living
creatures.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,3);
    VoicePlay("B040306200_03_020");
    MsgDisp("Honda","Let's see～ Wait, isn't this the part
where we both fall in!?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306200_03_030");
    MsgDisp("Honda","Yeah, I get that blue light is the least
absorbed by water in theory, but seeing it
in real life - it's stunningly beautiful!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
