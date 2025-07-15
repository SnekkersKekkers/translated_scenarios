BGOpen("tr120",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040520002_05_000");
MsgDisp("Hiiragi","T-The wind is strong, huh...");
MsgSel("｛柊＊＊＊｝, are you alright?","We should take a lift down after all","Let's glide down slowly.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040520002_05_010");
    MsgDisp("Hiiragi","...Yes, maybe.
I should improve a little huh?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,0);
        VoicePlay("B040520002_05_020");
        MsgDisp("Hiiragi","Your kindness just
now is unnecessary.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,1);
        VoicePlay("B040520002_05_030");
        MsgDisp("Hiiragi","I can't bear the humiliation of having you
take the lift back.");
        ChMotion(5,2);
        VoicePlay("B040520002_05_040");
        MsgDisp("Hiiragi","Phew, let's go.");
        MsgDisp("主人公","Eh, is that okay?");
        ChEye(5,0);
        VoicePlay("B040520002_05_050");
        MsgDisp("Hiiragi","Here goes!");
        MsgClose();
        SEPlay("EV_SE_536");
        ChClose(5,0,30);
        MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
        VoicePlay("B040520002_05_060");
        MsgDisp("Hiiragi","Uuwahhー!");
        MsgClose();
        ScrFadeOut(0,0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        BGOpen("tr110",0);
        MsgClose();
        SEPlay("EV_SE_564",0.2);
        ChOpen(5,32,3,2,4,#1,#1,0,0);
        SEWait();
        ScrFadeIn(0);
        VoiceEVSPlay(5);
        VoicePlay("B040520002_05_070");
        MsgDisp("Hiiragi","｛主人公｝, we somehow managed to get
back.");
        MsgDisp("主人公","Hehe, yeah.
That was close, but you looked cool.");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040520002_05_080");
        MsgDisp("Hiiragi","You're laughing yes?
Well, I also thought it was funny midway,
and started laughing.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040520002_05_090");
        MsgDisp("Hiiragi","It's a miracle we didn't fall.");
        MsgDisp("主人公","Yeah, we did well.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040520002_05_100");
        MsgDisp("Hiiragi","If you believe in me, I feel like I can do
anything.");
        MsgDisp("主人公","(｛柊＊＊＊｝, who does even the things
he's bad at earnestly is so cool...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040520002_05_110");
    MsgDisp("Hiiragi","Yes, if you're afraid of getting injured,
you can't do anything.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
