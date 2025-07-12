MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("N020400003_04_000");
    MsgDisp("Nanatsumori","Oh...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("N020400003_04_010");
    MsgDisp("Nanatsumori","This is terrible.
No, isn't it impressive to be there?
Please say something.");
    MsgDisp("主人公","(Oof... I really have to study harder...)");
    break ;
    case 3:
    VoicePlay("N020400003_04_020");
    MsgDisp("Nanatsumori","Huh?
Your name... where is it on the list?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝...");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("N020400003_04_030");
    MsgDisp("Nanatsumori","Hm?
Huh, for real∋
This is not good. Not good at all.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("N020400003_04_040");
    MsgDisp("Nanatsumori","Huh... do you need some cheering up?
I'll buy you a juice later.");
    MsgDisp("主人公","(Oof... I really have to study harder...)");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,0);
    VoiceEVSPlay(4);
    VoicePlay("N020400003_04_050");
    MsgDisp("Nanatsumori","｛主人公｝.
Are you kidding me...?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝...");
    VoicePlay("N020400003_04_060");
    MsgDisp("Nanatsumori","Do you feel physically okay?
Did you run out of pencil lead?");
    ChMotion(4,1,1);
    VoicePlay("N020400003_04_070");
    MsgDisp("Nanatsumori","No way, you forgot to write your name∋
Whatever the case, these results are
concerning...");
    MsgDisp("主人公","Oof...");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("N020400003_04_080");
    MsgDisp("Nanatsumori","Maybe I shouldn't say this but, if you
need anything I'm here. I'll help you as
much as I can.");
    MsgDisp("主人公","(Oof... I really have to study harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
