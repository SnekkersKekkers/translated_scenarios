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
    VoicePlay("O040500000_05_000");
    MsgDisp("Hiiragi","Ah, have we won?");
    MsgDisp("主人公","(Yeah, we won with our teamwork!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,3);
    Wait(15,0);
    VoicePlay("O040500000_05_010");
    MsgDisp("Hiiragi","Amazing, we won!
The ball toss is quite fun.");
    MsgDisp("主人公","(Yeah, we won with our teamwork!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,3);
    Wait(10,0);
    VoicePlay("O040500000_05_020");
    MsgDisp("Hiiragi","We've done it!　It is our victory!
I believe that most of the balls
you tossed went in.");
    MsgDisp("主人公","(Yeah, we won with our teamwork!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
