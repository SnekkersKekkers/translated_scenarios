BGOpen("wf221",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040402200_04_000");
MsgDisp("Nanatsumori","There's a nice wind blowing.
It feels nice.");
MsgSel("The sea really is grand...","I'd like to travel around the world like this?","Look, that seabird is cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040402200_04_010");
    MsgDisp("Nanatsumori","Well, I wouldn't say grand, but it is big.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040402200_04_020");
    MsgDisp("Nanatsumori","Sounds nice. I want to see it for myself
and not from a picture in a guide book. I
want to take pictures of nice things.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040402200_04_030");
    MsgDisp("Nanatsumori","That was kinda sly.
There's no need for the heart mark at the
end of your sentence.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
