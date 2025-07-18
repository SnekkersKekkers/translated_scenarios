BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,1);
    VoicePlay("O040100002_01_000");
    MsgDisp("Kazama","A draw, huh.
I wish that last one went in.");
    MsgDisp("主人公","(Hm, that was close...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040100002_01_010");
    MsgDisp("Kazama","Isn't it actually hard to draw?");
    MsgDisp("主人公","(It was close.
If only I had thrown one more...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040100002_01_020");
    MsgDisp("Kazama","Well, as long as we're still unbeatable,
then it's okay.");
    MsgDisp("主人公","(Hm...we definitely didn't lose, but I
wish we had won.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
