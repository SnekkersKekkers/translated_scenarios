BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,2,0,0,0,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600002_06_000");
    MsgDisp("Himuro","What a vague result.");
    MsgDisp("主人公","(A draw, huh......
And we were so close......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600002_06_010");
    MsgDisp("Himuro","You could've won with
just one more push.
Well, good work.");
    MsgDisp("主人公","(A draw, huh......
And we were so close......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    ChMotion(6,5);
    VoicePlay("O020600002_06_020");
    MsgDisp("Himuro","Huh, a tie?
I thought you won......");
    MsgDisp("主人公","Sorry.
Even though you came to cheer for me......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("O020600002_06_030");
    MsgDisp("Himuro","But it was a good match.
It was worth it to come cheer.
Good work.");
    MsgDisp("主人公","(｛氷室＊＊｝, thank you.
And we were so close......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
