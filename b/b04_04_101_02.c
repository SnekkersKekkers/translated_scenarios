BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040410102_04_000");
MsgDisp("Nanatsumori","You're looking around eagerly.
Is it interesting?");
MsgSel("Yeah, it's interesting!","Sorry, are you bored?","Shall we look at it together?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040410102_04_010");
        MsgDisp("Nanatsumori","Ahh, right.
...Looks like this'll take a while.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040410102_04_020");
        MsgDisp("Nanatsumori","Ahh, right.
I've been defeated...");
        MsgDisp("主人公","Is it not interesting for you,
｛七ツ森＊｝?");
        ChEye(4,1);
        ChMouth(4,1);
        ChEyeOpenLevel(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040410102_04_030");
        MsgDisp("Nanatsumori","Hmー.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040410102_04_040");
        MsgDisp("Nanatsumori","To be honest, yeah it's not.");
        MsgDisp("主人公","I see.
Sorry, I'm the only one having fun here...");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040410102_04_050");
        MsgDisp("Nanatsumori","It's fine.
You're having fun, right?");
        MsgDisp("主人公","Yeah.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040410102_04_060");
        MsgDisp("Nanatsumori","...Alright!
Then, how about you be my teacher and show
me how to enjoy this?");
        MsgDisp("主人公","Eh?");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040410102_04_070");
        MsgDisp("Nanatsumori","You're enjoying it.
I find it boring.");
        ChEye(4,0);
        ChMouth(4,4);
        VoicePlay("B040410102_04_080");
        MsgDisp("Nanatsumori","Then, since you know the trick to enjoying
it, if you lead, we can find common
ground, right?");
        MsgDisp("主人公","If we could, that would be great but...
Is it really okay for me to be teacher?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040410102_04_090");
        MsgDisp("Nanatsumori","It's fine.
If you would please, Sensei.");
        MsgDisp("主人公","...All right.
Then, please form a line and follow me.");
        ChEye(4,4);
        ChMouth(4,5);
        ChMotion(4,1,1);
        VoicePlay("B040410102_04_100");
        MsgDisp("Nanatsumori","You're coming for me from that angle∋");
        MsgDisp("主人公","(Hehe!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040410102_04_110");
    MsgDisp("Nanatsumori","Well...yeah, actually.
Can you show me how to enjoy this?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(4,0,1);
    VoicePlay("B040410102_04_120");
    MsgDisp("Nanatsumori","I am with you and looking at it though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
