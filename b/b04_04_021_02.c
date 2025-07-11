BGOpen("wf210",0);
ChSet(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,1);
ChMouthOpenLevel(4,10);
VoicePlay("B040402102_04_000");
MsgDisp("Nanatsumori","Phew...");
MsgSel("Arer you bored?","Are you sleeping properly?","That was a huge yawn!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,1);
        ChMouth(4,0);
        ChMotion(4,1);
        VoicePlay("B040402102_04_010");
        MsgDisp("Nanatsumori","Honestly, a bit.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1);
        VoicePlay("B040402102_04_020");
        MsgDisp("Nanatsumori","Honestly, a bit?");
        MsgDisp("主人公","Sorry.
I should have picked a
more enjoyable place.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0);
        VoicePlay("B040402102_04_030");
        MsgDisp("Nanatsumori","That's not it.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1);
        VoicePlay("B040402102_04_040");
        MsgDisp("Nanatsumori","How should I say this...
When I'm with you,
I just feel at ease.");
        MsgDisp("主人公","At ease?");
        ChEye(4,4);
        ChMouth(4,3);
        VoicePlay("B040402102_04_050");
        MsgDisp("Nanatsumori","Right.");
        ChMotion(4,0);
        VoicePlay("B040402102_04_060");
        MsgDisp("Nanatsumori","I don't feel anxious at all, 
like I do at work or school.
Both my heart and my body can 
breathe a sigh of relief.");
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("B040402102_04_070");
        MsgDisp("Nanatsumori","It was the complete opposite
when I met you though?
My heart was racing every day.");
        MsgDisp("主人公","Your heart was 
racing every day?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3);
        VoicePlay("B040402102_04_080");
        MsgDisp("Nanatsumori","It was, it was.
I wondered when you would 
blurt out my true identity.");
        MsgDisp("主人公","Eh..
You thought that of me...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3);
        VoicePlay("B040402102_04_090");
        MsgDisp("Nanatsumori","Hehe...");
        MsgDisp("主人公","Hehe.");
        ChEye(4,0);
        ChMouth(4,5);
        ChMotion(4,0);
        ChCheek(4,10);
        VoicePlay("B040402102_04_100");
        MsgDisp("Nanatsumori","…………");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,2);
        VoicePlay("B040402102_04_110");
        MsgDisp("Nanatsumori","Ah, it's no good.
My heart is being made to race again.");
        MsgDisp("主人公","(?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B040402102_04_120");
    MsgDisp("Nanatsumori","I'm sleeping, but less than average.
But, it's fine. It's fun when 
I'm with you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("B040402102_04_130");
    MsgDisp("Nanatsumori","That's fine right? 
Don't stare at me, pervert.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
