MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,2);
    ChMouthOpenLevel(4,0);
    VoicePlay("N020400002_04_000");
    MsgDisp("Nanatsumori","...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChMotion(4,1,1);
    ChMouthOpenLevel(4,#1);
    VoicePlay("N020400002_04_010");
    MsgDisp("Nanatsumori","I'm not the type to get happy or sad when
I see these things.
Let's move on.");
    MsgDisp("主人公","(Oof...
I've got to study harder.)");
    break ;
    case 3:
    ChEye(4,2);
    VoicePlay("N020400002_04_020");
    MsgDisp("Nanatsumori","Oh?
I thought you'd be higher on the list.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChMotion(4,1,1);
    VoicePlay("N020400002_04_030");
    MsgDisp("Nanatsumori","Well, if you do well on school exams your
stomach won't turn.");
    MsgDisp("主人公","(Oof...
I've got to study harder.)");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    VoicePlay("N020400002_04_040");
    MsgDisp("Nanatsumori","Oh?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("N020400002_04_050");
    MsgDisp("Nanatsumori","I thought you were gonna do better.
Are you taking this seriously?");
    ChMotion(4,0,1);
    VoicePlay("N020400002_04_060");
    MsgDisp("Nanatsumori","It's okay to not care too much but, this
is a little suprising.
I see...");
    MsgDisp("主人公","(Hmm, I've got to study harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
