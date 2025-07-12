BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,37,2,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700000_07_000");
    MsgDisp("Mikage","Ooh, you won!");
    MsgDisp("主人公","(Yay, victory!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(7,37,3,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700000_07_010");
    MsgDisp("Mikage","Did your practice pay off?
Congrats!");
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","(Yay, victory!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,37,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020700000_07_020");
    MsgDisp("Mikage","That was a good match.
My hands were sweating.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("O020700000_07_030");
    MsgDisp("Mikage","You definitely won in the end.
Isn't that amazing.");
    MsgDisp("主人公","Thank you very much!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O020700000_07_040");
    MsgDisp("Mikage","Yeah, that's a nice expression.
This is the best sports festival, huh!");
    MsgDisp("主人公","(Yay, victory!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
