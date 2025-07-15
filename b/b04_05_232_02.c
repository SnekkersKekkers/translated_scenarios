BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,2,0,2,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523202_05_000");
MsgDisp("Hiiragi","\"Ferris wheel fortune telling\"...?
Do you know it?");
MsgSel("Sounds interesting! Should we try it?","Would pink be the winning color?","Is it predicted by the colour of the gondola?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    VoicePlay("B040523202_05_010");
    MsgDisp("Hiiragi","Umm, the gondola we rode on just now was
yellow, so....
Today we'll have good economic fortune?");
    MsgDispSksp(1,0);
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
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040523202_05_020");
        MsgDisp("Hiiragi","Hmm... It's not a lottery, since there's
no hit or miss?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,0);
        VoicePlay("B040523202_05_030");
        MsgDisp("Hiiragi","Hmm, if two people ride in a pink one,
that indicates a fortune of love...");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523202_05_040");
        MsgDisp("Hiiragi","Shall we line up again?");
        MsgDisp("主人公","Yeah, okay.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
        MsgClose();
        ScrFadeOut(0,0);
        SEWait();
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        SEPlay("EV_SE_AMUSE_006");
        SEWait();
        SEPlay("EV_SE_AMUSE_002");
        BGOpen("tr431",0);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        ChEyeOpenLevel(5,0);
        ChLayout(1);
        ScrFadeIn(0);
        VoicePlay("B040523202_05_050");
        MsgDisp("Hiiragi","...Pft.");
        MsgDisp("主人公","Hehe, it was yellow huh?");
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040523202_05_060");
        MsgDisp("Hiiragi","It's not a lottery, since there's no hit
or miss?");
        MsgDisp("主人公","Yellow looks like economic fortune.
It seems like Habataki Theatre Troupe's
performance will go well?");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("B040523202_05_070");
        MsgDisp("Hiiragi","Yeah, that's right.
Thank you.");
        MsgDisp("主人公","I'm glad.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040523202_05_080");
        MsgDisp("Hiiragi","Yes.
But... 
do you want to try again?");
        MsgDisp("主人公","(｛柊＊＊＊｝, you like fortune telling
this much...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523202_05_090");
    MsgDisp("Hiiragi","Right. The yellow means an increase in
economic fortune. That's not very exciting
is it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
