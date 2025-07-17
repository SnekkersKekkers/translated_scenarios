BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_B",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0400001_04_000");
    MsgDisp("Nanatsumori","Yo.
Good work.");
    MsgDisp("主人公","｛七ツ森＊｝...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H2A0400001_04_010");
    MsgDisp("Nanatsumori","Hey... stop that.
Do you want me to comfort you?
Me, who's super bad at sports?");
    MsgDisp("主人公","...Hehe, ahaha!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H2A0400001_04_020");
    MsgDisp("Nanatsumori","Don't laugh at me.
Well, as long as you're happy, I guess.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the track and field club
manager...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_B",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H2A0400001_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.
Good work.");
    MsgDisp("主人公","｛七ツ森＊｝...
Ugh...");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("H2A0400001_04_050");
    MsgDisp("Nanatsumori","Wait.
Don't start crying right here.");
    MsgDisp("主人公","Huh...");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("H2A0400001_04_060");
    MsgDisp("Nanatsumori","You're going to make me cry, too.
I think I really will.");
    MsgDisp("主人公","...Hehe!");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H2A0400001_04_070");
    MsgDisp("Nanatsumori","Yeah.
That's good.
Your smiling face.");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("H2A0400001_04_080");
    MsgDisp("Nanatsumori","Even if you all didn't win the
championships, I know how amazing our Haba
High track team is, including you.");
    ChMotion(4,3,1);
    VoicePlay("H2A0400001_04_090");
    MsgDisp("Nanatsumori","So you don't need to cry.
I'm proud of you, actually.");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the track and field club
manager...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
