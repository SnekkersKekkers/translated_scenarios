BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040509001_05_000");
MsgDisp("Hiiragi","There are both butterflies and insects.");
MsgSel("They're meals for the carnivorous plants.","It's because pollination is necessary","The big fireflies give off a dodgy vibe");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("B040509001_05_010");
    MsgDisp("Hiiragi","Not everything is right?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040509001_05_020");
    MsgDisp("Hiiragi","I see, I have learned something new.
A small ecosystem has been created within
this establishment.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040509001_05_030");
    MsgDisp("Hiiragi","Heheh, I understand.
When a big butterfly lands on your face,
it looks like a masquerade ball.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
