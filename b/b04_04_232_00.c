BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040423200_04_000");
MsgDisp("Nanatsumori","Mm. the ferris wheel isnnice.");
MsgSel("You can enjoy a beautiful view♪","It was so nice I fell asleep...","It was high, narrow, and scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040423200_04_010");
    MsgDisp("Nanatsumori","I feel the same.
It's especially beautiful today.
I even forgot to take pictures.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040423200_04_020");
    MsgDisp("Nanatsumori","Well, it is like one big cradle.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040423200_04_030");
    MsgDisp("Nanatsumori","Then this one is a no-go.
Why did you ride it?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
