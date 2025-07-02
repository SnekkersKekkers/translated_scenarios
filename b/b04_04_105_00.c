BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChLayout(1);
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040410500_04_000");
MsgDisp("Nanatsumori","An exquisite world...
It kinda feels like I'm being sucked in.");
MsgSel("I feel like my senses have been sharpened!","It's difficult to understand.","I think even I could make this");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040410500_04_010");
    MsgDisp("Nanatsumori","I get it.
It's important to sharpen your senses
when you come across something nice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040410500_04_020");
    MsgDisp("Nanatsumori","You're supposed to feel, not think?
Give it a try.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040410500_04_030");
    MsgDisp("Nanatsumori","That's a huge claim.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
