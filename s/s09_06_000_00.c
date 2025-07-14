BGOpen("ex050",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(6,255,4,0,0,8,#1,0,0);
    VoicePlay("S090600000_06_000");
    MsgDisp("Himuro","What's with that crowd of people?");
    MsgDisp("主人公","They're doing fortune telling.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S090600000_06_010");
    MsgDisp("Himuro","Aah.
......Would you like to draw one?");
    MsgSel("Let's do it","Let's not, it's crowded");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("S090600000_06_020");
        MsgDisp("Himuro","I shouldn't have asked......");
        MsgDisp("主人公","Eh, what?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("S090600000_06_030");
        MsgDisp("Himuro","It's nothing.
Let's get in line quickly.");
        MsgDisp("主人公","(I hope we get good results!)");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        break ;
        case 1:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("S090600000_06_040");
        MsgDisp("Himuro","That's a wise decision.
Let's go home then.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 3:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Wow......
That's a lot of people.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S090600000_06_050");
    MsgDisp("Himuro","Really. Next year it may be better to come
visit at a later time.");
    MsgDisp("主人公","After this, let's......
Ah, fortune telling.");
    MsgSel("Let's do it","Let's not, it's crowded");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("S090600000_06_060");
        MsgDisp("Himuro","......is the line really long?");
        MsgDisp("主人公","You don't want to?");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("S090600000_06_070");
        MsgDisp("Himuro","It's fine.
Since we've come all the way here, I might
as well go with you.");
        MsgDisp("主人公","Thank you!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        break ;
        case 1:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("S090600000_06_080");
        MsgDisp("Himuro","That's a wise decision.
You don't need fortune telling, make your
own fortune.");
        MsgDisp("主人公","That's just like ｛氷室＊＊｝.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("S090600000_06_090");
        MsgDisp("Himuro","I'm not going to stop you from doing it.
Well then, let's go.");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    ChLayout(1);
    ScrFadeIn(0);
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Thank you for holding my hand.
I think I'm okay now.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S090600000_06_100");
    MsgDisp("Himuro","Eh......Oh, okay.");
    MsgDisp("主人公","It's about time to go home.
......Ah, fortune telling.");
    MsgSel("Let's do it","Let's not, it's crowded");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("S090600000_06_110");
        MsgDisp("Himuro","Okay. I can't say no when you look at me
like that.");
        MsgDisp("主人公","Yay!");
        MsgDisp("主人公","(I hope we get
a good result......!)");
        break ;
        case 1:
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("S090600000_06_120");
        MsgDisp("Himuro","Are you okay not with not getting your
Fortune?");
        MsgDisp("主人公","Yeah, I'm getting tired.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("S090600000_06_130");
        MsgDisp("Himuro","I think today was our only chance to get
one.");
        MsgDisp("主人公","(Hmm, that's true......
Maybe I should have gotten one.)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
