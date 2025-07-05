BGOpen("wf221",0);
ChLayout(1);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
ScrFadeIn(0);
VoicePlay("B040302202_03_000");
MsgDisp("Honda","Oh! They're accepting suggestions for the 
name of the tour boat.");
MsgSel("I wonder if they didn't have one until now?","What about the usual: Habataki?","How about calling it HMS｛本多＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040302202_03_010");
    MsgDisp("Honda","The tour boat has been in operation for a
long time. I wonder if they want to change
the name because it didn't stick?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("B040302202_03_020");
    MsgDisp("Honda","Haha, the usual.
Isn't that what it's called now?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040302202_03_030");
        MsgDisp("Honda","Huh, why?
It'll look like I own it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("B040302202_03_040");
        MsgDisp("Honda","They definitley won't pick it.");
        MsgDisp("主人公","Maybe.
Then what about just ｛本多＊＊｝?");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,2,1);
        VoicePlay("B040302202_03_050");
        MsgDisp("Honda","Maybe not something personal...
Ah, what about Habataki?");
        ChEye(3,2);
        ChMouth(3,1);
        ChMotion(3,5,1);
        VoicePlay("B040302202_03_060");
        MsgDisp("Honda","Darn, that's not good either,");
        MsgDisp("主人公","Hehe, it's difficult isn't it?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4,1);
        VoicePlay("B040302202_03_070");
        MsgDisp("Honda","If it was up to me,
I would name it after you too.");
        MsgDisp("主人公","Really?");
        ChEye(3,3);
        ChMouth(3,0);
        ChMotion(3,5,1);
        VoicePlay("B040302202_03_080");
        MsgDisp("Honda","That's it! What about a secret nickname
just between us; Rose Queen?");
        MsgDisp("主人公","Oh? After the Habataki High School Festival 
Rose Queen?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1,1);
        VoicePlay("B040302202_03_090");
        MsgDisp("Honda","Yes! Because the Rose Queen for me 
has always been you.");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,3,1);
        ChCheek(3,5);
        VoicePlay("B040302202_03_100");
        MsgDisp("Honda","What?");
        MsgDisp("主人公","(｛本多＊＊｝...
I'm happy, but a kind of shy as well.)");
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
