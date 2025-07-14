BGOpen("fp210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B040508102_05_000");
MsgDisp("Hiiragi","No matter how many times I see it, it's
unchangingly beautiful.");
MsgSel("I want to come again and again.","Umm... thank you.","Quite a lot has fallen huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMotion(5,0);
    VoicePlay("B040508102_05_010");
    MsgDisp("Hiiragi","Yes. For this season, maybe just this
place is enough.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        ChEyeOpenLevel(5,8);
        VoicePlay("B040508102_05_020");
        MsgDisp("Hiiragi","...Ah, yes, of course.
You're also beautiful.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        ChMouth(5,2);
        VoicePlay("B040508102_05_030");
        MsgDisp("Hiiragi","Eh...?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040508102_05_040");
        MsgDisp("Hiiragi","Ah, you're welcome.");
        MsgDisp("主人公","Ah, maybe...
I misunterstoo——");
        ChEye(5,3);
        ChMouth(5,4);
        VoicePlay("B040508102_05_050");
        MsgDisp("Hiiragi","No. You're lovely and beautiful as always.
You were not mistaken.");
        ChEye(5,4);
        ChMotion(5,2);
        VoicePlay("B040508102_05_060");
        MsgDisp("Hiiragi","Proof of that is when I come here, my eyes
continuously go back and forth from you
and the cherry blossoms. I am truly busy.");
        MsgDisp("主人公","Umm... ｛柊＊＊＊｝, thank you.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040508102_05_070");
        MsgDisp("Hiiragi","Then let's go and buy another enjoyable
thing, hanami dango.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        SEWait();
        MsgDisp("主人公","(You backed up my weird understanding...
｛柊＊＊＊｝, thank you.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040508102_05_080");
    MsgDisp("Hiiragi","That cannot be helped.
Don't ask for unreasonable things.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
