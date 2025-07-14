BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,2,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B040523501_05_000");
MsgDisp("Hiiragi","I'd love to have the honour of producing
something like this.");
MsgSel("It seems like it'll be a wonderful haunted house.","A Haunted House by Habataki Theater Troupe?","If it's ｛柊＊＊＊｝, the ghost would be too pretty.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040523501_05_010");
    MsgDisp("Hiiragi","Heheheh.... I'll let you experience real
fear.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523501_05_020");
    MsgDisp("Hiiragi","Yeah, that would be nice.
It would be interesting to incorporate
components of a ghost story into a play.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040523501_05_030");
        MsgDisp("Hiiragi","Who would act as a ghost?
I said I would be a producer...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523501_05_040");
        MsgDisp("Hiiragi","Thank you.
But beauty and fear aren't that far apart.");
        ChEye(5,4);
        ChMouth(5,0);
        ChMotion(5,1);
        VoicePlay("B040523501_05_050");
        MsgDisp("Hiiragi","That's why...
A perfect beauty would be terrifying...");
        MsgDisp("主人公","Umm...｛柊＊＊＊｝?");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523501_05_060");
        MsgDisp("Hiiragi","...Were you surprised?");
        MsgDisp("主人公","Hey, that was a little scary.");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040523501_05_070");
        MsgDisp("Hiiragi","I'm sorry.
But, what I said was genuine.");
        MsgDisp("主人公","A perfect beauty would be terrifying?");
        ChEye(5,0);
        ChMotion(5,0);
        VoicePlay("B040523501_05_080");
        MsgDisp("Hiiragi","...Yes. So to me, you are much scarier
than this haunted house.");
        MsgDisp("主人公","Ehh?");
        ChEye(5,4);
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040523501_05_090");
        MsgDisp("Hiiragi","Hmm, but you're a mix of fun and cuteness,
so I guess you're not that scary after
all.");
        MsgDisp("主人公","Umm, there's no need
for the \"fun\" part.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
