MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY",0.01);
ChLayout(1);
ChNanaType(0);
ChOpen(4,30,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("O020400001_04_000");
    MsgDisp("Nanatsumori","Well, isn't it fine for a girl
to lose in a match of power?");
    MsgDisp("主人公","(I lost......
I wish I had tried harder.)");
    break ;
    case 3:
    VoicePlay("O020400001_04_010");
    MsgDisp("Nanatsumori","I think you could've been
more serious, no?");
    MsgDisp("主人公","Huh?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("O020400001_04_020");
    MsgDisp("Nanatsumori","I thought you could've done it.
Too bad.");
    MsgDisp("主人公","(I lost......
I wish I had tried harder.)");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(4);
    VoicePlay("O020400001_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","｛七ツ森＊｝, I lost......");
    ChMotion(4,1,1);
    VoicePlay("O020400001_04_040");
    MsgDisp("Nanatsumori","Guess so.
Your hands okay?");
    MsgDisp("主人公","Yeah.
Thanks for worrying.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("O020400001_04_050");
    MsgDisp("Nanatsumori","Aah, I was pretty worried.
I'm glad you aren't hurt.
Good work.");
    MsgDisp("主人公","(I might have lost the match,
but I got healed by
｛七ツ森＊｝'s kindness......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
