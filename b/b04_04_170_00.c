BGOpen("ne340",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040417000_04_000");
MsgDisp("Nanatsumori","Settings complete.
Well, let the stage curtains rise!");
MsgSel("I want to hear ｛七ツ森＊｝'s beautiful voice","Let's do a duet together","Please listen to my song");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040417000_04_010");
    MsgDisp("Nanatsumori","OK.
Feel free to put in any requests.
I think mostly anything goes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040417000_04_020");
    MsgDisp("Nanatsumori","Nice!
I'll leave the song choice to you.
I wonder what you'll pickー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040417000_04_030");
    MsgDisp("Nanatsumori","Go ahead, go ahead.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
