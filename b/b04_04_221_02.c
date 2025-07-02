BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040422102_04_000");
MsgDisp("Nanatsumori","Ah...
is that a rainbow over there?");
MsgSel("You have to hurry and take a picture∈","There was a light drizzle after all, just now","Looks like the sky is giving their blessing▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040422102_04_010");
    MsgDisp("Nanatsumori","ＯＫ!
I got a good spot before
other people noticed.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040422102_04_020");
    MsgDisp("Nanatsumori","Ahh, I see.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040422102_04_030");
        MsgDisp("Nanatsumori","...Blessing on what>");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040422102_04_040");
        MsgDisp("Nanatsumori","Right...");
        ChEye(4,0);
        ChMouth(4,4);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040422102_04_050");
        MsgDisp("Nanatsumori","...Eh?
That means——");
        MsgDisp("主人公","Umm, 
I meant a blessing on us.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040422102_04_060");
        MsgDisp("Nanatsumori","On us?");
        MsgDisp("主人公","COngratulations, 
as they would say.");
        ChEye(4,5);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040422102_04_070");
        MsgDisp("Nanatsumori","W...w-wait a second.");
        MsgDisp("主人公","Y-yeah.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040422102_04_080");
        MsgDisp("Nanatsumori","...You sometimes drop some 
bombshell statements that I 
don't really understand.");
        ChEye(4,2);
        VoicePlay("B040422102_04_090");
        MsgDisp("Nanatsumori","It's seriously bad for the heart.
I'm sure you don't mean it though.");
        MsgDisp("主人公","Umm... I'm sorry, okay?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040422102_04_100");
        MsgDisp("Nanatsumori","T-that's exactly it.
You're so sneakyー......");
        MsgDisp("主人公","Uugh.");
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040422102_04_110");
        MsgDisp("Nanatsumori","...Pfft!");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040422102_04_120");
        MsgDisp("Nanatsumori","So...
Could you explain why the rainbow
is a blessing on us? Hmm?");
        MsgDisp("主人公","(｛七ツ森＊｝, you're teasing me...)");
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
