switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H382200000_22_000");
    MsgDisp("Hikaru","Hi～ Mari!
You're looking cool♪");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Did you come to cheer me on?");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H382200000_22_010");
    MsgDisp("Hikaru","Of course♪
I came to watch Mari become the
number one high school girl.");
    MsgDisp("主人公","Yeah, I'll do my best!");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H382200000_22_020");
    MsgDisp("Hikaru","Mari, I came to cheer you on♪");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Thank you!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,2,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H382200000_22_030");
    MsgDisp("Hikaru","Mari, you look so dignified in your
gi for judo.
Hikaru's going to fall for you▼");
    MsgDisp("主人公","Hehe.
I'll show you my cool side!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H382200000_22_040");
    MsgDisp("Hikaru","I want to see it!
Hikaru's going to be cheering for you
a lot, so go on and win!");
    MsgDisp("主人公","Yeah, I'll do my best!");
    ChEye(22,4);
    ChMouth(22,0);
    ChMotion(22,4,1);
    VoicePlay("H382200000_22_050");
    MsgDisp("Hikaru","Haa...... how reliable♪");
    MsgDisp("主人公","(Alright, let's do our best!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
