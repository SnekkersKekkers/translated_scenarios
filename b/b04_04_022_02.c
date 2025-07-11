BGOpen("wf221",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3);
ScrFadeIn(0);
VoicePlay("B040402202_04_000");
MsgDisp("Nanatsumori","There are things that a photograph 
can't depict within a 360 degree 
panorama after all...");
MsgSel("You can't experience it with a photograph","It's all about photos...","Maybe it's an issue with your technique, ｛七ツ森＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040402202_04_010");
    MsgDisp("Nanatsumori","Right, right.
No matter how you edit it, and make
it beautiful, there's no sea breeze
blowing from a photograph.");
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
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("B040402202_04_020");
        MsgDisp("Nanatsumori","Ha?
Why are you sulking?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("B040402202_04_030");
        MsgDisp("Nanatsumori","You're sulking? ");
        MsgDisp("主人公","I mean... 
We came out all this way 
together after all.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040402202_04_040");
        MsgDisp("Nanatsumori","…………");
        ChMouth(4,2);
        VoicePlay("B040402202_04_050");
        MsgDisp("Nanatsumori","It's a date, right?
That's right. I'm sorry.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040402202_04_060");
        MsgDisp("Nanatsumori","Hey.
Do you want to take a picture?");
        MsgDisp("主人公","Eh?");
        ChEye(4,0);
        ChMouth(4,4);
        VoicePlay("B040402202_04_070");
        MsgDisp("Nanatsumori","Let's take a picture
together, the two of us.");
        ChEye(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040402202_04_080");
        MsgDisp("Nanatsumori","Of course, it won't be for social media, 
just for private use.");
        MsgDisp("主人公","Is that okay?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040402202_04_090");
        MsgDisp("Nanatsumori","It's okay.
But, that adds another secret 
that's between us.");
        MsgDisp("主人公","Hehe!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(4,0,30);
        ChLayout(0);
        ChNanaType(-1);
        ChOpen(4,255,0,0,3,-1,-1,0,0,0,60);
        SEWait();
        VoicePlay("B040402202_04_100");
        MsgDisp("Nanatsumori","Nice, keep that expression on...");
        SEPlay("EV_SE_041");
        MsgDisp("","(*CLICK*)");
        MsgClose();
        ChClose(4,0,30);
        ChLayout(1);
        ChNanaType(-1);
        ChOpen(4,255,0,0,3,-1,-1,0,0,0,30);
        ScrFadeIn(0,60);
        ChMotion(4,3,1);
        VoicePlay("B040402202_04_110");
        MsgDisp("Nanatsumori","I got a great one.");
        MsgDisp("主人公","Thank you!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040402202_04_120");
    MsgDisp("Nanatsumori","You're harsh.
Well, I'm not a pro in that field.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
