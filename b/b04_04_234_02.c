BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,1,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("B040423402_04_000");
MsgDisp("Nanatsumori","You...you're spinning the handle too much.");
MsgSel("Are you dizzy?","I wanted to make ｛七ツ森＊｝ dizzy","That's what the handle is for!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040423402_04_010");
    MsgDisp("Nanatsumori","Well, a little.");
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
        ChMotion(4,0,1);
        VoicePlay("B040423402_04_020");
        MsgDisp("Nanatsumori","What are you saying?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040423402_04_030");
        MsgDisp("Nanatsumori","You don't need to do that, my head is
already spinning.");
        MsgDisp("主人公","Are you tired?");
        ChEye(4,0);
        ChMouth(4,0);
        VoicePlay("B040423402_04_040");
        MsgDisp("Nanatsumori","No.");
        MsgDisp("主人公","Then, did you not get enough sleep?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040423402_04_050");
        MsgDisp("Nanatsumori","No.");
        MsgDisp("主人公","Hmm, then...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423402_04_060");
        MsgDisp("Nanatsumori","......");
        MsgDisp("主人公","? Why are you laughing?");
        ChMotion(4,0,1);
        VoicePlay("B040423402_04_070");
        MsgDisp("Nanatsumori","I wonder why?");
        MsgDisp("主人公","Somehow, ｛七ツ森＊｝, looks a bit
mean...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423402_04_080");
        MsgDisp("Nanatsumori","Really?
My head is spinning right now.
And it's because of you.");
        MsgDisp("主人公","(???)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423402_04_090");
    MsgDisp("Nanatsumori","Got it, got it.
That's definitely true.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
