ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("R060400003_04_000");
    MsgDisp("Nanatsumori","Oh...
that's mine.");
    MsgDisp("主人公","｛七ツ森＊｝. I knew it!");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝, you got the gift I
brought too.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("R060400003_04_010");
    MsgDisp("Nanatsumori","What a coincidence.
Can I open it?");
    MsgDisp("主人公","Yeah.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("R060400003_04_020");
    MsgDisp("Nanatsumori","Ah, I guess you got my gift.");
    MsgDisp("主人公","｛七ツ森＊｝. You're the one that
bought this present, ｛七ツ森＊｝?");
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R060400003_04_030");
    MsgDisp("Nanatsumori","Yeah.
Do you like it?");
    MsgDisp("主人公","Yeah! Hey, ｛七ツ森＊｝, you know you
got the present I brought, right?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("R060400003_04_040");
    MsgDisp("Nanatsumori","Woah, what a coincidence.
Is it okay if I open it?");
    MsgDisp("主人公","Yeah!");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("R060400003_04_050");
    MsgDisp("Nanatsumori","Do you like it?");
    MsgDisp("主人公","｛七ツ森＊｝! I'm guessing this is your
gift then, ｛七ツ森＊｝?");
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R060400003_04_060");
    MsgDisp("Nanatsumori","Yeah. I'm glad that you are the one that
got it.");
    MsgDisp("主人公","Hehe.
I'm glad too!");
    MsgDisp("主人公","Hey, ｛七ツ森＊｝, you also got the
present that I brought in.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("R060400003_04_070");
    MsgDisp("Nanatsumori","Oh... What a nice Christmas miracle. Is it
okay if I open it?");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
