BGOpen("fp200",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040408500_04_000");
MsgDisp("Nanatsumori","My breath is white...");
MsgSel("It's cold, isn't it?","My breath is white too...","Shall I warm you up?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,#1);
    VoicePlay("B040408500_04_010");
    MsgDisp("Nanatsumori","It's even colder today...
Let's go somewhere warm quickly.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040408500_04_020");
    MsgDisp("Nanatsumori","Of course.
If pink breath came out of you, 
I would take a picture right away.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChCheek(4,8);
    VoicePlay("B040408500_04_030");
    MsgDisp("Nanatsumori","No...
That warmed me up from 
the core just now.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
