BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040203100_02_000");
MsgDisp("Sassa","Woah, there are so many......
The aquarium is mimicking the tropical
sea.");
MsgSel("What's the name of that fish?","The patterns on those fish are beautiful▼","Wow∋I feel their stares from behind the rocks……");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    ChEyeOpenLevel(2,8);
    VoicePlay("B040203100_02_010");
    MsgDisp("Sassa","Oi, even I know this one.
Isn't that a clown fish?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040203100_02_020");
    MsgDisp("Sassa","Oh, nice.
That's somewhat girly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,5);
    VoicePlay("B040203100_02_030");
    MsgDisp("Sassa","Ah, you're right.
That's crazy.
Look, they're like a sea gang.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
