switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700003_07_000");
    MsgDisp("Mikage","They say you were able to pull off a super
difficult move during the rhythmic
gymnastics club's joint practice.
Congrats.");
    MsgDisp("主人公","Yes, thank you very much1");
    MsgDisp("主人公","(Yay!
I was praised by
｛御影＊＊｝!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,2,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700003_07_010");
    MsgDisp("Mikage","Haa...
I wanted to see it too.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
What's up?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("X110700003_07_020");
    MsgDisp("Mikage","I heard.
You pulled off a new move during the
rhythmic gymnastics club's joint practice.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("X110700003_07_030");
    MsgDisp("Mikage","Apparently it was beautiful.
I'll come cheer you on one day.");
    MsgDisp("主人公","(To think that
｛御影＊＊｝ is cheering
for me, I'm happy.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
