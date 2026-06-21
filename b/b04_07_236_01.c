MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040723601_07_000");
MsgDisp("Mikage","Habataki Land really brought its A-game.");
MsgSel("It's gorgeous, isn't it?","Their dance is amazing!!","The atmosphere at night is also wonderful!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040723601_07_010");
    MsgDisp("Mikage","The dancers' costumes are intricate too...
The overall theme is a bit of a
mystery, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723601_07_020");
    MsgDisp("Mikage","Are they staff here?
They look like professional dancers.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040723601_07_030");
    MsgDisp("Mikage","Yeah, the nighttime makes a huge
difference.
It gets you pumped no matter what.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
