BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040203300_02_000");
MsgDisp("Sassa","That's the world's biggest crab.
It looks kind of like an alien.");
MsgSel("It's long limbs are scary","I wonder if you can eat it?","Looks straight out of a scifi movie");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040203300_02_010");
    MsgDisp("Sassa","Yeah, it's very relatable to me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("B040203300_02_020");
    MsgDisp("Sassa","Uh, it says that it's edible.
... 20 Rich per cup∋
Luxury ingredients.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3,1);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040203300_02_030");
    MsgDisp("Sassa","That's true!
The legs look like antenna.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
