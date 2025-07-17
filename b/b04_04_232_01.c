BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423201_04_000");
MsgDisp("Nanatsumori","Alright.
I got some good pictures.");
MsgSel("Really? Show me?","Look at the view instead of taking pictures!","Can you take some of me too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423201_04_010");
    MsgDisp("Nanatsumori","OK, I'll share.
Can you also let me know what you think?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040423201_04_020");
    MsgDisp("Nanatsumori","I'll also take some pictures after looking
at a nice view.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423201_04_030");
    MsgDisp("Nanatsumori","Actually... I took one, secretly. Because
you were making such a nice expression.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
