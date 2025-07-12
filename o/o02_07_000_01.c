BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,37,3,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700001_07_000");
    MsgDisp("Mikage","You lost, huh.
But hey, you look like you were
giving it your all.");
    MsgDisp("主人公","(Ugh...... Too bad......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(7,37,2,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700001_07_010");
    MsgDisp("Mikage","That was a good match.
Don't look so down, okay?");
    MsgDisp("主人公","｛御影＊＊｝……");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O020700001_07_020");
    MsgDisp("Mikage","Since you were so serious about it,
it'll become a good memory.");
    MsgDisp("主人公","(But I wanted to win......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,37,3,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700001_07_030");
    MsgDisp("Mikage","Good work.
You aren't hurt, right?");
    MsgDisp("主人公","I'm not......");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O020700001_07_040");
    MsgDisp("Mikage","......Don't make that face.
You were pulling so happily
until just a bit ago.");
    MsgDisp("主人公","But, I did lose.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O020700001_07_050");
    MsgDisp("Mikage","Guess so.
That's also a part of
the sports festival.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("O020700001_07_060");
    MsgDisp("Mikage","Come on, let's smile for
the next event!");
    MsgDisp("主人公","(Yeah...... I lost, but
I still had fun......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
