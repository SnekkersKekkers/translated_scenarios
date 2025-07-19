BGOpen("fp200",0);
ChLayout(1);
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408402_04_000");
MsgDisp("Nanatsumori","Hmー...it feels super nice today.");
MsgSel("It's a perfectly clear autumn day.","Should we do some exercise?","It's an indian summer.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(4,0,1);
    VoicePlay("B040408402_04_010");
    MsgDisp("Nanatsumori","Right.
The sky is high.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040408402_04_020");
        MsgDisp("Nanatsumori","I won't do that.
Feel free to by yourself?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040408402_04_030");
        MsgDisp("Nanatsumori","Are you serious?");
        MsgDisp("主人公","I'm serious.");
        VoicePlay("B040408402_04_040");
        MsgDisp("Nanatsumori","What do you mean by exercise?");
        MsgDisp("主人公","Umm....
Some light jogging or stretching?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        VoicePlay("B040408402_04_050");
        MsgDisp("Nanatsumori","Then I'll pass.
I do that on a regular basis.");
        MsgDisp("主人公","Eh, is that so?");
        ChMotion(4,0,1);
        VoicePlay("B040408402_04_060");
        MsgDisp("Nanatsumori","I don't...jog everyday though.
If it's necessary for work, I'll also go
to the gym.");
        MsgDisp("主人公","｛七ツ森＊｝, you're amazing.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040408402_04_070");
        MsgDisp("Nanatsumori","Not really.
I knew being a model needed small efforts
even in every day life.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040408402_04_080");
        MsgDisp("Nanatsumori","In a way, it was suited for a homebody
like me.");
        MsgDisp("主人公","Hehe!");
        ChMotion(4,0,1);
        VoicePlay("B040408402_04_090");
        MsgDisp("Nanatsumori","So?
What are you doing?");
        MsgDisp("主人公","Eh?");
        ChEye(4,1);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040408402_04_100");
        MsgDisp("Nanatsumori","We're going to exercise, right? If it's
only a little, I can join you for a bit.
Dash!");
        MsgClose();
        ChClose(4,0,30);
        SEPlay("EV_SE_FOOT_005",1);
        MsgDisp("主人公","Eh∋
｛七ツ森＊｝, wait up～!");
        SEPlay("EV_SE_FOOT_007",0.25);
        SEWait();
        VoicePlay("B040408402_04_110");
        MsgDisp("Nanatsumori","Ahaha!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040408402_04_120");
    MsgDisp("Nanatsumori","Indeed.
Winter will be coming soon.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
