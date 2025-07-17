BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,3,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040500002_05_000");
    MsgDisp("Hiiragi","The same score?
What a coincidence.");
    MsgDisp("主人公","(A draw, huh...
Hm, it's too bad!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,2,2,9,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("O040500002_05_010");
    MsgDisp("Hiiragi","A draw?
Aah, I have regrets about my last toss.");
    MsgDisp("主人公","(A draw, huh...
Hm, it's too bad!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040500002_05_020");
    MsgDisp("Hiiragi","We weren't victorious, but I still enjoyed
myself.
I suppose I'm satisfied?");
    MsgDisp("主人公","(A draw, huh...
Hm, it's too bad!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
