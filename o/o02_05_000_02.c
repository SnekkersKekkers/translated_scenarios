BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020500002_05_000");
    MsgDisp("Hiiragi","Thank you for your hard work.
It was a good match.");
    MsgDisp("主人公","(Haa, and we were so close......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,4,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020500002_05_010");
    MsgDisp("Hiiragi","You looked as though you were
having fun while pulling it.
You were just one step away.");
    MsgDisp("主人公","(A draw, huh.
And we were so close......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,4,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(5);
    VoicePlay("O020500002_05_020");
    MsgDisp("Hiiragi","｛主人公｝, you did your best.");
    MsgDisp("主人公","Thanks......
But it was a tie.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("O020500002_05_030");
    MsgDisp("Hiiragi","Is that so? In terms of art,
your team is victorious. Your side
profile was powerful and dignified.");
    MsgDisp("主人公","(In terms of art??
Tug of war isn't about that
kind of thing......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
