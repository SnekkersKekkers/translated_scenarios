BGOpen("fp200",0);
ChLayout(1);
ChNanaType(#1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408502_04_000");
MsgDisp("Nanatsumori","Hmmmー...... Don't you want something
warm?");
MsgSel("Some hot chocolate would be nice.","Am I not warm enough?","A steaming meat bun...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040408502_04_010");
    MsgDisp("Nanatsumori","Nice! I wonder if there's a place around
here that does hot chocolate.");
    MsgDispSksp(1,8);
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
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040408502_04_020");
        MsgDisp("Nanatsumori","...Hey.
Do you usually say those things?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,5);
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChCheek(4,5);
        VoicePlay("B040408502_04_030");
        MsgDisp("Nanatsumori","You...");
        MsgDisp("主人公","Like hugging, or pressing up close, things
like that?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        ChCheek(4,0);
        VoicePlay("B040408502_04_040");
        MsgDisp("Nanatsumori","Ahh, 
you meant that kinda thing...");
        ChEye(4,5);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChCheek(4,8);
        VoicePlay("B040408502_04_050");
        MsgDisp("Nanatsumori","∋
...H-Hugging? Is that okay?");
        MsgDisp("主人公","It's a bit embarrassing but, I don't have
any hand warmers or anything like that.
And ｛七ツ森＊｝ is sensitive to the
cold.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChCheek(4,10);
        VoicePlay("B040408502_04_060");
        MsgDisp("Nanatsumori","Eh...well, I 
am sensitive to the cold.");
        ChEye(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040408502_04_070");
        MsgDisp("Nanatsumori","...I'm really gonna do it?");
        MsgDisp("主人公","Y-Yeah.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(4,0,30);
        MsgClose();
        SEPlay("EV_SE_551",0.5,0.4,0.7);
        ChLayout(0);
        ChNanaType(#1);
        ChOpen(4,255,0,0,0,0,0,10,0,0,60);
        ScrQuake(0);
        VoicePlay("B040408502_04_080");
        MsgDisp("Nanatsumori","............");
        MsgDisp("主人公","............");
        VoicePlay("B040408502_04_090");
        MsgDisp("Nanatsumori","............");
        MsgDisp("主人公","Umm...
Are you warm?");
        ChMouthOpenLevel(4,#1);
        VoicePlay("B040408502_04_100");
        MsgDisp("Nanatsumori","Yeah.");
        MsgDisp("主人公","I'm glad.");
        ChEyeOpenLevel(4,#1);
        VoicePlay("B040408502_04_110");
        MsgDisp("Nanatsumori","...This isn't good.");
        MsgDisp("主人公","Eh?");
        SEPlay("EV_SE_552",0,0.1);
        ScrQuake(0);
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.7,0.3);
        ChClose(4,0,30);
        MsgClose();
        ChLayout(1);
        ChNanaType(#1);
        ChOpen(4,255,0,0,0,#1,#1,10,0,0,60);
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040408502_04_120");
        MsgDisp("Nanatsumori","Conclusion. This rapid rise in body
temperature can cause serious physical and
mental errors.");
        MsgDisp("主人公","???");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040408502_04_130");
    MsgDisp("Nanatsumori","Ahー.... I can't stand it when you give a
specific example.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
