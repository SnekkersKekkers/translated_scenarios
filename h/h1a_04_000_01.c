BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0400001_04_000");
    MsgDisp("Nanatsumori","You worked hard.");
    MsgDisp("主人公","｛七ツ森＊｝...
We lost...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("H1A0400001_04_010");
    MsgDisp("Nanatsumori","Yeah, guess so.
But I still had a good time watching.
Thank you.");
    ChEye(4,4);
    ChMotion(4,0,1);
    VoicePlay("H1A0400001_04_020");
    MsgDisp("Nanatsumori","Just the fact that you guys made it here
is admirable.
Really, good work.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the baseball club manager...)");
    break ;
    case 4:
    case 5:
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H1A0400001_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","｛七ツ森＊｝...
Ugh, we lost...");
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("H1A0400001_04_040");
    MsgDisp("Nanatsumori","Yeah.");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("H1A0400001_04_050");
    MsgDisp("Nanatsumori","...Are you crying?");
    MsgDisp("主人公","It's just...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("H1A0400001_04_060");
    MsgDisp("Nanatsumori","Haa～... Being frustrated, or sad. Being
happy, or tickled, it makes you want to
cry. Humans are complicated, huh?");
    MsgDisp("主人公","... Hehe.
I guess so?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("H1A0400001_04_070");
    MsgDisp("Nanatsumori","Yeah, your smiling face is best.
You worked hard these past three years.
Good work.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the baseball club manager...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
