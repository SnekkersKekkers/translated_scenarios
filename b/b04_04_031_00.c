BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ScrFadeIn(0);
VoicePlay("B040403100_04_000");
MsgDisp("Nanatsumori","Where do we start?
... Where are you looking?");
MsgSel("What was that fish's name?","Tropical fish have beautiful patterns","Ha∋I feel like something is looking at me from behind the rock");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040403100_04_010");
    MsgDisp("Nanatsumori","Was it a yellowtail clown fish? Ah... not
quite. It's a common clownfish. I like
their coloring.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040403100_04_020");
    MsgDisp("Nanatsumori","Yeah.
The pure color is exquisite.
It's super stimulating.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040403100_04_030");
    MsgDisp("Nanatsumori","Maybe there's a moray eel in there—— ...
All I can see is your reflection in the
glass.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
