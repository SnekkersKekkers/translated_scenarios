MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,2,8,#1,0,0);
VoicePlay("B040402302_04_000");
MsgDisp("Nanatsumori","There's lots of couples huh...");
MsgSel("Aren't we also one?","How sweet","Is there some sort of jinx on us?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040402302_04_010");
        MsgDisp("Nanatsumori","...Are we?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,4);
        ChEyeOpenLevel(4,10);
        ChCheek(4,8);
        VoicePlay("B040402302_04_020");
        MsgDisp("Nanatsumori","Eh∋");
        MsgDisp("主人公","Ah, are we not...?");
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,#1);
        VoicePlay("B040402302_04_030");
        MsgDisp("Nanatsumori","Hmー... A man and woman are going on a
date, would it be an exaggeration to call
them a cou——");
        ChEye(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040402302_04_040");
        MsgDisp("Nanatsumori","There's no reason to call them a couple if
they're not going out...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040402302_04_050");
        MsgDisp("Nanatsumori","No, no, how did it come to that∋
Are you...
not bothered?");
        MsgDisp("主人公","eh.
I...");
        ChEye(4,0);
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040402302_04_060");
        MsgDisp("Nanatsumori","I...");
        MsgDisp("主人公","...What about you, ｛七ツ森＊｝?");
        ChEye(4,4);
        ChMouth(4,5);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040402302_04_070");
        MsgDisp("Nanatsumori","Ha∋
You're responding with a question∈");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040402302_04_080");
        MsgDisp("Nanatsumori","I...");
        SEPlay("EV_SE_517");
        Wait(110,0);
        ChEye(4,5);
        ChMouth(4,5);
        ChMotion(4,0,1);
        ChMouthOpenLevel(4,0);
        SEStop("EV_SE_517",2);
        ChEye(4,0);
        ChMouth(4,4);
        VoicePlay("B040402302_04_090");
        MsgDisp("Nanatsumori","...I see.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040402302_04_100");
        MsgDisp("Nanatsumori","My reply is the sound I just made.");
        MsgDisp("主人公","(The pretty sound just now is
｛七ツ森＊｝'s answer?
I wonder what it means...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040402302_04_110");
    MsgDisp("Nanatsumori","Well, they're probably normies.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040402302_04_120");
    MsgDisp("Nanatsumori","They say blue is the color of happiness.
Should I look into it? If I find something
convincing, I might post it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
