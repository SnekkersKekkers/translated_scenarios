MsgClose();
BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("O020700002_07_000");
    MsgDisp("Mikage","Well, that was a good match.");
    MsgDisp("主人公","(Hm, a tie.
And we were so close......)");
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O020700002_07_010");
    MsgDisp("Mikage","That's where it ends?
Don't you want to settle it?");
    MsgDisp("主人公","(Hm, a tie.
And we were so close......)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O020700002_07_020");
    MsgDisp("Mikage","That was a great match.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. We were so close to
winning, but......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O020700002_07_030");
    MsgDisp("Mikage","That's true.
But your face when you're doing your best
is really cool.");
    MsgDisp("主人公","(Haa...... I wanted to show you a win, not
a draw.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
