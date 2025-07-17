BGOpen("fp200",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408302_04_000");
MsgDisp("Nanatsumori","Haa...
There's no point in coming here in the
summer.");
MsgSel("Isn't nature pretty?","It's fun because I'm with ｛七ツ森＊｝.","Shall we eat kakigori from the stall?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040408302_04_010");
    MsgDisp("Nanatsumori","I don't get it.
I think there are more leaves in the
spring.");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040408302_04_020");
        MsgDisp("Nanatsumori","You mean you enjoy seeing me be a hater?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040408302_04_030");
        MsgDisp("Nanatsumori","There's no way it's fun.");
        MsgDisp("主人公","It's fun.");
        ChEyeOpenLevel(4,0);
        VoicePlay("B040408302_04_040");
        MsgDisp("Nanatsumori","...What are you saying?");
        MsgDisp("主人公","That when I'm with
｛七ツ森＊｝, it's fun no
matter where we are.");
        ChEye(4,4);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040408302_04_050");
        MsgDisp("Nanatsumori","......");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040408302_04_060");
        MsgDisp("Nanatsumori","So you're talking about that.
Then it's the same for me.");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("B040408302_04_070");
        MsgDisp("Nanatsumori","But, when I'm here, I have that feeling as
much as I feel fear.");
        MsgDisp("主人公","Fear?");
        ChMotion(4,0,1);
        VoicePlay("B040408302_04_080");
        MsgDisp("Nanatsumori","Right.
There's lots of bugs I'm scared of.
And, it's super hot.");
        MsgDisp("主人公","Ah.
Sorry, I didn't notice.");
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,1,1);
        VoicePlay("B040408302_04_090");
        MsgDisp("Nanatsumori","No, I'm also sorry.
I got irritated on my own, and took it out
on you.");
        MsgDisp("主人公","No, it's alright.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040408302_04_100");
        MsgDisp("Nanatsumori","You and I both have fun when we're
together, right?");
        MsgDisp("主人公","Yeah.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040408302_04_110");
        MsgDisp("Nanatsumori","Then, I'll pull myself together, and let's
resume our date.");
        MsgDisp("主人公","Yeah!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040408302_04_120");
    MsgDisp("Nanatsumori","Agreed.
Ah, but I won't treat you to kakigori,
okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
