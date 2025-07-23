BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,4,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040423500_04_000");
MsgDisp("Nanatsumori","Hmm, just the right amount of scary.
I'm content.");
MsgSel("It was scary, but fun!","I think my legs gave out...","The tricks were too soft, no good, no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423500_04_010");
    MsgDisp("Nanatsumori","I feel like I shouted a lot too?
If we both enjoyed being scared, that
means it was worth it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423500_04_020");
    MsgDisp("Nanatsumori","Sorry, I didn't notice.
You can hold onto me next time, okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040423500_04_030");
    MsgDisp("Nanatsumori","Really?
If this got any more realistic, wouldn't
you faint?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
