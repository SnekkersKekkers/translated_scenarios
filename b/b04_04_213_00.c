BGOpen("tr220",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421300_04_000");
MsgDisp("Nanatsumori","Ha...
how soothing...");
MsgSel("Both their appearance and sounds are cute","I wonder if it's alright to hold them?","I can feel the arrogance of mankind...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMotion(4,1,1);
    VoicePlay("B040421300_04_010");
    MsgDisp("Nanatsumori","Right...
They way they look when they come 
up to you... they're like angels.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("B040421300_04_020");
    MsgDisp("Nanatsumori","Try it.
Look, that kitty over there, 
is just waiting to be held?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040421300_04_030");
    MsgDisp("Nanatsumori","...Uh-huh?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
