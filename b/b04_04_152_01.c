BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040415201_04_000");
MsgDisp("Nanatsumori","A girl holding a dart.
...It's kind of cool.");
MsgSel("Does the form look good?","I'm getting shy...","Shh, be quiet!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415201_04_010");
    MsgDisp("Nanatsumori","Yeah, perfect.
You've got style.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415201_04_020");
    MsgDisp("Nanatsumori","Plus some shyness.
I can't take my eyes off her.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040415201_04_030");
    MsgDisp("Nanatsumori","Please forgive meー...");
    ChEyeOpenLevel(4,-1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
